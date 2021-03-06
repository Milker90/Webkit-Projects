/*
 * Copyright (C) 2006, 2008 Apple Inc. All rights reserved.
 * Copyright (C) Research In Motion Limited 2009-2010. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#include "config.h"
#include "SharedBuffer.h"

#include "PurgeableBuffer.h"
#include <wtf/PassOwnPtr.h>

#if ENABLE(DISK_IMAGE_CACHE)
#include "DiskImageCache.h"
#endif

using namespace std;

namespace WebCore {

static const unsigned segmentSize = 0x1000;
static const unsigned segmentPositionMask = 0x0FFF;

static inline unsigned segmentIndex(unsigned position)
{
    return position / segmentSize;
}

static inline unsigned offsetInSegment(unsigned position)
{
    return position & segmentPositionMask;
}

static inline char* allocateSegment()
{
    return static_cast<char*>(fastMalloc(segmentSize));
}

static inline void freeSegment(char* p)
{
    fastFree(p);
}

SharedBuffer::SharedBuffer()
    : m_size(0)
    , m_shouldUsePurgeableMemory(false)
#if ENABLE(DISK_IMAGE_CACHE)
    , m_isMemoryMapped(false)
    , m_diskImageCacheId(DiskImageCache::invalidDiskCacheId)
    , m_notifyMemoryMappedCallback(NULL)
    , m_notifyMemoryMappedCallbackData(NULL)
#endif
{
}

SharedBuffer::SharedBuffer(const char* data, int size)
    : m_size(0)
    , m_shouldUsePurgeableMemory(false)
#if ENABLE(DISK_IMAGE_CACHE)
    , m_isMemoryMapped(false)
    , m_diskImageCacheId(DiskImageCache::invalidDiskCacheId)
    , m_notifyMemoryMappedCallback(NULL)
    , m_notifyMemoryMappedCallbackData(NULL)
#endif
{
    append(data, size);
}

SharedBuffer::SharedBuffer(const unsigned char* data, int size)
    : m_size(0)
    , m_shouldUsePurgeableMemory(false)
#if ENABLE(DISK_IMAGE_CACHE)
    , m_isMemoryMapped(false)
    , m_diskImageCacheId(DiskImageCache::invalidDiskCacheId)
    , m_notifyMemoryMappedCallback(NULL)
    , m_notifyMemoryMappedCallbackData(NULL)
#endif
{
    append(reinterpret_cast<const char*>(data), size);
}
    
SharedBuffer::~SharedBuffer()
{
#if ENABLE(DISK_IMAGE_CACHE)
    if (m_diskImageCacheId) {
        diskImageCache()->removeItem(m_diskImageCacheId);
        m_isMemoryMapped = false;
        m_diskImageCacheId = DiskImageCache::invalidDiskCacheId;
    }
#endif
    clear();
}

PassRefPtr<SharedBuffer> SharedBuffer::adoptVector(Vector<char>& vector)
{
    RefPtr<SharedBuffer> buffer = create();
    buffer->m_buffer.swap(vector);
    buffer->m_size = buffer->m_buffer.size();
    return buffer.release();
}

PassRefPtr<SharedBuffer> SharedBuffer::adoptPurgeableBuffer(PassOwnPtr<PurgeableBuffer> purgeableBuffer) 
{ 
    ASSERT(!purgeableBuffer->isPurgeable());
    RefPtr<SharedBuffer> buffer = create();
    buffer->m_purgeableBuffer = purgeableBuffer;
    return buffer.release();
}

unsigned SharedBuffer::size() const
{
    if (hasPlatformData())
        return platformDataSize();
    
    if (m_purgeableBuffer)
        return m_purgeableBuffer->size();
    
    return m_size;
}

/*
 * Try to create a PurgeableBuffer. We can fail to create any of the following
 * reasons
 *   - shouldUsePurgeableMemory is set to false.
 *   - the size of the buffer is less than the minimum size required by
 *     PurgeableBuffer (currently 16k).
 *   - vm_allocate() call fails.
 */
void SharedBuffer::createPurgeableBuffer() const
{
    // If we have already created one, just return.
    if (m_purgeableBuffer)
        return;

    if (!m_shouldUsePurgeableMemory)
        return;

    m_purgeableBuffer = PurgeableBuffer::create(m_size);
    if (!m_purgeableBuffer)
        return;

    // Copy any data from m_buffer vector and segments into the
    // PurgeableBuffer.
    unsigned bufferSize = m_buffer.size();
    char* destination = m_purgeableBuffer->data();
    if (bufferSize) {
        memcpy(destination, m_buffer.data(), bufferSize);
        destination += bufferSize;
        m_buffer.clear();
    }

    unsigned bytesLeft = m_size - bufferSize;
    for (unsigned i = 0; i < m_segments.size(); ++i) {
        unsigned bytesToCopy = min(bytesLeft, segmentSize);
        memcpy(destination, m_segments[i], bytesToCopy);
        destination += bytesToCopy;
        bytesLeft -= bytesToCopy;
        freeSegment(m_segments[i]);
    }
    m_segments.clear();
#if HAVE(CFNETWORK_DATA_ARRAY_CALLBACK)
    copyDataArrayAndClear(destination, bytesLeft);
#endif
}

#if ENABLE(DISK_IMAGE_CACHE)
bool SharedBuffer::isAllowedToBeMemoryMapped() const
{
    return m_diskImageCacheId != DiskImageCache::invalidDiskCacheId;
}

SharedBuffer::MemoryMappingState SharedBuffer::allowToBeMemoryMapped()
{
    if (isMemoryMapped())
        return SharedBuffer::SuccessAlreadyMapped;

    if (isAllowedToBeMemoryMapped())
        return SharedBuffer::PreviouslyQueuedForMapping;

    m_diskImageCacheId = diskImageCache()->writeItem(this);
    if (m_diskImageCacheId == DiskImageCache::invalidDiskCacheId)
        return SharedBuffer::FailureCacheFull;

    return SharedBuffer::QueuedForMapping;
}

void SharedBuffer::failedMemoryMap()
{
    if (m_notifyMemoryMappedCallback)
        m_notifyMemoryMappedCallback(this, SharedBuffer::Failed, m_notifyMemoryMappedCallbackData);
}
    
void SharedBuffer::markAsMemoryMapped()
{
    ASSERT(!isMemoryMapped());

    m_isMemoryMapped = true;
    unsigned savedSize = size();
    clear();
    m_size = savedSize;
    
    if (m_notifyMemoryMappedCallback)
        m_notifyMemoryMappedCallback(this, SharedBuffer::Succeeded, m_notifyMemoryMappedCallbackData);
}

SharedBuffer::MemoryMappedNotifyCallbackData SharedBuffer::memoryMappedNotificationCallbackData() const
{
    return m_notifyMemoryMappedCallbackData;
}

SharedBuffer::MemoryMappedNotifyCallback SharedBuffer::memoryMappedNotificationCallback() const
{
    return m_notifyMemoryMappedCallback;
}

void SharedBuffer::setMemoryMappedNotificationCallback(SharedBuffer::MemoryMappedNotifyCallback callback, MemoryMappedNotifyCallbackData data)
{
    ASSERT(!m_notifyMemoryMappedCallback || !callback);
    ASSERT(!m_notifyMemoryMappedCallbackData || !data);
    
    m_notifyMemoryMappedCallback = callback;
    m_notifyMemoryMappedCallbackData = data;
}
#endif

const char* SharedBuffer::data() const
{
#if ENABLE(DISK_IMAGE_CACHE)
    if (isMemoryMapped()) {
        void* mapping = diskImageCache()->dataForItem(m_diskImageCacheId);
        return static_cast<const char*>(mapping);
    }
#endif

    if (hasPlatformData())
        return platformData();
    
    createPurgeableBuffer();

    if (m_purgeableBuffer)
        return m_purgeableBuffer->data();
    
    return buffer().data();
}

void SharedBuffer::append(const char* data, unsigned length)
{
    ASSERT(!m_purgeableBuffer);
#if ENABLE(DISK_IMAGE_CACHE)
    ASSERT(!isMemoryMapped());
#endif

    maybeTransferPlatformData();
    
    unsigned positionInSegment = offsetInSegment(m_size - m_buffer.size());
    m_size += length;

    if (m_size <= segmentSize) {
        // No need to use segments for small resource data
        m_buffer.append(data, length);
        return;
    }

    char* segment;
    if (!positionInSegment) {
        segment = allocateSegment();
        m_segments.append(segment);
    } else
        segment = m_segments.last() + positionInSegment;

    unsigned segmentFreeSpace = segmentSize - positionInSegment;
    unsigned bytesToCopy = min(length, segmentFreeSpace);

    for (;;) {
        memcpy(segment, data, bytesToCopy);
        if (static_cast<unsigned>(length) == bytesToCopy)
            break;

        length -= bytesToCopy;
        data += bytesToCopy;
        segment = allocateSegment();
        m_segments.append(segment);
        bytesToCopy = min(length, segmentSize);
    }
}

void SharedBuffer::clear()
{
    clearPlatformData();
    
    for (unsigned i = 0; i < m_segments.size(); ++i)
        freeSegment(m_segments[i]);

    m_segments.clear();
    m_size = 0;

    m_buffer.clear();
    m_purgeableBuffer.clear();
#if HAVE(CFNETWORK_DATA_ARRAY_CALLBACK)
    m_dataArray.clear();
#endif
}

PassRefPtr<SharedBuffer> SharedBuffer::copy() const
{
    RefPtr<SharedBuffer> clone(adoptRef(new SharedBuffer));
    if (m_purgeableBuffer || hasPlatformData()) {
        clone->append(data(), size());
        return clone;
    }

    clone->m_size = m_size;
    clone->m_buffer.reserveCapacity(m_size);
    clone->m_buffer.append(m_buffer.data(), m_buffer.size());
    for (unsigned i = 0; i < m_segments.size(); ++i)
        clone->m_buffer.append(m_segments[i], segmentSize);
    return clone;
}

PassOwnPtr<PurgeableBuffer> SharedBuffer::releasePurgeableBuffer()
{ 
    ASSERT(hasOneRef()); 
    return m_purgeableBuffer.release(); 
}

const Vector<char>& SharedBuffer::buffer() const
{
#if ENABLE(DISK_IMAGE_CACHE)
    ASSERT(!isMemoryMapped());
#endif
    unsigned bufferSize = m_buffer.size();
    if (m_size > bufferSize) {
        m_buffer.resize(m_size);
        char* destination = m_buffer.data() + bufferSize;
        unsigned bytesLeft = m_size - bufferSize;
        for (unsigned i = 0; i < m_segments.size(); ++i) {
            unsigned bytesToCopy = min(bytesLeft, segmentSize);
            memcpy(destination, m_segments[i], bytesToCopy);
            destination += bytesToCopy;
            bytesLeft -= bytesToCopy;
            freeSegment(m_segments[i]);
        }
        m_segments.clear();
#if HAVE(CFNETWORK_DATA_ARRAY_CALLBACK)
        copyDataArrayAndClear(destination, bytesLeft);
#endif
    }
    return m_buffer;
}

unsigned SharedBuffer::getSomeData(const char*& someData, unsigned position) const
{
#if ENABLE(DISK_IMAGE_CACHE)
    ASSERT(position < size());
    if (isMemoryMapped()) {
        void* mapping = diskImageCache()->dataForItem(m_diskImageCacheId);
        const char* data = static_cast<const char*>(mapping);
        someData = data + position;
        return size() - position;
    }
#endif

    if (hasPlatformData() || m_purgeableBuffer) {
        someData = data() + position;
        return size() - position;
    }

    if (position >= m_size) {
        someData = 0;
        return 0;
    }

    unsigned consecutiveSize = m_buffer.size();
    if (position < consecutiveSize) {
        someData = m_buffer.data() + position;
        return consecutiveSize - position;
    }
 
    position -= consecutiveSize;
    unsigned segmentedSize = m_size - consecutiveSize;
    unsigned segments = m_segments.size();
    unsigned segment = segmentIndex(position);
    ASSERT(segment < segments);

    unsigned positionInSegment = offsetInSegment(position);
    someData = m_segments[segment] + positionInSegment;
    return segment == segments - 1 ? segmentedSize - position : segmentSize - positionInSegment;
}

#if !USE(CF) || PLATFORM(QT)

inline void SharedBuffer::clearPlatformData()
{
}

inline void SharedBuffer::maybeTransferPlatformData()
{
}

inline bool SharedBuffer::hasPlatformData() const
{
    return false;
}

inline const char* SharedBuffer::platformData() const
{
    ASSERT_NOT_REACHED();

    return 0;
}

inline unsigned SharedBuffer::platformDataSize() const
{
    ASSERT_NOT_REACHED();
    
    return 0;
}

#endif

}
