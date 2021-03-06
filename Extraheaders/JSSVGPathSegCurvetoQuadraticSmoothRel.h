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

#ifndef JSSVGPathSegCurvetoQuadraticSmoothRel_h
#define JSSVGPathSegCurvetoQuadraticSmoothRel_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGPathSeg.h"
#include "SVGElement.h"
#include "SVGPathSegCurvetoQuadraticSmooth.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGPathSegCurvetoQuadraticSmoothRel : public JSSVGPathSeg {
public:
    typedef JSSVGPathSeg Base;
    static JSSVGPathSegCurvetoQuadraticSmoothRel* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoQuadraticSmoothRel> impl)
    {
        JSSVGPathSegCurvetoQuadraticSmoothRel* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticSmoothRel>(globalObject->globalData().heap)) JSSVGPathSegCurvetoQuadraticSmoothRel(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSSVGPathSegCurvetoQuadraticSmoothRel(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPathSegCurvetoQuadraticSmoothRel>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGPathSegCurvetoQuadraticSmoothRelPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGPathSegCurvetoQuadraticSmoothRelPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegCurvetoQuadraticSmoothRelPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticSmoothRelPrototype>(globalData.heap)) JSSVGPathSegCurvetoQuadraticSmoothRelPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSVGPathSegCurvetoQuadraticSmoothRelPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSSVGPathSegCurvetoQuadraticSmoothRelConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegCurvetoQuadraticSmoothRelConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegCurvetoQuadraticSmoothRelConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegCurvetoQuadraticSmoothRelConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticSmoothRelConstructor>(*exec->heap())) JSSVGPathSegCurvetoQuadraticSmoothRelConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Attributes

JSC::JSValue jsSVGPathSegCurvetoQuadraticSmoothRelX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticSmoothRelX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoQuadraticSmoothRelY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticSmoothRelY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoQuadraticSmoothRelConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
