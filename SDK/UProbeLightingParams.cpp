#include "UObject.hpp"
#include "UProbeLightingParams.hpp"
UProbeLightingParams* UProbeLightingParams::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ProbeLightingParams");
    return (UProbeLightingParams*)res;
}
