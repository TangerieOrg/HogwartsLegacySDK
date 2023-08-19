#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableAtmosphericFog.hpp"
UGlobalLightingBlendableAtmosphericFog* UGlobalLightingBlendableAtmosphericFog::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableAtmosphericFog");
    return (UGlobalLightingBlendableAtmosphericFog*)res;
}
