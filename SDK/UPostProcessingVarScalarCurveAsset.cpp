#include "UCurveFloat.hpp"
#include "UPostProcessingVarScalarBase.hpp"
#include "UPostProcessingVarScalarCurveAsset.hpp"
UPostProcessingVarScalarCurveAsset* UPostProcessingVarScalarCurveAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarScalarCurveAsset");
    return (UPostProcessingVarScalarCurveAsset*)res;
}
