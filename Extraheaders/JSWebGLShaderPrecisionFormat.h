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

#ifndef JSWebGLShaderPrecisionFormat_h
#define JSWebGLShaderPrecisionFormat_h

#if ENABLE(WEBGL)

#include "JSDOMBinding.h"
#include "WebGLShaderPrecisionFormat.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWebGLShaderPrecisionFormat : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWebGLShaderPrecisionFormat* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLShaderPrecisionFormat> impl)
    {
        JSWebGLShaderPrecisionFormat* ptr = new (NotNull, JSC::allocateCell<JSWebGLShaderPrecisionFormat>(globalObject->globalData().heap)) JSWebGLShaderPrecisionFormat(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSWebGLShaderPrecisionFormat();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    WebGLShaderPrecisionFormat* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    WebGLShaderPrecisionFormat* m_impl;
protected:
    JSWebGLShaderPrecisionFormat(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebGLShaderPrecisionFormat>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSWebGLShaderPrecisionFormatOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, WebGLShaderPrecisionFormat*)
{
    DEFINE_STATIC_LOCAL(JSWebGLShaderPrecisionFormatOwner, jsWebGLShaderPrecisionFormatOwner, ());
    return &jsWebGLShaderPrecisionFormatOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, WebGLShaderPrecisionFormat*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WebGLShaderPrecisionFormat*);
WebGLShaderPrecisionFormat* toWebGLShaderPrecisionFormat(JSC::JSValue);

class JSWebGLShaderPrecisionFormatPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSWebGLShaderPrecisionFormatPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLShaderPrecisionFormatPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLShaderPrecisionFormatPrototype>(globalData.heap)) JSWebGLShaderPrecisionFormatPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSWebGLShaderPrecisionFormatPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSWebGLShaderPrecisionFormatConstructor : public DOMConstructorObject {
private:
    JSWebGLShaderPrecisionFormatConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLShaderPrecisionFormatConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLShaderPrecisionFormatConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebGLShaderPrecisionFormatConstructor>(*exec->heap())) JSWebGLShaderPrecisionFormatConstructor(structure, globalObject);
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

JSC::JSValue jsWebGLShaderPrecisionFormatRangeMin(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebGLShaderPrecisionFormatRangeMax(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebGLShaderPrecisionFormatPrecision(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebGLShaderPrecisionFormatConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif
