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

#include "JSSVGAngle.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "SVGAngle.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAngle);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAngleTableValues[6] =
{
    { "unitType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleUnitType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleValue), (intptr_t)setJSSVGAngleValue THUNK_GENERATOR(0) },
    { "valueInSpecifiedUnits", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleValueInSpecifiedUnits), (intptr_t)setJSSVGAngleValueInSpecifiedUnits THUNK_GENERATOR(0) },
    { "valueAsString", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleValueAsString), (intptr_t)setJSSVGAngleValueAsString THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAngleTable = { 17, 15, JSSVGAngleTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAngleConstructorTableValues[6] =
{
    { "SVG_ANGLETYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ANGLETYPE_UNSPECIFIED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_UNSPECIFIED), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ANGLETYPE_DEG", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_DEG), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ANGLETYPE_RAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_RAD), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ANGLETYPE_GRAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_GRAD), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAngleConstructorTable = { 18, 15, JSSVGAngleConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGAngle::SVG_ANGLETYPE_UNKNOWN, SVGAngleEnumSVG_ANGLETYPE_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGAngle::SVG_ANGLETYPE_UNSPECIFIED, SVGAngleEnumSVG_ANGLETYPE_UNSPECIFIEDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGAngle::SVG_ANGLETYPE_DEG, SVGAngleEnumSVG_ANGLETYPE_DEGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == SVGAngle::SVG_ANGLETYPE_RAD, SVGAngleEnumSVG_ANGLETYPE_RADIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == SVGAngle::SVG_ANGLETYPE_GRAD, SVGAngleEnumSVG_ANGLETYPE_GRADIsWrongUseDontCheckEnums);

class JSSVGAngleConstructor : public DOMConstructorObject {
public:
    JSSVGAngleConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGAngleConstructor::s_info = { "SVGAngleConstructor", &DOMConstructorObject::s_info, &JSSVGAngleConstructorTable, 0 };

JSSVGAngleConstructor::JSSVGAngleConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGAnglePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGAngleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAngleConstructor, JSDOMWrapper>(exec, &JSSVGAngleConstructorTable, this, propertyName, slot);
}

bool JSSVGAngleConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAngleConstructor, JSDOMWrapper>(exec, &JSSVGAngleConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnglePrototypeTableValues[8] =
{
    { "SVG_ANGLETYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ANGLETYPE_UNSPECIFIED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_UNSPECIFIED), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ANGLETYPE_DEG", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_DEG), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ANGLETYPE_RAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_RAD), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ANGLETYPE_GRAD", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAngleSVG_ANGLETYPE_GRAD), (intptr_t)0 THUNK_GENERATOR(0) },
    { "newValueSpecifiedUnits", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnglePrototypeFunctionNewValueSpecifiedUnits), (intptr_t)2 THUNK_GENERATOR(0) },
    { "convertToSpecifiedUnits", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnglePrototypeFunctionConvertToSpecifiedUnits), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnglePrototypeTable = { 18, 15, JSSVGAnglePrototypeTableValues, 0 };
const ClassInfo JSSVGAnglePrototype::s_info = { "SVGAnglePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGAnglePrototypeTable, 0 };

JSObject* JSSVGAnglePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAngle>(exec, globalObject);
}

bool JSSVGAnglePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGAnglePrototype, JSObject>(exec, &JSSVGAnglePrototypeTable, this, propertyName, slot);
}

bool JSSVGAnglePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGAnglePrototype, JSObject>(exec, &JSSVGAnglePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGAngle::s_info = { "SVGAngle", &JSDOMWrapper::s_info, &JSSVGAngleTable, 0 };

JSSVGAngle::JSSVGAngle(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPropertyTearOff<SVGAngle> > impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAngle::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnglePrototype(exec->globalData(), globalObject, JSSVGAnglePrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGAngle::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGAngle, Base>(exec, &JSSVGAngleTable, this, propertyName, slot);
}

bool JSSVGAngle::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGAngle, Base>(exec, &JSSVGAngleTable, this, propertyName, descriptor);
}

JSValue jsSVGAngleUnitType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAngle& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.unitType());
    return result;
}


JSValue jsSVGAngleValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAngle& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.value());
    return result;
}


JSValue jsSVGAngleValueInSpecifiedUnits(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAngle& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.valueInSpecifiedUnits());
    return result;
}


JSValue jsSVGAngleValueAsString(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAngle& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsString(exec, imp.valueAsString());
    return result;
}


JSValue jsSVGAngleConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAngle* domObject = static_cast<JSSVGAngle*>(asObject(slotBase));
    return JSSVGAngle::getConstructor(exec, domObject->globalObject());
}

void JSSVGAngle::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGAngle, Base>(exec, propertyName, value, &JSSVGAngleTable, this, slot);
}

void setJSSVGAngleValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(thisObject);
    SVGPropertyTearOff<SVGAngle> * imp = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGAngle& podImp = imp->propertyReference();
    podImp.setValue(value.toFloat(exec));
    imp->commitChange();
}


void setJSSVGAngleValueInSpecifiedUnits(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(thisObject);
    SVGPropertyTearOff<SVGAngle> * imp = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGAngle& podImp = imp->propertyReference();
    podImp.setValueInSpecifiedUnits(value.toFloat(exec));
    imp->commitChange();
}


void setJSSVGAngleValueAsString(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(thisObject);
    SVGPropertyTearOff<SVGAngle> * imp = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    ExceptionCode ec = 0;
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGAngle& podImp = imp->propertyReference();
    podImp.setValueAsString(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
    if (!ec)
        imp->commitChange();
}


JSValue JSSVGAngle::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAngleConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGAnglePrototypeFunctionNewValueSpecifiedUnits(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAngle::s_info))
        return throwVMTypeError(exec);
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAngle::s_info);
    SVGPropertyTearOff<SVGAngle> * imp = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGAngle& podImp = imp->propertyReference();
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createSyntaxError(exec, "Not enough arguments"));
    ExceptionCode ec = 0;
    unsigned short unitType(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float valueInSpecifiedUnits(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    podImp.newValueSpecifiedUnits(unitType, valueInSpecifiedUnits, ec);
    setDOMException(exec, ec);
    if (!ec)
        imp->commitChange();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGAnglePrototypeFunctionConvertToSpecifiedUnits(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAngle::s_info))
        return throwVMTypeError(exec);
    JSSVGAngle* castedThis = static_cast<JSSVGAngle*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAngle::s_info);
    SVGPropertyTearOff<SVGAngle> * imp = static_cast<SVGPropertyTearOff<SVGAngle> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGAngle& podImp = imp->propertyReference();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createSyntaxError(exec, "Not enough arguments"));
    ExceptionCode ec = 0;
    unsigned short unitType(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    podImp.convertToSpecifiedUnits(unitType, ec);
    setDOMException(exec, ec);
    if (!ec)
        imp->commitChange();
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsSVGAngleSVG_ANGLETYPE_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGAngleSVG_ANGLETYPE_UNSPECIFIED(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGAngleSVG_ANGLETYPE_DEG(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGAngleSVG_ANGLETYPE_RAD(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGAngleSVG_ANGLETYPE_GRAD(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<SVGAngle> * impl)
{
    return wrap<JSSVGAngle, SVGPropertyTearOff<SVGAngle> >(exec, globalObject, impl);
}

SVGPropertyTearOff<SVGAngle> * toSVGAngle(JSC::JSValue value)
{
    return value.inherits(&JSSVGAngle::s_info) ? static_cast<JSSVGAngle*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
