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

#if ENABLE(DEVICE_ORIENTATION)

#import "DOMInternal.h"

#import "DOMDeviceMotionEvent.h"

#import "Acceleration.h"
#import "DOMAccelerationInternal.h"
#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMDeviceMotionEventInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMRotationRateInternal.h"
#import "DOMStyleSheetInternal.h"
#import "DeviceMotionEvent.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "RotationRate.h"
#import "ThreadCheck.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL static_cast<WebCore::DeviceMotionEvent*>(reinterpret_cast<WebCore::Event*>(_internal))

@implementation DOMDeviceMotionEvent

- (DOMAcceleration *)acceleration
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->acceleration()));
}

- (DOMAcceleration *)accelerationIncludingGravity
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->accelerationIncludingGravity()));
}

- (DOMRotationRate *)rotationRate
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->rotationRate()));
}

- (double)interval
{
    WebCore::JSMainThreadNullState state;
    return IMPL->interval();
}

- (void)initDeviceMotionEvent:(NSString *)type bubbles:(BOOL)bubbles cancelable:(BOOL)cancelable acceleration:(DOMAcceleration *)inAcceleration accelerationIncludingGravity:(DOMAcceleration *)inAccelerationIncludingGravity rotationRate:(DOMRotationRate *)inRotationRate interval:(double)inInterval
{
    WebCore::JSMainThreadNullState state;
    IMPL->initDeviceMotionEvent(type, bubbles, cancelable, core(inAcceleration), core(inAccelerationIncludingGravity), core(inRotationRate), inInterval);
}

@end

WebCore::DeviceMotionEvent* core(DOMDeviceMotionEvent *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::DeviceMotionEvent*>(wrapper->_internal) : 0;
}

DOMDeviceMotionEvent *kit(WebCore::DeviceMotionEvent* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    return static_cast<DOMDeviceMotionEvent*>(kit(static_cast<WebCore::Event*>(value)));
}

#endif // ENABLE(DEVICE_ORIENTATION)
