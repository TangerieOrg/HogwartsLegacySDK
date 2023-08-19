#include "FRuntimeCurveLinearColor.hpp"
#include "UPostProcessingVarColorBase.hpp"
#include "UPostProcessingVarColorInlineCurve.hpp"
UPostProcessingVarColorInlineCurve* UPostProcessingVarColorInlineCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarColorInlineCurve");
    return (UPostProcessingVarColorInlineCurve*)res;
}
