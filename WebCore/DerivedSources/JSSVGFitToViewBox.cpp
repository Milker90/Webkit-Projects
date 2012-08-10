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

#include "JSSVGFitToViewBox.h"

#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "SVGFitToViewBox.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFitToViewBox);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFitToViewBoxTableValues[3] =
{
    { "viewBox", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFitToViewBoxViewBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFitToViewBoxPreserveAspectRatio), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFitToViewBoxTable = { 5, 3, JSSVGFitToViewBoxTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFitToViewBoxPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFitToViewBoxPrototypeTable = { 1, 0, JSSVGFitToViewBoxPrototypeTableValues, 0 };
const ClassInfo JSSVGFitToViewBoxPrototype::s_info = { "SVGFitToViewBoxPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFitToViewBoxPrototypeTable, 0 };

JSObject* JSSVGFitToViewBoxPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFitToViewBox>(exec, globalObject);
}

const ClassInfo JSSVGFitToViewBox::s_info = { "SVGFitToViewBox", &JSDOMWrapper::s_info, &JSSVGFitToViewBoxTable, 0 };

JSSVGFitToViewBox::JSSVGFitToViewBox(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFitToViewBox> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFitToViewBox::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFitToViewBoxPrototype(exec->globalData(), globalObject, JSSVGFitToViewBoxPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGFitToViewBox::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGFitToViewBox, Base>(exec, &JSSVGFitToViewBoxTable, this, propertyName, slot);
}

bool JSSVGFitToViewBox::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGFitToViewBox, Base>(exec, &JSSVGFitToViewBoxTable, this, propertyName, descriptor);
}

JSValue jsSVGFitToViewBoxViewBox(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFitToViewBox* castedThis = static_cast<JSSVGFitToViewBox*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFitToViewBox* imp = static_cast<SVGFitToViewBox*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = imp->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFitToViewBoxPreserveAspectRatio(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFitToViewBox* castedThis = static_cast<JSSVGFitToViewBox*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFitToViewBox* imp = static_cast<SVGFitToViewBox*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGFitToViewBox* impl)
{
    return wrap<JSSVGFitToViewBox>(exec, globalObject, impl);
}

SVGFitToViewBox* toSVGFitToViewBox(JSC::JSValue value)
{
    return value.inherits(&JSSVGFitToViewBox::s_info) ? static_cast<JSSVGFitToViewBox*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
