#include "ABlendableGlobalLightingVolumeFogBase.hpp"
#include "AVolume.hpp"
#include "EGlobalLightingFogZMode.hpp"
#include "FBlendDomain.hpp"
#include "UExpHeightFogTransmuter.hpp"
#include "UGlobalLightingBlendableExpHeightFogVolume.hpp"
ABlendableGlobalLightingVolumeFogBase* ABlendableGlobalLightingVolumeFogBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlendableGlobalLightingVolumeFogBase");
    return (ABlendableGlobalLightingVolumeFogBase*)res;
}
