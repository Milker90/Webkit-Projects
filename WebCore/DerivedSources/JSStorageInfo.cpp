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

#if ENABLE(QUOTA)

#include "JSStorageInfo.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSStorageInfoErrorCallback.h"
#include "JSStorageInfoUsageCallback.h"
#include "StorageInfo.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSStorageInfo);

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSStorageInfoPrototypeTableValues[4] =
{
    { "TEMPORARY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageInfoTEMPORARY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PERSISTENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageInfoPERSISTENT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "queryUsageAndQuota", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsStorageInfoPrototypeFunctionQueryUsageAndQuota), (intptr_t)3 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSStorageInfoPrototypeTable = { 9, 7, JSStorageInfoPrototypeTableValues, 0 };
const ClassInfo JSStorageInfoPrototype::s_info = { "StorageInfoPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSStorageInfoPrototypeTable, 0 };

JSObject* JSStorageInfoPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSStorageInfo>(exec, globalObject);
}

bool JSStorageInfoPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSStorageInfoPrototype, JSObject>(exec, &JSStorageInfoPrototypeTable, this, propertyName, slot);
}

bool JSStorageInfoPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSStorageInfoPrototype, JSObject>(exec, &JSStorageInfoPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSStorageInfo::s_info = { "StorageInfo", &JSDOMWrapper::s_info, 0, 0 };

JSStorageInfo::JSStorageInfo(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<StorageInfo> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSStorageInfo::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSStorageInfoPrototype(exec->globalData(), globalObject, JSStorageInfoPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

EncodedJSValue JSC_HOST_CALL jsStorageInfoPrototypeFunctionQueryUsageAndQuota(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSStorageInfo::s_info))
        return throwVMTypeError(exec);
    JSStorageInfo* castedThis = static_cast<JSStorageInfo*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSStorageInfo::s_info);
    StorageInfo* imp = static_cast<StorageInfo*>(castedThis->impl());
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    unsigned short storageType(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<StorageInfoUsageCallback> usageCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isNull() && !exec->argument(1).isUndefined()) {
        if (!exec->argument(1).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        usageCallback = JSStorageInfoUsageCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }
    RefPtr<StorageInfoErrorCallback> errorCallback;
    if (exec->argumentCount() > 2 && !exec->argument(2).isNull() && !exec->argument(2).isUndefined()) {
        if (!exec->argument(2).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        errorCallback = JSStorageInfoErrorCallback::create(asObject(exec->argument(2)), castedThis->globalObject());
    }

    imp->queryUsageAndQuota(scriptContext, storageType, usageCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsStorageInfoTEMPORARY(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsStorageInfoPERSISTENT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, StorageInfo* impl)
{
    return wrap<JSStorageInfo>(exec, globalObject, impl);
}

StorageInfo* toStorageInfo(JSC::JSValue value)
{
    return value.inherits(&JSStorageInfo::s_info) ? static_cast<JSStorageInfo*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(QUOTA)
