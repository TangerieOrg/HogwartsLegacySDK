#include "FProbeLightingAdjustmentParameters.hpp"
#include "UProbeLightingParams.hpp"
#include "UProbeLightingParamsAdjustments.hpp"
UProbeLightingParamsAdjustments* UProbeLightingParamsAdjustments::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParamsAdjustments");
    return (UProbeLightingParamsAdjustments*)res;
}
