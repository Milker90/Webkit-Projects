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

#include "JSSVGPolylineElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGPointList.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGMatrix.h"
#include "SVGPointList.h"
#include "SVGPolylineElement.h"
#include "SVGRect.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPolylineElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPolylineElementTableValues[15] =
{
    { "points", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementPoints), (intptr_t)0 THUNK_GENERATOR(0) },
    { "animatedPoints", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementAnimatedPoints), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementXmllang), (intptr_t)setJSSVGPolylineElementXmllang THUNK_GENERATOR(0) },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementXmlspace), (intptr_t)setJSSVGPolylineElementXmlspace THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "transform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementTransform), (intptr_t)0 THUNK_GENERATOR(0) },
    { "nearestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementNearestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "farthestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementFarthestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPolylineElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPolylineElementTable = { 34, 31, JSSVGPolylineElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPolylineElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPolylineElementConstructorTable = { 1, 0, JSSVGPolylineElementConstructorTableValues, 0 };
class JSSVGPolylineElementConstructor : public DOMConstructorObject {
public:
    JSSVGPolylineElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPolylineElementConstructor::s_info = { "SVGPolylineElementConstructor", &DOMConstructorObject::s_info, &JSSVGPolylineElementConstructorTable, 0 };

JSSVGPolylineElementConstructor::JSSVGPolylineElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPolylineElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPolylineElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPolylineElementConstructor, JSDOMWrapper>(exec, &JSSVGPolylineElementConstructorTable, this, propertyName, slot);
}

bool JSSVGPolylineElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPolylineElementConstructor, JSDOMWrapper>(exec, &JSSVGPolylineElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPolylineElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPolylineElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPolylineElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getBBox", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPolylineElementPrototypeFunctionGetBBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPolylineElementPrototypeFunctionGetCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getScreenCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPolylineElementPrototypeFunctionGetScreenCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getTransformToElement", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPolylineElementPrototypeFunctionGetTransformToElement), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPolylineElementPrototypeTable = { 17, 15, JSSVGPolylineElementPrototypeTableValues, 0 };
const ClassInfo JSSVGPolylineElementPrototype::s_info = { "SVGPolylineElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPolylineElementPrototypeTable, 0 };

JSObject* JSSVGPolylineElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPolylineElement>(exec, globalObject);
}

bool JSSVGPolylineElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPolylineElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGPolylineElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGPolylineElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGPolylineElement::s_info = { "SVGPolylineElement", &JSSVGElement::s_info, &JSSVGPolylineElementTable, 0 };

JSSVGPolylineElement::JSSVGPolylineElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPolylineElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPolylineElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPolylineElementPrototype(exec->globalData(), globalObject, JSSVGPolylineElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGPolylineElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGPolylineElement, Base>(exec, &JSSVGPolylineElementTable, this, propertyName, slot);
}

bool JSSVGPolylineElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGPolylineElement, Base>(exec, &JSSVGPolylineElementTable, this, propertyName, descriptor);
}

JSValue jsSVGPolylineElementPoints(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->points()));
    return result;
}


JSValue jsSVGPolylineElementAnimatedPoints(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->animatedPoints()));
    return result;
}


JSValue jsSVGPolylineElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGPolylineElement, IsDerivedFromSVGElement<SVGPolylineElement>::value>::ownerElement(imp), imp->requiredFeatures())));
    return result;
}


JSValue jsSVGPolylineElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGPolylineElement, IsDerivedFromSVGElement<SVGPolylineElement>::value>::ownerElement(imp), imp->requiredExtensions())));
    return result;
}


JSValue jsSVGPolylineElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGPolylineElement, IsDerivedFromSVGElement<SVGPolylineElement>::value>::ownerElement(imp), imp->systemLanguage())));
    return result;
}


JSValue jsSVGPolylineElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}


JSValue jsSVGPolylineElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}


JSValue jsSVGPolylineElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPolylineElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPolylineElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGPolylineElementTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPolylineElementNearestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
    return result;
}


JSValue jsSVGPolylineElementFarthestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
    return result;
}


JSValue jsSVGPolylineElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPolylineElement* domObject = static_cast<JSSVGPolylineElement*>(asObject(slotBase));
    return JSSVGPolylineElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGPolylineElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGPolylineElement, Base>(exec, propertyName, value, &JSSVGPolylineElementTable, this, slot);
}

void setJSSVGPolylineElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(thisObject);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    imp->setXmllang(ustringToString(value.toString(exec)));
}


void setJSSVGPolylineElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(thisObject);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    imp->setXmlspace(ustringToString(value.toString(exec)));
}


JSValue JSSVGPolylineElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPolylineElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGPolylineElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPolylineElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPolylineElement::s_info);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGPolylineElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPolylineElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPolylineElement::s_info);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGPolylineElementPrototypeFunctionGetBBox(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPolylineElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPolylineElement::s_info);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGPolylineElementPrototypeFunctionGetCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPolylineElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPolylineElement::s_info);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGPolylineElementPrototypeFunctionGetScreenCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPolylineElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPolylineElement::s_info);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGPolylineElementPrototypeFunctionGetTransformToElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPolylineElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPolylineElement* castedThis = static_cast<JSSVGPolylineElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPolylineElement::s_info);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    SVGElement* element(toSVGElement(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getTransformToElement(element, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)
