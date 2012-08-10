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
#include "JSHTMLBlockquoteElement.h"

#include "HTMLBlockquoteElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLBlockquoteElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBlockquoteElementTableValues[3] =
{
    { "cite", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBlockquoteElementCite), (intptr_t)setJSHTMLBlockquoteElementCite THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBlockquoteElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBlockquoteElementTable = { 5, 3, JSHTMLBlockquoteElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBlockquoteElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBlockquoteElementConstructorTable = { 1, 0, JSHTMLBlockquoteElementConstructorTableValues, 0 };
class JSHTMLBlockquoteElementConstructor : public DOMConstructorObject {
public:
    JSHTMLBlockquoteElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLBlockquoteElementConstructor::s_info = { "HTMLBlockquoteElementConstructor", &DOMConstructorObject::s_info, &JSHTMLBlockquoteElementConstructorTable, 0 };

JSHTMLBlockquoteElementConstructor::JSHTMLBlockquoteElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLBlockquoteElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLBlockquoteElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBlockquoteElementConstructor, JSDOMWrapper>(exec, &JSHTMLBlockquoteElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLBlockquoteElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLBlockquoteElementConstructor, JSDOMWrapper>(exec, &JSHTMLBlockquoteElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBlockquoteElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBlockquoteElementPrototypeTable = { 1, 0, JSHTMLBlockquoteElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLBlockquoteElementPrototype::s_info = { "HTMLBlockquoteElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLBlockquoteElementPrototypeTable, 0 };

JSObject* JSHTMLBlockquoteElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLBlockquoteElement>(exec, globalObject);
}

const ClassInfo JSHTMLBlockquoteElement::s_info = { "HTMLBlockquoteElement", &JSHTMLElement::s_info, &JSHTMLBlockquoteElementTable, 0 };

JSHTMLBlockquoteElement::JSHTMLBlockquoteElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLBlockquoteElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLBlockquoteElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLBlockquoteElementPrototype(exec->globalData(), globalObject, JSHTMLBlockquoteElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLBlockquoteElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSHTMLBlockquoteElement, Base>(exec, &JSHTMLBlockquoteElementTable, this, propertyName, slot);
}

bool JSHTMLBlockquoteElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSHTMLBlockquoteElement, Base>(exec, &JSHTMLBlockquoteElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLBlockquoteElementCite(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBlockquoteElement* castedThis = static_cast<JSHTMLBlockquoteElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBlockquoteElement* imp = static_cast<HTMLBlockquoteElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getURLAttribute(WebCore::HTMLNames::citeAttr));
    return result;
}


JSValue jsHTMLBlockquoteElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBlockquoteElement* domObject = static_cast<JSHTMLBlockquoteElement*>(asObject(slotBase));
    return JSHTMLBlockquoteElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLBlockquoteElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSHTMLBlockquoteElement, Base>(exec, propertyName, value, &JSHTMLBlockquoteElementTable, this, slot);
}

void setJSHTMLBlockquoteElementCite(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLBlockquoteElement* castedThis = static_cast<JSHTMLBlockquoteElement*>(thisObject);
    HTMLBlockquoteElement* imp = static_cast<HTMLBlockquoteElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::citeAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLBlockquoteElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLBlockquoteElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
