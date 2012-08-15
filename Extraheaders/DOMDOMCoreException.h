/*
 * Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009 Apple Inc. All rights reserved.
 * Copyright (C) 2006 Samuel Weinig <sam.weinig@gmail.com>
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

#import <WebCore/DOMObject.h>

#if WEBKIT_VERSION_MAX_ALLOWED >= WEBKIT_VERSION_LATEST

@class NSString;

enum {
    DOM_INDEX_SIZE_ERR = 1,
    DOM_DOMSTRING_SIZE_ERR = 2,
    DOM_HIERARCHY_REQUEST_ERR = 3,
    DOM_WRONG_DOCUMENT_ERR = 4,
    DOM_INVALID_CHARACTER_ERR = 5,
    DOM_NO_DATA_ALLOWED_ERR = 6,
    DOM_NO_MODIFICATION_ALLOWED_ERR = 7,
    DOM_NOT_FOUND_ERR = 8,
    DOM_NOT_SUPPORTED_ERR = 9,
    DOM_INUSE_ATTRIBUTE_ERR = 10,
    DOM_INVALID_STATE_ERR = 11,
    DOM_SYNTAX_ERR = 12,
    DOM_INVALID_MODIFICATION_ERR = 13,
    DOM_NAMESPACE_ERR = 14,
    DOM_INVALID_ACCESS_ERR = 15,
    DOM_VALIDATION_ERR = 16,
    DOM_TYPE_MISMATCH_ERR = 17,
    DOM_SECURITY_ERR = 18,
    DOM_NETWORK_ERR = 19,
    DOM_ABORT_ERR = 20,
    DOM_URL_MISMATCH_ERR = 21,
    DOM_QUOTA_EXCEEDED_ERR = 22,
    DOM_TIMEOUT_ERR = 23,
    DOM_INVALID_NODE_TYPE_ERR = 24,
    DOM_DATA_CLONE_ERR = 25
};

@interface DOMDOMCoreException : DOMObject
@property(readonly) unsigned short code;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *message;
@end

#endif