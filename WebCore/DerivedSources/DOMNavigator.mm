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
#import "DOMInternal.h"

#import "DOMNavigator.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMDOMMimeTypeArrayInternal.h"
#import "DOMDOMPluginArrayInternal.h"
#import "DOMEventInternal.h"
#import "DOMMimeTypeArray.h"
#import "DOMNavigatorInternal.h"
#import "DOMNodeInternal.h"
#import "DOMPluginArray.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "Navigator.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::Navigator*>(_internal)

@implementation DOMNavigator

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMNavigator class], self))
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

- (NSString *)appCodeName
{
    WebCore::JSMainThreadNullState state;
    return IMPL->appCodeName();
}

- (NSString *)appName
{
    WebCore::JSMainThreadNullState state;
    return IMPL->appName();
}

- (NSString *)appVersion
{
    WebCore::JSMainThreadNullState state;
    return IMPL->appVersion();
}

- (NSString *)language
{
    WebCore::JSMainThreadNullState state;
    return IMPL->language();
}

- (NSString *)userAgent
{
    WebCore::JSMainThreadNullState state;
    return IMPL->userAgent();
}

- (NSString *)platform
{
    WebCore::JSMainThreadNullState state;
    return IMPL->platform();
}

- (DOMDOMPluginArray *)plugins
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->plugins()));
}

- (DOMDOMMimeTypeArray *)mimeTypes
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->mimeTypes()));
}

- (NSString *)product
{
    WebCore::JSMainThreadNullState state;
    return IMPL->product();
}

- (NSString *)productSub
{
    WebCore::JSMainThreadNullState state;
    return IMPL->productSub();
}

- (NSString *)vendor
{
    WebCore::JSMainThreadNullState state;
    return IMPL->vendor();
}

- (NSString *)vendorSub
{
    WebCore::JSMainThreadNullState state;
    return IMPL->vendorSub();
}

- (BOOL)cookieEnabled
{
    WebCore::JSMainThreadNullState state;
    return IMPL->cookieEnabled();
}

- (BOOL)onLine
{
    WebCore::JSMainThreadNullState state;
    return IMPL->onLine();
}

- (BOOL)standalone
{
    WebCore::JSMainThreadNullState state;
    return IMPL->standalone();
}

- (BOOL)javaEnabled
{
    WebCore::JSMainThreadNullState state;
    return IMPL->javaEnabled();
}

@end

WebCore::Navigator* core(DOMNavigator *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::Navigator*>(wrapper->_internal) : 0;
}

DOMNavigator *kit(WebCore::Navigator* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMNavigator *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMNavigator *wrapper = [[DOMNavigator alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}
