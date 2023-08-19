#include "FRuntimeFloatCurve.hpp"
#include "UPostProcessingVarScalarBase.hpp"
#include "UPostProcessingVarScalarInlineCurve.hpp"
UPostProcessingVarScalarInlineCurve* UPostProcessingVarScalarInlineCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarScalarInlineCurve");
    return (UPostProcessingVarScalarInlineCurve*)res;
}
