#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableProbeLighting.hpp"
#include "UProbeLightingParams.hpp"
UGlobalLightingBlendableProbeLighting* UGlobalLightingBlendableProbeLighting::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableProbeLighting");
    return (UGlobalLightingBlendableProbeLighting*)res;
}
