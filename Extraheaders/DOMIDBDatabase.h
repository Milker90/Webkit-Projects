/*
 * Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009 Apple Inc. All rights reserved.
 * Copyright (C) 2006 Samuel Weinig <sam.weinig@gmail.com>
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

#import <WebCore/DOMObject.h>

#if WEBKIT_VERSION_MAX_ALLOWED >= WEBKIT_VERSION_LATEST

@class DOMDOMStringList;
@class DOMDOMString[];
@class DOMDictionary;
@class DOMEvent;
@class DOMIDBObjectStore;
@class DOMIDBTransaction;
@class DOMIDBVersionChangeRequest;
@class NSString;
@protocol DOMEventListener;

@interface DOMIDBDatabase : DOMObject
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *version;
@property(readonly, retain) DOMDOMStringList *objectStoreNames;
@property(retain) id <DOMEventListener> onabort;
@property(retain) id <DOMEventListener> onerror;
@property(retain) id <DOMEventListener> onversionchange;

- (DOMIDBObjectStore *)createObjectStore:(NSString *)name options:(DOMDictionary *)options;
- (void)deleteObjectStore:(NSString *)name;
- (DOMIDBVersionChangeRequest *)setVersion:(NSString *)version;
- (DOMIDBTransaction *)transaction:(DOMDOMStringList *)storeNames mode:(NSString *)mode;
- (DOMIDBTransaction *)transaction:(DOMDOMString[] *)storeNames mode:(NSString *)mode;
- (DOMIDBTransaction *)transaction:(NSString *)storeName mode:(NSString *)mode;
- (DOMIDBTransaction *)transaction:(DOMDOMStringList *)storeNames mode:(unsigned short)mode;
- (DOMIDBTransaction *)transaction:(DOMDOMString[] *)storeNames mode:(unsigned short)mode;
- (DOMIDBTransaction *)transaction:(NSString *)storeName mode:(unsigned short)mode;
- (void)close;
- (void)addEventListener:(NSString *)type listener:(id <DOMEventListener>)listener useCapture:(BOOL)useCapture;
- (void)removeEventListener:(NSString *)type listener:(id <DOMEventListener>)listener useCapture:(BOOL)useCapture;
- (BOOL)dispatchEvent:(DOMEvent *)evt;
@end

#endif
