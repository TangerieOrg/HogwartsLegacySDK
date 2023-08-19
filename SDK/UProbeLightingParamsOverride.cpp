#include "FProbeLightingParametersOverride.hpp"
#include "UProbeLightingParams.hpp"
#include "UProbeLightingParamsOverride.hpp"
UProbeLightingParamsOverride* UProbeLightingParamsOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParamsOverride");
    return (UProbeLightingParamsOverride*)res;
}
