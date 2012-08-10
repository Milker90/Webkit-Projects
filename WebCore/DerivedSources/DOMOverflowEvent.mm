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

#import "DOMOverflowEvent.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMOverflowEventInternal.h"
#import "DOMStyleSheetInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "OverflowEvent.h"
#import "ThreadCheck.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::OverflowEvent*>(reinterpret_cast<WebCore::Event*>(_internal))

@implementation DOMOverflowEvent

- (unsigned short)orient
{
    WebCore::JSMainThreadNullState state;
    return IMPL->orient();
}

- (BOOL)horizontalOverflow
{
    WebCore::JSMainThreadNullState state;
    return IMPL->horizontalOverflow();
}

- (BOOL)verticalOverflow
{
    WebCore::JSMainThreadNullState state;
    return IMPL->verticalOverflow();
}

- (void)initOverflowEvent:(unsigned short)inOrient horizontalOverflow:(BOOL)inHorizontalOverflow verticalOverflow:(BOOL)inVerticalOverflow
{
    WebCore::JSMainThreadNullState state;
    IMPL->initOverflowEvent(inOrient, inHorizontalOverflow, inVerticalOverflow);
}

@end

WebCore::OverflowEvent* core(DOMOverflowEvent *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::OverflowEvent*>(wrapper->_internal) : 0;
}

DOMOverflowEvent *kit(WebCore::OverflowEvent* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMOverflowEvent*>(kit(static_cast<WebCore::Event*>(value)));
}
