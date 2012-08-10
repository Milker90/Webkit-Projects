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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBObjectStore.h"

#include "DOMStringList.h"
#include "ExceptionCode.h"
#include "IDBBindingUtilities.h"
#include "IDBIndex.h"
#include "IDBKey.h"
#include "IDBObjectStore.h"
#include "IDBRequest.h"
#include "JSDOMBinding.h"
#include "JSDOMStringList.h"
#include "JSIDBIndex.h"
#include "JSIDBKeyRange.h"
#include "JSIDBRequest.h"
#include "JSOptionsObject.h"
#include "KURL.h"
#include "SerializedScriptValue.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSIDBObjectStore);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBObjectStoreTableValues[5] =
{
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "keyPath", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreKeyPath), (intptr_t)0 THUNK_GENERATOR(0) },
    { "indexNames", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreIndexNames), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBObjectStoreTable = { 10, 7, JSIDBObjectStoreTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBObjectStoreConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBObjectStoreConstructorTable = { 1, 0, JSIDBObjectStoreConstructorTableValues, 0 };
class JSIDBObjectStoreConstructor : public DOMConstructorObject {
public:
    JSIDBObjectStoreConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSIDBObjectStoreConstructor::s_info = { "IDBObjectStoreConstructor", &DOMConstructorObject::s_info, &JSIDBObjectStoreConstructorTable, 0 };

JSIDBObjectStoreConstructor::JSIDBObjectStoreConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSIDBObjectStorePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSIDBObjectStoreConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBObjectStoreConstructor, JSDOMWrapper>(exec, &JSIDBObjectStoreConstructorTable, this, propertyName, slot);
}

bool JSIDBObjectStoreConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBObjectStoreConstructor, JSDOMWrapper>(exec, &JSIDBObjectStoreConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBObjectStorePrototypeTableValues[10] =
{
    { "put", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionPut), (intptr_t)2 THUNK_GENERATOR(0) },
    { "add", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionAdd), (intptr_t)2 THUNK_GENERATOR(0) },
    { "delete", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionDelete), (intptr_t)1 THUNK_GENERATOR(0) },
    { "clear", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionClear), (intptr_t)0 THUNK_GENERATOR(0) },
    { "get", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionGet), (intptr_t)1 THUNK_GENERATOR(0) },
    { "openCursor", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionOpenCursor), (intptr_t)2 THUNK_GENERATOR(0) },
    { "createIndex", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionCreateIndex), (intptr_t)3 THUNK_GENERATOR(0) },
    { "index", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionIndex), (intptr_t)1 THUNK_GENERATOR(0) },
    { "deleteIndex", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionDeleteIndex), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBObjectStorePrototypeTable = { 33, 31, JSIDBObjectStorePrototypeTableValues, 0 };
const ClassInfo JSIDBObjectStorePrototype::s_info = { "IDBObjectStorePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSIDBObjectStorePrototypeTable, 0 };

JSObject* JSIDBObjectStorePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBObjectStore>(exec, globalObject);
}

bool JSIDBObjectStorePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSIDBObjectStorePrototypeTable, this, propertyName, slot);
}

bool JSIDBObjectStorePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSIDBObjectStorePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSIDBObjectStore::s_info = { "IDBObjectStore", &JSDOMWrapper::s_info, &JSIDBObjectStoreTable, 0 };

JSIDBObjectStore::JSIDBObjectStore(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBObjectStore> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSIDBObjectStore::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSIDBObjectStorePrototype(exec->globalData(), globalObject, JSIDBObjectStorePrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSIDBObjectStore::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSIDBObjectStore, Base>(exec, &JSIDBObjectStoreTable, this, propertyName, slot);
}

bool JSIDBObjectStore::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSIDBObjectStore, Base>(exec, &JSIDBObjectStoreTable, this, propertyName, descriptor);
}

JSValue jsIDBObjectStoreName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->name());
    return result;
}


JSValue jsIDBObjectStoreKeyPath(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->keyPath());
    return result;
}


JSValue jsIDBObjectStoreIndexNames(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->indexNames()));
    return result;
}


JSValue jsIDBObjectStoreConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBObjectStore* domObject = static_cast<JSIDBObjectStore*>(asObject(slotBase));
    return JSIDBObjectStore::getConstructor(exec, domObject->globalObject());
}

JSValue JSIDBObjectStore::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBObjectStoreConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionPut(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    RefPtr<SerializedScriptValue> value(SerializedScriptValue::create(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->put(scriptContext, value, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    RefPtr<IDBKey> key(createIDBKeyFromValue(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->put(scriptContext, value, key, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionAdd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    RefPtr<SerializedScriptValue> value(SerializedScriptValue::create(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->add(scriptContext, value, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    RefPtr<IDBKey> key(createIDBKeyFromValue(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->add(scriptContext, value, key, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionDelete(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    RefPtr<IDBKey> key(createIDBKeyFromValue(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->deleteFunction(scriptContext, key, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->clear(scriptContext, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionGet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    RefPtr<IDBKey> key(createIDBKeyFromValue(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->get(scriptContext, key, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionOpenCursor(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 0) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->openCursor(scriptContext, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    IDBKeyRange* range(toIDBKeyRange(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->openCursor(scriptContext, range, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    unsigned short direction(exec->argument(1).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->openCursor(scriptContext, range, direction, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionCreateIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& name(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& keyPath(valueToStringWithNullCheck(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 2) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->createIndex(name, keyPath, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    OptionsObject* options(toOptionsObject(exec->argument(2)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->createIndex(name, keyPath, options, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->index(name, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionDeleteIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStore::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = static_cast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSIDBObjectStore::s_info);
    IDBObjectStore* imp = static_cast<IDBObjectStore*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->deleteIndex(name, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBObjectStore* impl)
{
    return wrap<JSIDBObjectStore>(exec, globalObject, impl);
}

IDBObjectStore* toIDBObjectStore(JSC::JSValue value)
{
    return value.inherits(&JSIDBObjectStore::s_info) ? static_cast<JSIDBObjectStore*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
