#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableDirectionalLightsOff.hpp"
UGlobalLightingBlendableDirectionalLightsOff* UGlobalLightingBlendableDirectionalLightsOff::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableDirectionalLightsOff");
    return (UGlobalLightingBlendableDirectionalLightsOff*)res;
}
