#include "AGlobalLightingMaster.hpp"
#include "AGlobalLightingMasterWithClouds.hpp"
#include "URenderSettingsBlendDomainAsset.hpp"
#include "UVolumetricCloudsComponent.hpp"
AGlobalLightingMasterWithClouds* AGlobalLightingMasterWithClouds::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingMasterWithClouds");
    return (AGlobalLightingMasterWithClouds*)res;
}
