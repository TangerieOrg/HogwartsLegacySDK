#include "FProbeContactShadowsParametersOverride.hpp"
#include "UProbeLightingParams.hpp"
#include "UProbeLightingParamsContactShadowsOverride.hpp"
UProbeLightingParamsContactShadowsOverride* UProbeLightingParamsContactShadowsOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParamsContactShadowsOverride");
    return (UProbeLightingParamsContactShadowsOverride*)res;
}
