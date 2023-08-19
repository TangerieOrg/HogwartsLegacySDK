#include "FProbeContactShadowsParameters.hpp"
#include "UProbeLightingParams.hpp"
#include "UProbeLightingParamsContactShadows.hpp"
UProbeLightingParamsContactShadows* UProbeLightingParamsContactShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParamsContactShadows");
    return (UProbeLightingParamsContactShadows*)res;
}
