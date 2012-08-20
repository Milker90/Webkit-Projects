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

#include "JSSVGSymbolElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "JSSVGAnimatedString.h"
#include "KURL.h"
#include "SVGSymbolElement.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGSymbolElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGSymbolElementTableValues[9] =
{
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementXmllang), (intptr_t)setJSSVGSymbolElementXmllang THUNK_GENERATOR(0) },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementXmlspace), (intptr_t)setJSSVGSymbolElementXmlspace THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "viewBox", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementViewBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementPreserveAspectRatio), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSymbolElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGSymbolElementTable = { 16, 15, JSSVGSymbolElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGSymbolElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGSymbolElementConstructorTable = { 1, 0, JSSVGSymbolElementConstructorTableValues, 0 };
class JSSVGSymbolElementConstructor : public DOMConstructorObject {
public:
    JSSVGSymbolElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGSymbolElementConstructor::s_info = { "SVGSymbolElementConstructor", &DOMConstructorObject::s_info, &JSSVGSymbolElementConstructorTable, 0 };

JSSVGSymbolElementConstructor::JSSVGSymbolElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGSymbolElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGSymbolElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGSymbolElementConstructor, JSDOMWrapper>(exec, &JSSVGSymbolElementConstructorTable, this, propertyName, slot);
}

bool JSSVGSymbolElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGSymbolElementConstructor, JSDOMWrapper>(exec, &JSSVGSymbolElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGSymbolElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGSymbolElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGSymbolElementPrototypeTable = { 2, 1, JSSVGSymbolElementPrototypeTableValues, 0 };
const ClassInfo JSSVGSymbolElementPrototype::s_info = { "SVGSymbolElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGSymbolElementPrototypeTable, 0 };

JSObject* JSSVGSymbolElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGSymbolElement>(exec, globalObject);
}

bool JSSVGSymbolElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGSymbolElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGSymbolElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGSymbolElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGSymbolElement::s_info = { "SVGSymbolElement", &JSSVGElement::s_info, &JSSVGSymbolElementTable, 0 };

JSSVGSymbolElement::JSSVGSymbolElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGSymbolElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGSymbolElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGSymbolElementPrototype(exec->globalData(), globalObject, JSSVGSymbolElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGSymbolElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGSymbolElement, Base>(exec, &JSSVGSymbolElementTable, this, propertyName, slot);
}

bool JSSVGSymbolElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGSymbolElement, Base>(exec, &JSSVGSymbolElementTable, this, propertyName, descriptor);
}

JSValue jsSVGSymbolElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}


JSValue jsSVGSymbolElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}


JSValue jsSVGSymbolElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGSymbolElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGSymbolElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGSymbolElementViewBox(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = imp->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGSymbolElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGSymbolElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSymbolElement* domObject = static_cast<JSSVGSymbolElement*>(asObject(slotBase));
    return JSSVGSymbolElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGSymbolElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGSymbolElement, Base>(exec, propertyName, value, &JSSVGSymbolElementTable, this, slot);
}

void setJSSVGSymbolElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(thisObject);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    imp->setXmllang(ustringToString(value.toString(exec)));
}


void setJSSVGSymbolElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(thisObject);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    imp->setXmlspace(ustringToString(value.toString(exec)));
}


JSValue JSSVGSymbolElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGSymbolElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGSymbolElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGSymbolElement::s_info))
        return throwVMTypeError(exec);
    JSSVGSymbolElement* castedThis = static_cast<JSSVGSymbolElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGSymbolElement::s_info);
    SVGSymbolElement* imp = static_cast<SVGSymbolElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)