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

#import "DOMNotation.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMNotationInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "Notation.h"
#import "ThreadCheck.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::Notation*>(reinterpret_cast<WebCore::Node*>(_internal))

@implementation DOMNotation

- (NSString *)publicId
{
    WebCore::JSMainThreadNullState state;
    return IMPL->publicId();
}

- (NSString *)systemId
{
    WebCore::JSMainThreadNullState state;
    return IMPL->systemId();
}

@end

WebCore::Notation* core(DOMNotation *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::Notation*>(wrapper->_internal) : 0;
}

DOMNotation *kit(WebCore::Notation* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMNotation*>(kit(static_cast<WebCore::Node*>(value)));
}
