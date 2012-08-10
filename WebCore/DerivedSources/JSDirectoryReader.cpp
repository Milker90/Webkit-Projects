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

#if ENABLE(FILE_SYSTEM)

#include "JSDirectoryReader.h"

#include "DirectoryReader.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEntriesCallback.h"
#include "JSErrorCallback.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDirectoryReader);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDirectoryReaderTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDirectoryReaderConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDirectoryReaderTable = { 2, 1, JSDirectoryReaderTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDirectoryReaderConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDirectoryReaderConstructorTable = { 1, 0, JSDirectoryReaderConstructorTableValues, 0 };
class JSDirectoryReaderConstructor : public DOMConstructorObject {
public:
    JSDirectoryReaderConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSDirectoryReaderConstructor::s_info = { "DirectoryReaderConstructor", &DOMConstructorObject::s_info, &JSDirectoryReaderConstructorTable, 0 };

JSDirectoryReaderConstructor::JSDirectoryReaderConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDirectoryReaderPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDirectoryReaderConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDirectoryReaderConstructor, JSDOMWrapper>(exec, &JSDirectoryReaderConstructorTable, this, propertyName, slot);
}

bool JSDirectoryReaderConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDirectoryReaderConstructor, JSDOMWrapper>(exec, &JSDirectoryReaderConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDirectoryReaderPrototypeTableValues[2] =
{
    { "readEntries", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryReaderPrototypeFunctionReadEntries), (intptr_t)2 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDirectoryReaderPrototypeTable = { 2, 1, JSDirectoryReaderPrototypeTableValues, 0 };
static const HashTable* getJSDirectoryReaderPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSDirectoryReaderPrototypeTable);
}

const ClassInfo JSDirectoryReaderPrototype::s_info = { "DirectoryReaderPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSDirectoryReaderPrototypeTable };

JSObject* JSDirectoryReaderPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDirectoryReader>(exec, globalObject);
}

bool JSDirectoryReaderPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSDirectoryReaderPrototypeTable(exec), this, propertyName, slot);
}

bool JSDirectoryReaderPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSDirectoryReaderPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSDirectoryReaderTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSDirectoryReaderTable);
}

const ClassInfo JSDirectoryReader::s_info = { "DirectoryReader", &JSDOMWrapper::s_info, 0, getJSDirectoryReaderTable };

JSDirectoryReader::JSDirectoryReader(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DirectoryReader> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDirectoryReader::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDirectoryReaderPrototype(exec->globalData(), globalObject, JSDirectoryReaderPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSDirectoryReader::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSDirectoryReader, Base>(exec, getJSDirectoryReaderTable(exec), this, propertyName, slot);
}

bool JSDirectoryReader::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSDirectoryReader, Base>(exec, getJSDirectoryReaderTable(exec), this, propertyName, descriptor);
}

JSValue jsDirectoryReaderConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDirectoryReader* domObject = static_cast<JSDirectoryReader*>(asObject(slotBase));
    return JSDirectoryReader::getConstructor(exec, domObject->globalObject());
}

JSValue JSDirectoryReader::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDirectoryReaderConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDirectoryReaderPrototypeFunctionReadEntries(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryReader::s_info))
        return throwVMTypeError(exec);
    JSDirectoryReader* castedThis = static_cast<JSDirectoryReader*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryReader::s_info);
    DirectoryReader* imp = static_cast<DirectoryReader*>(castedThis->impl());
    if (exec->argumentCount() <= 0 || !exec->argument(0).isObject()) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }
    RefPtr<EntriesCallback> successCallback = JSEntriesCallback::create(asObject(exec->argument(0)), castedThis->globalObject());
    RefPtr<ErrorCallback> errorCallback;
    if (exec->argumentCount() > 1 && !exec->argument(1).isNull() && !exec->argument(1).isUndefined()) {
        if (!exec->argument(1).isObject()) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return JSValue::encode(jsUndefined());
        }
        errorCallback = JSErrorCallback::create(asObject(exec->argument(1)), castedThis->globalObject());
    }

    imp->readEntries(successCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DirectoryReader* impl)
{
    return wrap<JSDirectoryReader>(exec, globalObject, impl);
}

DirectoryReader* toDirectoryReader(JSC::JSValue value)
{
    return value.inherits(&JSDirectoryReader::s_info) ? static_cast<JSDirectoryReader*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)
