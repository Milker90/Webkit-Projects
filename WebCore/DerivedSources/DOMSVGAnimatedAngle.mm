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

#if ENABLE(SVG)

#import "DOMInternal.h"

#import "DOMSVGAnimatedAngle.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMSVGAngleInternal.h"
#import "DOMSVGAnimatedAngleInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "SVGAngle.h"
#import "SVGAnimatedAngle.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::SVGAnimatedAngle*>(_internal)

@implementation DOMSVGAnimatedAngle

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMSVGAnimatedAngle class], self))
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

- (DOMSVGAngle *)baseVal
{
    WebCore::JSMainThreadNullState state;
    return kit(static_cast<WebCore::SVGPropertyTearOff<WebCore::SVGAngle>*>(IMPL->baseVal()));
}

- (DOMSVGAngle *)animVal
{
    WebCore::JSMainThreadNullState state;
    return kit(static_cast<WebCore::SVGPropertyTearOff<WebCore::SVGAngle>*>(IMPL->animVal()));
}

@end

WebCore::SVGAnimatedAngle* core(DOMSVGAnimatedAngle *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::SVGAnimatedAngle*>(wrapper->_internal) : 0;
}

DOMSVGAnimatedAngle *kit(WebCore::SVGAnimatedAngle* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMSVGAnimatedAngle *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMSVGAnimatedAngle *wrapper = [[DOMSVGAnimatedAngle alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}

#endif // ENABLE(SVG)
