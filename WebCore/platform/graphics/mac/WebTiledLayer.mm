/*
 * Copyright (C) 2009 Apple Inc. All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
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

#include "config.h"

#if USE(ACCELERATED_COMPOSITING)

#import "WebTiledLayer.h"

#import "GraphicsContext.h"
#import "GraphicsLayerCA.h"
#import "PlatformCALayer.h"
#import <wtf/UnusedParam.h>

#import "WebCoreThread.h"
#import "WebCoreThreadRun.h"

using namespace WebCore;

@implementation WebTiledLayer

// Set a zero duration for the fade in of tiles
+ (CFTimeInterval)fadeDuration
{
    return 0;
}

+ (BOOL)shouldDrawOnMainThread
{
    return NO;
}

// Disable default animations
- (id<CAAction>)actionForKey:(NSString *)key
{
    UNUSED_PARAM(key);
    return nil;
}

- (void)setNeedsDisplay
{
    PlatformCALayer* layer = PlatformCALayer::platformCALayer(self);
    if (layer && layer->owner() && layer->owner()->platformCALayerDrawsContent())
        [super setNeedsDisplay];
}

- (void)setNeedsDisplayInRect:(CGRect)dirtyRect
{
    PlatformCALayer* layer = PlatformCALayer::platformCALayer(self);
    if (layer)
        setLayerNeedsDisplayInRect(self, layer->owner(), dirtyRect);
}

- (void)display
{
    [super display];
    // CATiledLayer never calls display on a background thread, so it's safe
    // to assume we're either on the main thread or on the web thread.
    if (pthread_main_np())
        WebThreadLock();
    ASSERT(WebThreadIsLockedOrDisabled());
    PlatformCALayer* layer = PlatformCALayer::platformCALayer(self);
    if (layer && layer->owner())
        layer->owner()->platformCALayerLayerDidDisplay(self);
}

- (void)drawInContext:(CGContextRef)context
{
    void (^draw)() = ^{
    PlatformCALayer* layer = PlatformCALayer::platformCALayer(self);
    if (layer)
        drawLayerContents(context, self, layer);
    };
    if (pthread_main_np()) {
        WebThreadLock();
        draw();
    } else
        WebThreadRunSync(draw);
}

@end // implementation WebTiledLayer

#endif // USE(ACCELERATED_COMPOSITING)
