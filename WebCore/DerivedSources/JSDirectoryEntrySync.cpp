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

#include "JSDirectoryEntrySync.h"

#include "DirectoryEntrySync.h"
#include "DirectoryReaderSync.h"
#include "ExceptionCode.h"
#include "FileEntrySync.h"
#include "JSDOMBinding.h"
#include "JSDirectoryReaderSync.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDirectoryEntrySync);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDirectoryEntrySyncTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDirectoryEntrySyncConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDirectoryEntrySyncTable = { 2, 1, JSDirectoryEntrySyncTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDirectoryEntrySyncConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDirectoryEntrySyncConstructorTable = { 1, 0, JSDirectoryEntrySyncConstructorTableValues, 0 };
class JSDirectoryEntrySyncConstructor : public DOMConstructorObject {
public:
    JSDirectoryEntrySyncConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSDirectoryEntrySyncConstructor::s_info = { "DirectoryEntrySyncConstructor", &DOMConstructorObject::s_info, &JSDirectoryEntrySyncConstructorTable, 0 };

JSDirectoryEntrySyncConstructor::JSDirectoryEntrySyncConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDirectoryEntrySyncPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDirectoryEntrySyncConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDirectoryEntrySyncConstructor, JSDOMWrapper>(exec, &JSDirectoryEntrySyncConstructorTable, this, propertyName, slot);
}

bool JSDirectoryEntrySyncConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDirectoryEntrySyncConstructor, JSDOMWrapper>(exec, &JSDirectoryEntrySyncConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDirectoryEntrySyncPrototypeTableValues[5] =
{
    { "createReader", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryEntrySyncPrototypeFunctionCreateReader), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getFile", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryEntrySyncPrototypeFunctionGetFile), (intptr_t)2 THUNK_GENERATOR(0) },
    { "getDirectory", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryEntrySyncPrototypeFunctionGetDirectory), (intptr_t)2 THUNK_GENERATOR(0) },
    { "removeRecursively", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryEntrySyncPrototypeFunctionRemoveRecursively), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDirectoryEntrySyncPrototypeTable = { 10, 7, JSDirectoryEntrySyncPrototypeTableValues, 0 };
static const HashTable* getJSDirectoryEntrySyncPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSDirectoryEntrySyncPrototypeTable);
}

const ClassInfo JSDirectoryEntrySyncPrototype::s_info = { "DirectoryEntrySyncPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSDirectoryEntrySyncPrototypeTable };

JSObject* JSDirectoryEntrySyncPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDirectoryEntrySync>(exec, globalObject);
}

bool JSDirectoryEntrySyncPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSDirectoryEntrySyncPrototypeTable(exec), this, propertyName, slot);
}

bool JSDirectoryEntrySyncPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSDirectoryEntrySyncPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSDirectoryEntrySyncTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSDirectoryEntrySyncTable);
}

const ClassInfo JSDirectoryEntrySync::s_info = { "DirectoryEntrySync", &JSEntrySync::s_info, 0, getJSDirectoryEntrySyncTable };

JSDirectoryEntrySync::JSDirectoryEntrySync(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DirectoryEntrySync> impl)
    : JSEntrySync(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDirectoryEntrySync::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDirectoryEntrySyncPrototype(exec->globalData(), globalObject, JSDirectoryEntrySyncPrototype::createStructure(exec->globalData(), JSEntrySyncPrototype::self(exec, globalObject)));
}

bool JSDirectoryEntrySync::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSDirectoryEntrySync, Base>(exec, getJSDirectoryEntrySyncTable(exec), this, propertyName, slot);
}

bool JSDirectoryEntrySync::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSDirectoryEntrySync, Base>(exec, getJSDirectoryEntrySyncTable(exec), this, propertyName, descriptor);
}

JSValue jsDirectoryEntrySyncConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDirectoryEntrySync* domObject = static_cast<JSDirectoryEntrySync*>(asObject(slotBase));
    return JSDirectoryEntrySync::getConstructor(exec, domObject->globalObject());
}

JSValue JSDirectoryEntrySync::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDirectoryEntrySyncConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionCreateReader(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryEntrySync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryEntrySync* castedThis = static_cast<JSDirectoryEntrySync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryEntrySync::s_info);
    DirectoryEntrySync* imp = static_cast<DirectoryEntrySync*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->createReader(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionGetFile(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryEntrySync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryEntrySync* castedThis = static_cast<JSDirectoryEntrySync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryEntrySync::s_info);
    return JSValue::encode(castedThis->getFile(exec));
}

EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionGetDirectory(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryEntrySync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryEntrySync* castedThis = static_cast<JSDirectoryEntrySync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryEntrySync::s_info);
    return JSValue::encode(castedThis->getDirectory(exec));
}

EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionRemoveRecursively(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryEntrySync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryEntrySync* castedThis = static_cast<JSDirectoryEntrySync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryEntrySync::s_info);
    DirectoryEntrySync* imp = static_cast<DirectoryEntrySync*>(castedThis->impl());
    ExceptionCode ec = 0;

    imp->removeRecursively(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DirectoryEntrySync* impl)
{
    return wrap<JSDirectoryEntrySync>(exec, globalObject, impl);
}

DirectoryEntrySync* toDirectoryEntrySync(JSC::JSValue value)
{
    return value.inherits(&JSDirectoryEntrySync::s_info) ? static_cast<JSDirectoryEntrySync*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)