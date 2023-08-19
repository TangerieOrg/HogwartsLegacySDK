#include "ABlendableGlobalLightingVolume.hpp"
#include "AVolume.hpp"
#include "EGlobalLightingFogZMode.hpp"
#include "FBlendDomain.hpp"
#include "UGlobalLightingBlendable.hpp"
ABlendableGlobalLightingVolume* ABlendableGlobalLightingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlendableGlobalLightingVolume");
    return (ABlendableGlobalLightingVolume*)res;
}
