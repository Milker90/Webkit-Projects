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

#ifndef JSPerformanceTiming_h
#define JSPerformanceTiming_h

#if ENABLE(WEB_TIMING)

#include "JSDOMBinding.h"
#include "PerformanceTiming.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSPerformanceTiming : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSPerformanceTiming* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<PerformanceTiming> impl)
    {
        JSPerformanceTiming* ptr = new (NotNull, JSC::allocateCell<JSPerformanceTiming>(globalObject->globalData().heap)) JSPerformanceTiming(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSPerformanceTiming();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    PerformanceTiming* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    PerformanceTiming* m_impl;
protected:
    JSPerformanceTiming(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<PerformanceTiming>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSPerformanceTimingOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, PerformanceTiming*)
{
    DEFINE_STATIC_LOCAL(JSPerformanceTimingOwner, jsPerformanceTimingOwner, ());
    return &jsPerformanceTimingOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, PerformanceTiming*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, PerformanceTiming*);
PerformanceTiming* toPerformanceTiming(JSC::JSValue);

class JSPerformanceTimingPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSPerformanceTimingPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSPerformanceTimingPrototype* ptr = new (NotNull, JSC::allocateCell<JSPerformanceTimingPrototype>(globalData.heap)) JSPerformanceTimingPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSPerformanceTimingPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsPerformanceTimingNavigationStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingUnloadEventStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingUnloadEventEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingRedirectStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingRedirectEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingFetchStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingDomainLookupStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingDomainLookupEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingConnectStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingConnectEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingSecureConnectionStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingRequestStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingResponseStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingResponseEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingDomLoading(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingDomInteractive(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingDomContentLoadedEventStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingDomContentLoadedEventEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingDomComplete(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingLoadEventStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceTimingLoadEventEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEB_TIMING)

#endif
