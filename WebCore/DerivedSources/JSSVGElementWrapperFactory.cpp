/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "JSSVGElementWrapperFactory.h"

#if ENABLE(SVG)

#include "JSSVGAElement.h"
#include "JSSVGCircleElement.h"
#include "JSSVGClipPathElement.h"
#include "JSSVGCursorElement.h"
#include "JSSVGDefsElement.h"
#include "JSSVGDescElement.h"
#include "JSSVGEllipseElement.h"
#include "JSSVGGElement.h"
#include "JSSVGImageElement.h"
#include "JSSVGLineElement.h"
#include "JSSVGLinearGradientElement.h"
#include "JSSVGMarkerElement.h"
#include "JSSVGMaskElement.h"
#include "JSSVGMetadataElement.h"
#include "JSSVGPathElement.h"
#include "JSSVGPatternElement.h"
#include "JSSVGPolygonElement.h"
#include "JSSVGPolylineElement.h"
#include "JSSVGRadialGradientElement.h"
#include "JSSVGRectElement.h"
#include "JSSVGScriptElement.h"
#include "JSSVGStopElement.h"
#include "JSSVGStyleElement.h"
#include "JSSVGSVGElement.h"
#include "JSSVGSwitchElement.h"
#include "JSSVGSymbolElement.h"
#include "JSSVGTextElement.h"
#include "JSSVGTextPathElement.h"
#include "JSSVGTitleElement.h"
#include "JSSVGTRefElement.h"
#include "JSSVGTSpanElement.h"
#include "JSSVGUseElement.h"
#include "JSSVGViewElement.h"
#include "JSSVGVKernElement.h"

#include "SVGNames.h"

#include "SVGAElement.h"
#include "SVGCircleElement.h"
#include "SVGClipPathElement.h"
#include "SVGCursorElement.h"
#include "SVGDefsElement.h"
#include "SVGDescElement.h"
#include "SVGEllipseElement.h"
#include "SVGGElement.h"
#include "SVGImageElement.h"
#include "SVGLineElement.h"
#include "SVGLinearGradientElement.h"
#include "SVGMarkerElement.h"
#include "SVGMaskElement.h"
#include "SVGMetadataElement.h"
#include "SVGMPathElement.h"
#include "SVGPathElement.h"
#include "SVGPatternElement.h"
#include "SVGPolygonElement.h"
#include "SVGPolylineElement.h"
#include "SVGRadialGradientElement.h"
#include "SVGRectElement.h"
#include "SVGScriptElement.h"
#include "SVGStopElement.h"
#include "SVGStyleElement.h"
#include "SVGSVGElement.h"
#include "SVGSwitchElement.h"
#include "SVGSymbolElement.h"
#include "SVGTextElement.h"
#include "SVGTextPathElement.h"
#include "SVGTitleElement.h"
#include "SVGTRefElement.h"
#include "SVGTSpanElement.h"
#include "SVGUseElement.h"
#include "SVGViewElement.h"
#include "SVGVKernElement.h"

#include <wtf/StdLibExtras.h>

#if ENABLE(VIDEO)
#include "Document.h"
#include "Settings.h"
#endif

using namespace JSC;

namespace WebCore {

using namespace SVGNames;

typedef JSDOMWrapper* (*CreateSVGElementWrapperFunction)(ExecState*, JSDOMGlobalObject*, PassRefPtr<SVGElement>);

static JSDOMWrapper* createSVGAElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGAElement, element.get());
}

static JSDOMWrapper* createSVGCircleElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGCircleElement, element.get());
}

static JSDOMWrapper* createSVGClipPathElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGClipPathElement, element.get());
}

static JSDOMWrapper* createSVGCursorElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGCursorElement, element.get());
}

static JSDOMWrapper* createSVGDefsElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGDefsElement, element.get());
}

static JSDOMWrapper* createSVGDescElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGDescElement, element.get());
}

static JSDOMWrapper* createSVGEllipseElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGEllipseElement, element.get());
}

static JSDOMWrapper* createSVGGElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGGElement, element.get());
}

static JSDOMWrapper* createSVGImageElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGImageElement, element.get());
}

static JSDOMWrapper* createSVGLineElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGLineElement, element.get());
}

static JSDOMWrapper* createSVGLinearGradientElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGLinearGradientElement, element.get());
}

static JSDOMWrapper* createSVGMarkerElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGMarkerElement, element.get());
}

static JSDOMWrapper* createSVGMaskElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGMaskElement, element.get());
}

static JSDOMWrapper* createSVGMetadataElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGMetadataElement, element.get());
}

static JSDOMWrapper* createSVGPathElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGPathElement, element.get());
}

static JSDOMWrapper* createSVGPatternElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGPatternElement, element.get());
}

static JSDOMWrapper* createSVGPolygonElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGPolygonElement, element.get());
}

static JSDOMWrapper* createSVGPolylineElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGPolylineElement, element.get());
}

static JSDOMWrapper* createSVGRadialGradientElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGRadialGradientElement, element.get());
}

static JSDOMWrapper* createSVGRectElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGRectElement, element.get());
}

static JSDOMWrapper* createSVGScriptElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGScriptElement, element.get());
}

static JSDOMWrapper* createSVGStopElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGStopElement, element.get());
}

static JSDOMWrapper* createSVGStyleElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGStyleElement, element.get());
}

static JSDOMWrapper* createSVGSVGElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGSVGElement, element.get());
}

static JSDOMWrapper* createSVGSwitchElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGSwitchElement, element.get());
}

static JSDOMWrapper* createSVGSymbolElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGSymbolElement, element.get());
}

static JSDOMWrapper* createSVGTextElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGTextElement, element.get());
}

static JSDOMWrapper* createSVGTextPathElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGTextPathElement, element.get());
}

static JSDOMWrapper* createSVGTitleElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGTitleElement, element.get());
}

static JSDOMWrapper* createSVGTRefElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGTRefElement, element.get());
}

static JSDOMWrapper* createSVGTSpanElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGTSpanElement, element.get());
}

static JSDOMWrapper* createSVGUseElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGUseElement, element.get());
}

static JSDOMWrapper* createSVGViewElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGViewElement, element.get());
}

static JSDOMWrapper* createSVGVKernElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGVKernElement, element.get());
}

JSDOMWrapper* createJSSVGWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElement> element)
{
    typedef HashMap<WTF::AtomicStringImpl*, CreateSVGElementWrapperFunction> FunctionMap;
    DEFINE_STATIC_LOCAL(FunctionMap, map, ());
    if (map.isEmpty()) {
       map.set(aTag.localName().impl(), createSVGAElementWrapper);
       map.set(circleTag.localName().impl(), createSVGCircleElementWrapper);
       map.set(clipPathTag.localName().impl(), createSVGClipPathElementWrapper);
       map.set(cursorTag.localName().impl(), createSVGCursorElementWrapper);
       map.set(defsTag.localName().impl(), createSVGDefsElementWrapper);
       map.set(descTag.localName().impl(), createSVGDescElementWrapper);
       map.set(ellipseTag.localName().impl(), createSVGEllipseElementWrapper);
       map.set(gTag.localName().impl(), createSVGGElementWrapper);
       map.set(imageTag.localName().impl(), createSVGImageElementWrapper);
       map.set(lineTag.localName().impl(), createSVGLineElementWrapper);
       map.set(linearGradientTag.localName().impl(), createSVGLinearGradientElementWrapper);
       map.set(markerTag.localName().impl(), createSVGMarkerElementWrapper);
       map.set(maskTag.localName().impl(), createSVGMaskElementWrapper);
       map.set(metadataTag.localName().impl(), createSVGMetadataElementWrapper);
       map.set(pathTag.localName().impl(), createSVGPathElementWrapper);
       map.set(patternTag.localName().impl(), createSVGPatternElementWrapper);
       map.set(polygonTag.localName().impl(), createSVGPolygonElementWrapper);
       map.set(polylineTag.localName().impl(), createSVGPolylineElementWrapper);
       map.set(radialGradientTag.localName().impl(), createSVGRadialGradientElementWrapper);
       map.set(rectTag.localName().impl(), createSVGRectElementWrapper);
       map.set(scriptTag.localName().impl(), createSVGScriptElementWrapper);
       map.set(stopTag.localName().impl(), createSVGStopElementWrapper);
       map.set(styleTag.localName().impl(), createSVGStyleElementWrapper);
       map.set(svgTag.localName().impl(), createSVGSVGElementWrapper);
       map.set(switchTag.localName().impl(), createSVGSwitchElementWrapper);
       map.set(symbolTag.localName().impl(), createSVGSymbolElementWrapper);
       map.set(textTag.localName().impl(), createSVGTextElementWrapper);
       map.set(textPathTag.localName().impl(), createSVGTextPathElementWrapper);
       map.set(titleTag.localName().impl(), createSVGTitleElementWrapper);
       map.set(trefTag.localName().impl(), createSVGTRefElementWrapper);
       map.set(tspanTag.localName().impl(), createSVGTSpanElementWrapper);
       map.set(useTag.localName().impl(), createSVGUseElementWrapper);
       map.set(viewTag.localName().impl(), createSVGViewElementWrapper);
       map.set(vkernTag.localName().impl(), createSVGVKernElementWrapper);
    }
    CreateSVGElementWrapperFunction createWrapperFunction = map.get(element->localName().impl());
    if (createWrapperFunction)
        return createWrapperFunction(exec, globalObject, element);
    return CREATE_DOM_WRAPPER(exec, globalObject, SVGElement, element.get());
}

}

#endif