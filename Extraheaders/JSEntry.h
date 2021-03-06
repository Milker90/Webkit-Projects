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

#ifndef JSEntry_h
#define JSEntry_h

#if ENABLE(FILE_SYSTEM)

#include "Entry.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSEntry : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSEntry* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Entry> impl)
    {
        JSEntry* ptr = new (NotNull, JSC::allocateCell<JSEntry>(globalObject->globalData().heap)) JSEntry(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSEntry();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    Entry* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    Entry* m_impl;
protected:
    JSEntry(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Entry>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSEntryOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, Entry*)
{
    DEFINE_STATIC_LOCAL(JSEntryOwner, jsEntryOwner, ());
    return &jsEntryOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, Entry*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Entry*);
Entry* toEntry(JSC::JSValue);

class JSEntryPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSEntryPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSEntryPrototype* ptr = new (NotNull, JSC::allocateCell<JSEntryPrototype>(globalData.heap)) JSEntryPrototype(globalData, globalObject, structure);
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
    JSEntryPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSEntryConstructor : public DOMConstructorObject {
private:
    JSEntryConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSEntryConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSEntryConstructor* ptr = new (NotNull, JSC::allocateCell<JSEntryConstructor>(*exec->heap())) JSEntryConstructor(structure, globalObject);
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

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionGetMetadata(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionMoveTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionCopyTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionToURL(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionRemove(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEntryPrototypeFunctionGetParent(JSC::ExecState*);
// Attributes

JSC::JSValue jsEntryIsFile(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEntryIsDirectory(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEntryName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEntryFullPath(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEntryFilesystem(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEntryConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)

#endif
