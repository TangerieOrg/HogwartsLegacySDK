#include "FProbeLightingToneMapParameters.hpp"
#include "UProbeLightingParams.hpp"
#include "UProbeLightingParamsToneMap.hpp"
UProbeLightingParamsToneMap* UProbeLightingParamsToneMap::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParamsToneMap");
    return (UProbeLightingParamsToneMap*)res;
}
