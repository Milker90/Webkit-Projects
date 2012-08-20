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

#import "DOMHTMLHRElement.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMHTMLHRElementInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "HTMLHRElement.h"
#import "HTMLNames.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "ThreadCheck.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::HTMLHRElement*>(reinterpret_cast<WebCore::Node*>(_internal))

@implementation DOMHTMLHRElement

- (NSString *)align
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getAttribute(WebCore::HTMLNames::alignAttr);
}

- (void)setAlign:(NSString *)newAlign
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttribute(WebCore::HTMLNames::alignAttr, newAlign);
}

- (BOOL)noShade
{
    WebCore::JSMainThreadNullState state;
    return IMPL->hasAttribute(WebCore::HTMLNames::noshadeAttr);
}

- (void)setNoShade:(BOOL)newNoShade
{
    WebCore::JSMainThreadNullState state;
    IMPL->setBooleanAttribute(WebCore::HTMLNames::noshadeAttr, newNoShade);
}

- (NSString *)size
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getAttribute(WebCore::HTMLNames::sizeAttr);
}

- (void)setSize:(NSString *)newSize
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttribute(WebCore::HTMLNames::sizeAttr, newSize);
}

- (NSString *)width
{
    WebCore::JSMainThreadNullState state;
    return IMPL->getAttribute(WebCore::HTMLNames::widthAttr);
}

- (void)setWidth:(NSString *)newWidth
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttribute(WebCore::HTMLNames::widthAttr, newWidth);
}

@end

WebCore::HTMLHRElement* core(DOMHTMLHRElement *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::HTMLHRElement*>(wrapper->_internal) : 0;
}

DOMHTMLHRElement *kit(WebCore::HTMLHRElement* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMHTMLHRElement*>(kit(static_cast<WebCore::Node*>(value)));
}