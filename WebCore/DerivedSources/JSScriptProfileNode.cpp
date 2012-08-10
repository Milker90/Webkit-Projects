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

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "JSScriptProfileNode.h"

#include "KURL.h"
#include "ScriptProfileNode.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSScriptProfileNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSScriptProfileNodeTableValues[10] =
{
    { "functionName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeFunctionName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "url", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeUrl), (intptr_t)0 THUNK_GENERATOR(0) },
    { "lineNumber", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeLineNumber), (intptr_t)0 THUNK_GENERATOR(0) },
    { "totalTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeTotalTime), (intptr_t)0 THUNK_GENERATOR(0) },
    { "selfTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeSelfTime), (intptr_t)0 THUNK_GENERATOR(0) },
    { "numberOfCalls", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeNumberOfCalls), (intptr_t)0 THUNK_GENERATOR(0) },
    { "children", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeChildren), (intptr_t)0 THUNK_GENERATOR(0) },
    { "visible", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeVisible), (intptr_t)0 THUNK_GENERATOR(0) },
    { "callUID", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeCallUID), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSScriptProfileNodeTable = { 35, 31, JSScriptProfileNodeTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSScriptProfileNodePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSScriptProfileNodePrototypeTable = { 1, 0, JSScriptProfileNodePrototypeTableValues, 0 };
const ClassInfo JSScriptProfileNodePrototype::s_info = { "ScriptProfileNodePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSScriptProfileNodePrototypeTable, 0 };

JSObject* JSScriptProfileNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSScriptProfileNode>(exec, globalObject);
}

const ClassInfo JSScriptProfileNode::s_info = { "ScriptProfileNode", &JSDOMWrapper::s_info, &JSScriptProfileNodeTable, 0 };

JSScriptProfileNode::JSScriptProfileNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ScriptProfileNode> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSScriptProfileNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSScriptProfileNodePrototype(exec->globalData(), globalObject, JSScriptProfileNodePrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSScriptProfileNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSScriptProfileNode, Base>(exec, &JSScriptProfileNodeTable, this, propertyName, slot);
}

bool JSScriptProfileNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSScriptProfileNode, Base>(exec, &JSScriptProfileNodeTable, this, propertyName, descriptor);
}

JSValue jsScriptProfileNodeFunctionName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* imp = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsString(exec, imp->functionName());
    return result;
}


JSValue jsScriptProfileNodeUrl(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* imp = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsString(exec, imp->url());
    return result;
}


JSValue jsScriptProfileNodeLineNumber(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* imp = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->lineNumber());
    return result;
}


JSValue jsScriptProfileNodeTotalTime(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* imp = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->totalTime());
    return result;
}


JSValue jsScriptProfileNodeSelfTime(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* imp = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->selfTime());
    return result;
}


JSValue jsScriptProfileNodeNumberOfCalls(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* imp = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->numberOfCalls());
    return result;
}


JSValue jsScriptProfileNodeChildren(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    return castedThis->children(exec);
}


JSValue jsScriptProfileNodeVisible(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* imp = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsBoolean(imp->visible());
    return result;
}


JSValue jsScriptProfileNodeCallUID(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSScriptProfileNode* castedThis = static_cast<JSScriptProfileNode*>(asObject(slotBase));
    return castedThis->callUID(exec);
}


JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ScriptProfileNode* impl)
{
    return wrap<JSScriptProfileNode>(exec, globalObject, impl);
}

ScriptProfileNode* toScriptProfileNode(JSC::JSValue value)
{
    return value.inherits(&JSScriptProfileNode::s_info) ? static_cast<JSScriptProfileNode*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(JAVASCRIPT_DEBUGGER)
