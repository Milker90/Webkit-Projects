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

#include "JSSVGPatternElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGPatternElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPatternElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPatternElementTableValues[20] =
{
    { "patternUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternUnits), (intptr_t)0 THUNK_GENERATOR(0) },
    { "patternContentUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternContentUnits), (intptr_t)0 THUNK_GENERATOR(0) },
    { "patternTransform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternTransform), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementHref), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementXmllang), (intptr_t)setJSSVGPatternElementXmllang THUNK_GENERATOR(0) },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementXmlspace), (intptr_t)setJSSVGPatternElementXmlspace THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "viewBox", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementViewBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPreserveAspectRatio), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPatternElementTable = { 68, 63, JSSVGPatternElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPatternElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPatternElementConstructorTable = { 1, 0, JSSVGPatternElementConstructorTableValues, 0 };
class JSSVGPatternElementConstructor : public DOMConstructorObject {
public:
    JSSVGPatternElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPatternElementConstructor::s_info = { "SVGPatternElementConstructor", &DOMConstructorObject::s_info, &JSSVGPatternElementConstructorTable, 0 };

JSSVGPatternElementConstructor::JSSVGPatternElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPatternElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPatternElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPatternElementConstructor, JSDOMWrapper>(exec, &JSSVGPatternElementConstructorTable, this, propertyName, slot);
}

bool JSSVGPatternElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPatternElementConstructor, JSDOMWrapper>(exec, &JSSVGPatternElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPatternElementPrototypeTableValues[3] =
{
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPatternElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPatternElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPatternElementPrototypeTable = { 4, 3, JSSVGPatternElementPrototypeTableValues, 0 };
const ClassInfo JSSVGPatternElementPrototype::s_info = { "SVGPatternElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPatternElementPrototypeTable, 0 };

JSObject* JSSVGPatternElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPatternElement>(exec, globalObject);
}

bool JSSVGPatternElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPatternElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGPatternElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGPatternElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGPatternElement::s_info = { "SVGPatternElement", &JSSVGElement::s_info, &JSSVGPatternElementTable, 0 };

JSSVGPatternElement::JSSVGPatternElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPatternElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPatternElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPatternElementPrototype(exec->globalData(), globalObject, JSSVGPatternElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGPatternElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGPatternElement, Base>(exec, &JSSVGPatternElementTable, this, propertyName, slot);
}

bool JSSVGPatternElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGPatternElement, Base>(exec, &JSSVGPatternElementTable, this, propertyName, descriptor);
}

JSValue jsSVGPatternElementPatternUnits(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->patternUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementPatternContentUnits(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->patternContentUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementPatternTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->patternTransformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementHref(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGPatternElement, IsDerivedFromSVGElement<SVGPatternElement>::value>::ownerElement(imp), imp->requiredFeatures())));
    return result;
}


JSValue jsSVGPatternElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGPatternElement, IsDerivedFromSVGElement<SVGPatternElement>::value>::ownerElement(imp), imp->requiredExtensions())));
    return result;
}


JSValue jsSVGPatternElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGPatternElement, IsDerivedFromSVGElement<SVGPatternElement>::value>::ownerElement(imp), imp->systemLanguage())));
    return result;
}


JSValue jsSVGPatternElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}


JSValue jsSVGPatternElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}


JSValue jsSVGPatternElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGPatternElementViewBox(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = imp->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* domObject = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    return JSSVGPatternElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGPatternElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGPatternElement, Base>(exec, propertyName, value, &JSSVGPatternElementTable, this, slot);
}

void setJSSVGPatternElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(thisObject);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    imp->setXmllang(ustringToString(value.toString(exec)));
}


void setJSSVGPatternElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(thisObject);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    imp->setXmlspace(ustringToString(value.toString(exec)));
}


JSValue JSSVGPatternElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPatternElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGPatternElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPatternElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPatternElement::s_info);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGPatternElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPatternElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPatternElement::s_info);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)