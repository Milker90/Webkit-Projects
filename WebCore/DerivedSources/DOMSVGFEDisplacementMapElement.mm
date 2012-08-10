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

#if ENABLE(SVG) && ENABLE(FILTERS)

#import "DOMInternal.h"

#import "DOMSVGFEDisplacementMapElement.h"

#import "CSSMutableStyleDeclaration.h"
#import "CSSStyleDeclaration.h"
#import "CSSValue.h"
#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSStyleDeclarationInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMSVGAnimatedEnumerationInternal.h"
#import "DOMSVGAnimatedLengthInternal.h"
#import "DOMSVGAnimatedNumberInternal.h"
#import "DOMSVGAnimatedStringInternal.h"
#import "DOMSVGFEDisplacementMapElementInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "SVGAnimatedEnumeration.h"
#import "SVGAnimatedLength.h"
#import "SVGAnimatedNumber.h"
#import "SVGAnimatedString.h"
#import "SVGFEDisplacementMapElement.h"
#import "ThreadCheck.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::SVGFEDisplacementMapElement*>(reinterpret_cast<WebCore::Node*>(_internal))

@implementation DOMSVGFEDisplacementMapElement

- (DOMSVGAnimatedString *)in1
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->in1Animated()));
}

- (DOMSVGAnimatedString *)in2
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->in2Animated()));
}

- (DOMSVGAnimatedNumber *)scale
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->scaleAnimated()));
}

- (DOMSVGAnimatedEnumeration *)xChannelSelector
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->xChannelSelectorAnimated()));
}

- (DOMSVGAnimatedEnumeration *)yChannelSelector
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->yChannelSelectorAnimated()));
}

- (DOMSVGAnimatedLength *)x
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->xAnimated()));
}

- (DOMSVGAnimatedLength *)y
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->yAnimated()));
}

- (DOMSVGAnimatedLength *)width
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->widthAnimated()));
}

- (DOMSVGAnimatedLength *)height
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->heightAnimated()));
}

- (DOMSVGAnimatedString *)result
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->resultAnimated()));
}

- (DOMSVGAnimatedString *)className
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->classNameAnimated()));
}

- (DOMCSSStyleDeclaration *)style
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->style()));
}

- (DOMCSSValue *)getPresentationAttribute:(NSString *)name
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->getPresentationAttribute(name)));
}

@end

WebCore::SVGFEDisplacementMapElement* core(DOMSVGFEDisplacementMapElement *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::SVGFEDisplacementMapElement*>(wrapper->_internal) : 0;
}

DOMSVGFEDisplacementMapElement *kit(WebCore::SVGFEDisplacementMapElement* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMSVGFEDisplacementMapElement*>(kit(static_cast<WebCore::Node*>(value)));
}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
