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

#if ENABLE(OFFLINE_WEB_APPLICATIONS)

#import "DOMInternal.h"

#import "DOMDOMApplicationCache.h"

#import "DOMApplicationCache.h"
#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMDOMApplicationCacheInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "Event.h"
#import "EventListener.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "ObjCEventListener.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::DOMApplicationCache*>(_internal)

@implementation DOMDOMApplicationCache

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMDOMApplicationCache class], self))
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

- (unsigned short)status
{
    WebCore::JSMainThreadNullState state;
    return IMPL->status();
}

- (id <DOMEventListener>)onchecking
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onchecking());
}

- (void)setOnchecking:(id <DOMEventListener>)newOnchecking
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnchecking);

    IMPL->setOnchecking(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onerror
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onerror());
}

- (void)setOnerror:(id <DOMEventListener>)newOnerror
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnerror);

    IMPL->setOnerror(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onnoupdate
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onnoupdate());
}

- (void)setOnnoupdate:(id <DOMEventListener>)newOnnoupdate
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnnoupdate);

    IMPL->setOnnoupdate(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)ondownloading
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->ondownloading());
}

- (void)setOndownloading:(id <DOMEventListener>)newOndownloading
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOndownloading);

    IMPL->setOndownloading(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onprogress
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onprogress());
}

- (void)setOnprogress:(id <DOMEventListener>)newOnprogress
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnprogress);

    IMPL->setOnprogress(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onupdateready
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onupdateready());
}

- (void)setOnupdateready:(id <DOMEventListener>)newOnupdateready
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnupdateready);

    IMPL->setOnupdateready(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)oncached
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->oncached());
}

- (void)setOncached:(id <DOMEventListener>)newOncached
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOncached);

    IMPL->setOncached(WTF::getPtr(nativeEventListener));
}

- (id <DOMEventListener>)onobsolete
{
    WebCore::JSMainThreadNullState state;
    return kit(IMPL->onobsolete());
}

- (void)setOnobsolete:(id <DOMEventListener>)newOnobsolete
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newOnobsolete);

    IMPL->setOnobsolete(WTF::getPtr(nativeEventListener));
}

- (void)update
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->update(ec);
    WebCore::raiseOnDOMError(ec);
}

- (void)swapCache
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->swapCache(ec);
    WebCore::raiseOnDOMError(ec);
}

- (void)addEventListener:(NSString *)type listener:(id <DOMEventListener>)listener useCapture:(BOOL)useCapture
{
    WebCore::JSMainThreadNullState state;
    RefPtr<WebCore::EventListener> nativeEventListener = WebCore::ObjCEventListener::wrap(listener);
    IMPL->addEventListener(type, WTF::getPtr(nativeEventListener), useCapture);
}

- (void)removeEventListener:(NSString *)type listener:(id <DOMEventListener>)listener useCapture:(BOOL)useCapture
{
    WebCore::JSMainThreadNullState state;
    RefPtr<WebCore::EventListener> nativeEventListener = WebCore::ObjCEventListener::wrap(listener);
    IMPL->removeEventListener(type, WTF::getPtr(nativeEventListener), useCapture);
}

- (BOOL)dispatchEvent:(DOMEvent *)evt
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    BOOL result = IMPL->dispatchEvent(core(evt), ec);
    WebCore::raiseOnDOMError(ec);
    return result;
}

@end

WebCore::DOMApplicationCache* core(DOMDOMApplicationCache *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::DOMApplicationCache*>(wrapper->_internal) : 0;
}

DOMDOMApplicationCache *kit(WebCore::DOMApplicationCache* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMDOMApplicationCache *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMDOMApplicationCache *wrapper = [[DOMDOMApplicationCache alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}

#endif // ENABLE(OFFLINE_WEB_APPLICATIONS)
