/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(WORKERS)

#include "JSWorkerContext.h"

#include "DOMURL.h"
#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSArrayBuffer.h"
#include "JSDOMBinding.h"
#include "JSDOMURL.h"
#include "JSDataView.h"
#include "JSErrorHandler.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSFloat32Array.h"
#include "JSInt16Array.h"
#include "JSInt32Array.h"
#include "JSInt8Array.h"
#include "JSMessageEvent.h"
#include "JSUint16Array.h"
#include "JSUint32Array.h"
#include "JSUint8Array.h"
#include "JSWorkerContext.h"
#include "JSWorkerLocation.h"
#include "JSWorkerNavigator.h"
#include "JSXMLHttpRequest.h"
#include "WorkerContext.h"
#include "WorkerLocation.h"
#include "WorkerNavigator.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWorkerContext);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerContextTableValues[18] =
{
    { "self", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextSelf), (intptr_t)setJSWorkerContextSelf THUNK_GENERATOR(0) },
    { "location", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextLocation), (intptr_t)setJSWorkerContextLocation THUNK_GENERATOR(0) },
    { "onerror", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextOnerror), (intptr_t)setJSWorkerContextOnerror THUNK_GENERATOR(0) },
    { "navigator", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextNavigator), (intptr_t)setJSWorkerContextNavigator THUNK_GENERATOR(0) },
    { "MessageEvent", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextMessageEventConstructor), (intptr_t)setJSWorkerContextMessageEventConstructor THUNK_GENERATOR(0) },
    { "WorkerLocation", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextWorkerLocationConstructor), (intptr_t)setJSWorkerContextWorkerLocationConstructor THUNK_GENERATOR(0) },
    { "XMLHttpRequest", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextXMLHttpRequestConstructor), (intptr_t)setJSWorkerContextXMLHttpRequestConstructor THUNK_GENERATOR(0) },
#if ENABLE(BLOB)
    { "webkitURL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextWebkitURL), (intptr_t)0 THUNK_GENERATOR(0) },
#endif
    { "ArrayBuffer", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextArrayBufferConstructor), (intptr_t)setJSWorkerContextArrayBufferConstructor THUNK_GENERATOR(0) },
    { "Int8Array", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextInt8ArrayConstructor), (intptr_t)setJSWorkerContextInt8ArrayConstructor THUNK_GENERATOR(0) },
    { "Uint8Array", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextUint8ArrayConstructor), (intptr_t)setJSWorkerContextUint8ArrayConstructor THUNK_GENERATOR(0) },
    { "Int16Array", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextInt16ArrayConstructor), (intptr_t)setJSWorkerContextInt16ArrayConstructor THUNK_GENERATOR(0) },
    { "Uint16Array", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextUint16ArrayConstructor), (intptr_t)setJSWorkerContextUint16ArrayConstructor THUNK_GENERATOR(0) },
    { "Int32Array", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextInt32ArrayConstructor), (intptr_t)setJSWorkerContextInt32ArrayConstructor THUNK_GENERATOR(0) },
    { "Uint32Array", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextUint32ArrayConstructor), (intptr_t)setJSWorkerContextUint32ArrayConstructor THUNK_GENERATOR(0) },
    { "Float32Array", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextFloat32ArrayConstructor), (intptr_t)setJSWorkerContextFloat32ArrayConstructor THUNK_GENERATOR(0) },
    { "DataView", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextDataViewConstructor), (intptr_t)setJSWorkerContextDataViewConstructor THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerContextTable = { 67, 63, JSWorkerContextTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerContextPrototypeTableValues[10] =
{
    { "close", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionClose), (intptr_t)0 THUNK_GENERATOR(0) },
    { "importScripts", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionImportScripts), (intptr_t)0 THUNK_GENERATOR(0) },
    { "setTimeout", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionSetTimeout), (intptr_t)2 THUNK_GENERATOR(0) },
    { "clearTimeout", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionClearTimeout), (intptr_t)1 THUNK_GENERATOR(0) },
    { "setInterval", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionSetInterval), (intptr_t)2 THUNK_GENERATOR(0) },
    { "clearInterval", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionClearInterval), (intptr_t)1 THUNK_GENERATOR(0) },
    { "addEventListener", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionAddEventListener), (intptr_t)3 THUNK_GENERATOR(0) },
    { "removeEventListener", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionRemoveEventListener), (intptr_t)3 THUNK_GENERATOR(0) },
    { "dispatchEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionDispatchEvent), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerContextPrototypeTable = { 34, 31, JSWorkerContextPrototypeTableValues, 0 };
static const HashTable* getJSWorkerContextPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSWorkerContextPrototypeTable);
}

const ClassInfo JSWorkerContextPrototype::s_info = { "WorkerContextPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSWorkerContextPrototypeTable };

void* JSWorkerContextPrototype::operator new(size_t size, JSGlobalData* globalData)
{
    return globalData->heap.allocate(size);
}

bool JSWorkerContextPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSWorkerContextPrototypeTable(exec), this, propertyName, slot);
}

bool JSWorkerContextPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSWorkerContextPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSWorkerContextTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSWorkerContextTable);
}

const ClassInfo JSWorkerContext::s_info = { "WorkerContext", &JSWorkerContextBase::s_info, 0, getJSWorkerContextTable };

JSWorkerContext::JSWorkerContext(JSGlobalData& globalData, Structure* structure, PassRefPtr<WorkerContext> impl)
    : JSWorkerContextBase(globalData, structure, impl)
{
    ASSERT(inherits(&s_info));
}

bool JSWorkerContext::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSWorkerContext, Base>(exec, getJSWorkerContextTable(exec), this, propertyName, slot);
}

bool JSWorkerContext::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (getOwnPropertyDescriptorDelegate(exec, propertyName, descriptor))
        return true;
    return getStaticValueDescriptor<JSWorkerContext, Base>(exec, getJSWorkerContextTable(exec), this, propertyName, descriptor);
}

JSValue jsWorkerContextSelf(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->self()));
    return result;
}


JSValue jsWorkerContextLocation(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->location()));
    return result;
}


JSValue jsWorkerContextOnerror(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    if (EventListener* listener = imp->onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsWorkerContextNavigator(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->navigator()));
    return result;
}


JSValue jsWorkerContextMessageEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSMessageEvent::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextWorkerLocationConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSWorkerLocation::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextXMLHttpRequestConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return castedThis->xmlHttpRequest(exec);
}


#if ENABLE(BLOB)
JSValue jsWorkerContextWebkitURL(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->webkitURL()));
    return result;
}

#endif

JSValue jsWorkerContextArrayBufferConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSArrayBuffer::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextInt8ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSInt8Array::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextUint8ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSUint8Array::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextInt16ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSInt16Array::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextUint16ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSUint16Array::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextInt32ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSInt32Array::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextUint32ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSUint32Array::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextFloat32ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSFloat32Array::getConstructor(exec, castedThis);
}


JSValue jsWorkerContextDataViewConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSDataView::getConstructor(exec, castedThis);
}


void JSWorkerContext::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSWorkerContext, Base>(exec, propertyName, value, getJSWorkerContextTable(exec), this, slot);
}

void setJSWorkerContextSelf(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in object
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "self"), value);
}


void setJSWorkerContextLocation(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in object
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "location"), value);
}


void setJSWorkerContextOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(thisObject);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    imp->setOnerror(createJSErrorHandler(exec, value, thisObject));
}


void setJSWorkerContextNavigator(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in object
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "navigator"), value);
}


void setJSWorkerContextMessageEventConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "MessageEvent"), value);
}


void setJSWorkerContextWorkerLocationConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "WorkerLocation"), value);
}


void setJSWorkerContextXMLHttpRequestConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "XMLHttpRequest"), value);
}


void setJSWorkerContextArrayBufferConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "ArrayBuffer"), value);
}


void setJSWorkerContextInt8ArrayConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "Int8Array"), value);
}


void setJSWorkerContextUint8ArrayConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "Uint8Array"), value);
}


void setJSWorkerContextInt16ArrayConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "Int16Array"), value);
}


void setJSWorkerContextUint16ArrayConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "Uint16Array"), value);
}


void setJSWorkerContextInt32ArrayConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "Int32Array"), value);
}


void setJSWorkerContextUint32ArrayConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "Uint32Array"), value);
}


void setJSWorkerContextFloat32ArrayConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "Float32Array"), value);
}


void setJSWorkerContextDataViewConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(exec->globalData(), Identifier(exec, "DataView"), value);
}


EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClose(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());

    imp->close();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionImportScripts(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    return JSValue::encode(castedThis->importScripts(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionSetTimeout(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    return JSValue::encode(castedThis->setTimeout(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClearTimeout(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    int handle(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->clearTimeout(handle);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionSetInterval(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    return JSValue::encode(castedThis->setInterval(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClearInterval(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    int handle(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->clearInterval(handle);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    imp->addEventListener(ustringToAtomicString(exec->argument(0).toString(exec)), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    imp->removeEventListener(ustringToAtomicString(exec->argument(0).toString(exec)), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWorkerContext::s_info);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    ExceptionCode ec = 0;
    Event* evt(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}

#endif // ENABLE(WORKERS)
