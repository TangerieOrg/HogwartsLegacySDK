#include "FProbeLightingAdjustmentParametersOverride.hpp"
#include "UProbeLightingParams.hpp"
#include "UProbeLightingParamsAdjustmentsOverride.hpp"
UProbeLightingParamsAdjustmentsOverride* UProbeLightingParamsAdjustmentsOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParamsAdjustmentsOverride");
    return (UProbeLightingParamsAdjustmentsOverride*)res;
}
