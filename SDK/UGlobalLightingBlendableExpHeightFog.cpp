#include "EGlobalLightingBlendableInputType.hpp"
#include "UExpHeightFogParams.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableExpHeightFog.hpp"
UGlobalLightingBlendableExpHeightFog* UGlobalLightingBlendableExpHeightFog::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableExpHeightFog");
    return (UGlobalLightingBlendableExpHeightFog*)res;
}
