#include "FProbeLightingToneMapParametersOverride.hpp"
#include "UProbeLightingParams.hpp"
#include "UProbeLightingParamsToneMapOverride.hpp"
UProbeLightingParamsToneMapOverride* UProbeLightingParamsToneMapOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParamsToneMapOverride");
    return (UProbeLightingParamsToneMapOverride*)res;
}
