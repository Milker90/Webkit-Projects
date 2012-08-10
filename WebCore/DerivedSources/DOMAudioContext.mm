/*
 * This file is part of the WebKit open source project.
 * This file has been generated by generate-bindings.pl. DO NOT MODIFY!
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

#import "config.h"

#if ENABLE(WEB_AUDIO)

#import "DOMInternal.h"

#import "DOMAudioContext.h"

#import "AudioBuffer.h"
#import "AudioBufferSourceNode.h"
#import "AudioChannelMerger.h"
#import "AudioChannelSplitter.h"
#import "AudioContext.h"
#import "AudioDestinationNode.h"
#import "AudioGainNode.h"
#import "AudioListener.h"
#import "AudioPannerNode.h"
#import "ConvolverNode.h"
#import "DOMAudioBufferInternal.h"
#import "DOMAudioBufferSourceNodeInternal.h"
#import "DOMAudioChannelMergerInternal.h"
#import "DOMAudioChannelSplitterInternal.h"
#import "DOMAudioContextInternal.h"
#import "DOMAudioDestinationNodeInternal.h"
#import "DOMAudioGainNodeInternal.h"
#import "DOMAudioListenerInternal.h"
#import "DOMAudioPannerNodeInternal.h"
#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMConvolverNodeInternal.h"
#import "DOMDelayNodeInternal.h"
#import "DOMDynamicsCompressorNodeInternal.h"
#import "DOMEventInternal.h"
#import "DOMHighPass2FilterNodeInternal.h"
#import "DOMJavaScriptAudioNodeInternal.h"
#import "DOMLowPass2FilterNodeInternal.h"
#import "DOMNodeInternal.h"
#import "DOMRealtimeAnalyserNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "DelayNode.h"
#import "DynamicsCompressorNode.h"
#import "EventListener.h"
#import "ExceptionHandlers.h"
#import "HighPass2FilterNode.h"
#import "JSMainThreadExecState.h"
#import "JavaScriptAudioNode.h"
#import "LowPass2FilterNode.h"
#import "ObjCEventListener.h"
#import "RealtimeAnalyserNode.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::AudioContext*>(_internal)

@implementation DOMAudioContext

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMAudioContext class], self))
        return;

    if (_internal)
        IMPL->deref();
    [super dealloc];
}

- (void)finalize
{
    if (_internal)
        IMPL->deref();
    [super finalize];
}

- (DOMAudioDestinationNode *)destination
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->destination()));
}

- (float)currentTime
{
    WebCore::JSMainThreadNullState state;
    return IMPL->currentTime();
}

- (float)sampleRate
{
    WebCore::JSMainThreadNullState state;
    return IMPL->sampleRate();
}

- (DOMAudioListener *)listener
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->listener()));
}

- (id <DOMEventListener>)oncomplete
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->oncomplete());
}

- (void)setOncomplete:(id <DOMEventListener>)newOncomplete
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOncomplete);

    IMPL->setOncomplete(WTF::getPtr(nativeEventListener));
}

- (DOMAudioBuffer *)createBuffer
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    DOMAudioBuffer *result = kit(WTF::getPtr(IMPL->createBuffer(ec)));
    WebCore::raiseOnDOMError(ec);
    return result;
}

- (DOMAudioBufferSourceNode *)createBufferSource
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createBufferSource()));
}

- (DOMAudioGainNode *)createGainNode
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createGainNode()));
}

- (DOMDelayNode *)createDelayNode
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createDelayNode()));
}

- (DOMLowPass2FilterNode *)createLowPass2Filter
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createLowPass2Filter()));
}

- (DOMHighPass2FilterNode *)createHighPass2Filter
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createHighPass2Filter()));
}

- (DOMAudioPannerNode *)createPanner
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createPanner()));
}

- (DOMConvolverNode *)createConvolver
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createConvolver()));
}

- (DOMDynamicsCompressorNode *)createDynamicsCompressor
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createDynamicsCompressor()));
}

- (DOMRealtimeAnalyserNode *)createAnalyser
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createAnalyser()));
}

- (DOMJavaScriptAudioNode *)createJavaScriptNode:(unsigned)bufferSize
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createJavaScriptNode(bufferSize)));
}

- (DOMAudioChannelSplitter *)createChannelSplitter
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createChannelSplitter()));
}

- (DOMAudioChannelMerger *)createChannelMerger
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->createChannelMerger()));
}

- (void)startRendering
{
    WebCore::JSMainThreadNullState state;
    IMPL->startRendering();
}

@end

WebCore::AudioContext* core(DOMAudioContext *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::AudioContext*>(wrapper->_internal) : 0;
}

DOMAudioContext *kit(WebCore::AudioContext* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMAudioContext *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMAudioContext *wrapper = [[DOMAudioContext alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}

#endif // ENABLE(WEB_AUDIO)
