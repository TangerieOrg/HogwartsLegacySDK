#include "EGlobalLightingFogZMode.hpp"
#include "FBlendDomain.hpp"
#include "UBlendableGlobalLightingVolumeFogDefaultsBase.hpp"
#include "UDataAsset.hpp"
#include "UExpHeightFogTransmuter.hpp"
UBlendableGlobalLightingVolumeFogDefaultsBase* UBlendableGlobalLightingVolumeFogDefaultsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlendableGlobalLightingVolumeFogDefaultsBase");
    return (UBlendableGlobalLightingVolumeFogDefaultsBase*)res;
}
