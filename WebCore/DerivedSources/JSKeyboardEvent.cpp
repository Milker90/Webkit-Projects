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
#include "JSKeyboardEvent.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "KURL.h"
#include "KeyboardEvent.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSKeyboardEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSKeyboardEventTableValues[9] =
{
    { "keyIdentifier", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventKeyIdentifier), (intptr_t)0 THUNK_GENERATOR(0) },
    { "keyLocation", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventKeyLocation), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ctrlKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventCtrlKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "shiftKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventShiftKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "altKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventAltKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "metaKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventMetaKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "altGraphKey", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventAltGraphKey), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSKeyboardEventTable = { 18, 15, JSKeyboardEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSKeyboardEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSKeyboardEventConstructorTable = { 1, 0, JSKeyboardEventConstructorTableValues, 0 };
class JSKeyboardEventConstructor : public DOMConstructorObject {
public:
    JSKeyboardEventConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSKeyboardEventConstructor::s_info = { "KeyboardEventConstructor", &DOMConstructorObject::s_info, &JSKeyboardEventConstructorTable, 0 };

JSKeyboardEventConstructor::JSKeyboardEventConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSKeyboardEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSKeyboardEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSKeyboardEventConstructor, JSDOMWrapper>(exec, &JSKeyboardEventConstructorTable, this, propertyName, slot);
}

bool JSKeyboardEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSKeyboardEventConstructor, JSDOMWrapper>(exec, &JSKeyboardEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSKeyboardEventPrototypeTableValues[2] =
{
    { "initKeyboardEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsKeyboardEventPrototypeFunctionInitKeyboardEvent), (intptr_t)11 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSKeyboardEventPrototypeTable = { 2, 1, JSKeyboardEventPrototypeTableValues, 0 };
const ClassInfo JSKeyboardEventPrototype::s_info = { "KeyboardEventPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSKeyboardEventPrototypeTable, 0 };

JSObject* JSKeyboardEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSKeyboardEvent>(exec, globalObject);
}

bool JSKeyboardEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSKeyboardEventPrototypeTable, this, propertyName, slot);
}

bool JSKeyboardEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSKeyboardEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSKeyboardEvent::s_info = { "KeyboardEvent", &JSUIEvent::s_info, &JSKeyboardEventTable, 0 };

JSKeyboardEvent::JSKeyboardEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<KeyboardEvent> impl)
    : JSUIEvent(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSKeyboardEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSKeyboardEventPrototype(exec->globalData(), globalObject, JSKeyboardEventPrototype::createStructure(exec->globalData(), JSUIEventPrototype::self(exec, globalObject)));
}

bool JSKeyboardEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSKeyboardEvent, Base>(exec, &JSKeyboardEventTable, this, propertyName, slot);
}

bool JSKeyboardEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSKeyboardEvent, Base>(exec, &JSKeyboardEventTable, this, propertyName, descriptor);
}

JSValue jsKeyboardEventKeyIdentifier(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSKeyboardEvent* castedThis = static_cast<JSKeyboardEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThis->impl());
    JSValue result = jsString(exec, imp->keyIdentifier());
    return result;
}


JSValue jsKeyboardEventKeyLocation(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSKeyboardEvent* castedThis = static_cast<JSKeyboardEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->keyLocation());
    return result;
}


JSValue jsKeyboardEventCtrlKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSKeyboardEvent* castedThis = static_cast<JSKeyboardEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->ctrlKey());
    return result;
}


JSValue jsKeyboardEventShiftKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSKeyboardEvent* castedThis = static_cast<JSKeyboardEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->shiftKey());
    return result;
}


JSValue jsKeyboardEventAltKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSKeyboardEvent* castedThis = static_cast<JSKeyboardEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->altKey());
    return result;
}


JSValue jsKeyboardEventMetaKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSKeyboardEvent* castedThis = static_cast<JSKeyboardEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->metaKey());
    return result;
}


JSValue jsKeyboardEventAltGraphKey(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSKeyboardEvent* castedThis = static_cast<JSKeyboardEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThis->impl());
    JSValue result = jsBoolean(imp->altGraphKey());
    return result;
}


JSValue jsKeyboardEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSKeyboardEvent* domObject = static_cast<JSKeyboardEvent*>(asObject(slotBase));
    return JSKeyboardEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSKeyboardEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSKeyboardEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsKeyboardEventPrototypeFunctionInitKeyboardEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSKeyboardEvent::s_info))
        return throwVMTypeError(exec);
    JSKeyboardEvent* castedThis = static_cast<JSKeyboardEvent*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSKeyboardEvent::s_info);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThis->impl());
    const String& type(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubble(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelable(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    DOMWindow* view(toDOMWindow(exec->argument(3)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& keyIdentifier(ustringToString(exec->argument(4).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    unsigned keyLocation(exec->argument(5).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool ctrlKey(exec->argument(6).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool altKey(exec->argument(7).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool shiftKey(exec->argument(8).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool metaKey(exec->argument(9).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool altGraphKey(exec->argument(10).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->initKeyboardEvent(type, canBubble, cancelable, view, keyIdentifier, keyLocation, ctrlKey, altKey, shiftKey, metaKey, altGraphKey);
    return JSValue::encode(jsUndefined());
}


}
