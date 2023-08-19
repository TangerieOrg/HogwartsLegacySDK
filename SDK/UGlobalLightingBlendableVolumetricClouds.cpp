#include "EGlobalLightingBlendableInputType.hpp"
#include "UCloudLightingParams.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableVolumetricClouds.hpp"
UGlobalLightingBlendableVolumetricClouds* UGlobalLightingBlendableVolumetricClouds::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableVolumetricClouds");
    return (UGlobalLightingBlendableVolumetricClouds*)res;
}
