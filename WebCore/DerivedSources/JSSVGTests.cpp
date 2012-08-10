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

#include "JSSVGTests.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGStringList.h"
#include "SVGStringList.h"
#include "SVGTests.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTests);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTestsTableValues[4] =
{
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTestsRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTestsRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTestsSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTestsTable = { 8, 7, JSSVGTestsTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTestsPrototypeTableValues[2] =
{
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTestsPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTestsPrototypeTable = { 2, 1, JSSVGTestsPrototypeTableValues, 0 };
const ClassInfo JSSVGTestsPrototype::s_info = { "SVGTestsPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGTestsPrototypeTable, 0 };

JSObject* JSSVGTestsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTests>(exec, globalObject);
}

bool JSSVGTestsPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGTestsPrototypeTable, this, propertyName, slot);
}

bool JSSVGTestsPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGTestsPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGTests::s_info = { "SVGTests", &JSDOMWrapper::s_info, &JSSVGTestsTable, 0 };

JSSVGTests::JSSVGTests(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTests> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGTests::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTestsPrototype(exec->globalData(), globalObject, JSSVGTestsPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGTests::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGTests, Base>(exec, &JSSVGTestsTable, this, propertyName, slot);
}

bool JSSVGTests::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGTests, Base>(exec, &JSSVGTestsTable, this, propertyName, descriptor);
}

JSValue jsSVGTestsRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTests* castedThis = static_cast<JSSVGTests*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTests* imp = static_cast<SVGTests*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGTests, IsDerivedFromSVGElement<SVGTests>::value>::ownerElement(imp), imp->requiredFeatures())));
    return result;
}


JSValue jsSVGTestsRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTests* castedThis = static_cast<JSSVGTests*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTests* imp = static_cast<SVGTests*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGTests, IsDerivedFromSVGElement<SVGTests>::value>::ownerElement(imp), imp->requiredExtensions())));
    return result;
}


JSValue jsSVGTestsSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTests* castedThis = static_cast<JSSVGTests*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTests* imp = static_cast<SVGTests*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGTests, IsDerivedFromSVGElement<SVGTests>::value>::ownerElement(imp), imp->systemLanguage())));
    return result;
}


EncodedJSValue JSC_HOST_CALL jsSVGTestsPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTests::s_info))
        return throwVMTypeError(exec);
    JSSVGTests* castedThis = static_cast<JSSVGTests*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGTests::s_info);
    SVGTests* imp = static_cast<SVGTests*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGTests* impl)
{
    return wrap<JSSVGTests>(exec, globalObject, impl);
}

SVGTests* toSVGTests(JSC::JSValue value)
{
    return value.inherits(&JSSVGTests::s_info) ? static_cast<JSSVGTests*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
