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

#ifndef JSHTMLIFrameElement_h
#define JSHTMLIFrameElement_h

#include "HTMLIFrameElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLIFrameElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLIFrameElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLIFrameElement> impl)
    {
        JSHTMLIFrameElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLIFrameElement>(globalObject->globalData().heap)) JSHTMLIFrameElement(structure, globalObject, impl);
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
    JSHTMLIFrameElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLIFrameElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLIFrameElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLIFrameElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLIFrameElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLIFrameElementPrototype>(globalData.heap)) JSHTMLIFrameElementPrototype(globalData, globalObject, structure);
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
    JSHTMLIFrameElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLIFrameElementConstructor : public DOMConstructorObject {
private:
    JSHTMLIFrameElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLIFrameElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLIFrameElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLIFrameElementConstructor>(*exec->heap())) JSHTMLIFrameElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLIFrameElementPrototypeFunctionGetSVGDocument(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLIFrameElementAlign(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementFrameBorder(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementFrameBorder(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementLongDesc(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementLongDesc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementMarginHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementMarginHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementMarginWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementMarginWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementSandbox(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementSandbox(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(IFRAME_SEAMLESS)
JSC::JSValue jsHTMLIFrameElementSeamless(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementSeamless(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsHTMLIFrameElementScrolling(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementScrolling(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementSrc(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementSrcdoc(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementSrcdoc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLIFrameElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLIFrameElementContentDocument(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLIFrameElementContentWindow(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLIFrameElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
