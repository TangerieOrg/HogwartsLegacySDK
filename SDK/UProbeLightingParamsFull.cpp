#include "FProbeLightingParameters.hpp"
#include "UProbeLightingParams.hpp"
#include "UProbeLightingParamsFull.hpp"
UProbeLightingParamsFull* UProbeLightingParamsFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParamsFull");
    return (UProbeLightingParamsFull*)res;
}
