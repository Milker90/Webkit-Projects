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

#ifndef JSFileError_h
#define JSFileError_h

#if ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#include "FileError.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSFileError : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSFileError* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<FileError> impl)
    {
        JSFileError* ptr = new (NotNull, JSC::allocateCell<JSFileError>(globalObject->globalData().heap)) JSFileError(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSFileError();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    FileError* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    FileError* m_impl;
protected:
    JSFileError(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<FileError>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSFileErrorOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, FileError*)
{
    DEFINE_STATIC_LOCAL(JSFileErrorOwner, jsFileErrorOwner, ());
    return &jsFileErrorOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, FileError*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, FileError*);
FileError* toFileError(JSC::JSValue);

class JSFileErrorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSFileErrorPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSFileErrorPrototype* ptr = new (NotNull, JSC::allocateCell<JSFileErrorPrototype>(globalData.heap)) JSFileErrorPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSFileErrorPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSFileErrorConstructor : public DOMConstructorObject {
private:
    JSFileErrorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSFileErrorConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSFileErrorConstructor* ptr = new (NotNull, JSC::allocateCell<JSFileErrorConstructor>(*exec->heap())) JSFileErrorConstructor(structure, globalObject);
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

JSC::JSValue jsFileErrorCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsFileErrorNOT_FOUND_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorSECURITY_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorABORT_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorNOT_READABLE_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorENCODING_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorNO_MODIFICATION_ALLOWED_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorINVALID_STATE_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorSYNTAX_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorINVALID_MODIFICATION_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorQUOTA_EXCEEDED_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorTYPE_MISMATCH_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsFileErrorPATH_EXISTS_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#endif