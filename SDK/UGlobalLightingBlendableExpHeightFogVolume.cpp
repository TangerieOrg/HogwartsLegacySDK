#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableExpHeightFogVolume.hpp"
UGlobalLightingBlendableExpHeightFogVolume* UGlobalLightingBlendableExpHeightFogVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableExpHeightFogVolume");
    return (UGlobalLightingBlendableExpHeightFogVolume*)res;
}
