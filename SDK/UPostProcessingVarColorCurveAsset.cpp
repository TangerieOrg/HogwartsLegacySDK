#include "UCurveLinearColor.hpp"
#include "UPostProcessingVarColorBase.hpp"
#include "UPostProcessingVarColorCurveAsset.hpp"
UPostProcessingVarColorCurveAsset* UPostProcessingVarColorCurveAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarColorCurveAsset");
    return (UPostProcessingVarColorCurveAsset*)res;
}
