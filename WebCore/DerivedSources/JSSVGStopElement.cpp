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

#if ENABLE(SVG)

#include "JSSVGStopElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGStopElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGStopElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGStopElementTableValues[5] =
{
    { "offset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGStopElementOffset), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGStopElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGStopElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGStopElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGStopElementTable = { 8, 7, JSSVGStopElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGStopElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGStopElementConstructorTable = { 1, 0, JSSVGStopElementConstructorTableValues, 0 };
class JSSVGStopElementConstructor : public DOMConstructorObject {
public:
    JSSVGStopElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGStopElementConstructor::s_info = { "SVGStopElementConstructor", &DOMConstructorObject::s_info, &JSSVGStopElementConstructorTable, 0 };

JSSVGStopElementConstructor::JSSVGStopElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGStopElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGStopElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGStopElementConstructor, JSDOMWrapper>(exec, &JSSVGStopElementConstructorTable, this, propertyName, slot);
}

bool JSSVGStopElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGStopElementConstructor, JSDOMWrapper>(exec, &JSSVGStopElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGStopElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGStopElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGStopElementPrototypeTable = { 2, 1, JSSVGStopElementPrototypeTableValues, 0 };
const ClassInfo JSSVGStopElementPrototype::s_info = { "SVGStopElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGStopElementPrototypeTable, 0 };

JSObject* JSSVGStopElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGStopElement>(exec, globalObject);
}

bool JSSVGStopElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGStopElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGStopElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGStopElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGStopElement::s_info = { "SVGStopElement", &JSSVGElement::s_info, &JSSVGStopElementTable, 0 };

JSSVGStopElement::JSSVGStopElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGStopElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGStopElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGStopElementPrototype(exec->globalData(), globalObject, JSSVGStopElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGStopElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGStopElement, Base>(exec, &JSSVGStopElementTable, this, propertyName, slot);
}

bool JSSVGStopElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGStopElement, Base>(exec, &JSSVGStopElementTable, this, propertyName, descriptor);
}

JSValue jsSVGStopElementOffset(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGStopElement* castedThis = static_cast<JSSVGStopElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGStopElement* imp = static_cast<SVGStopElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->offsetAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGStopElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGStopElement* castedThis = static_cast<JSSVGStopElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGStopElement* imp = static_cast<SVGStopElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGStopElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGStopElement* castedThis = static_cast<JSSVGStopElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGStopElement* imp = static_cast<SVGStopElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGStopElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGStopElement* domObject = static_cast<JSSVGStopElement*>(asObject(slotBase));
    return JSSVGStopElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGStopElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGStopElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGStopElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGStopElement::s_info))
        return throwVMTypeError(exec);
    JSSVGStopElement* castedThis = static_cast<JSSVGStopElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGStopElement::s_info);
    SVGStopElement* imp = static_cast<SVGStopElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)