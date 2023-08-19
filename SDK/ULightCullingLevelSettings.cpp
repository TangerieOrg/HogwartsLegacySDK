#include "FLightCullingLevelName.hpp"
#include "FLightCullingPerLevelSettings.hpp"
#include "FSimpleBlobShadowDecalComponentMapper.hpp"
#include "UDataAsset.hpp"
#include "ULightCullingLevelSettings.hpp"
#include "ULightCullingSettings.hpp"
ULightCullingLevelSettings* ULightCullingLevelSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.LightCullingLevelSettings");
    return (ULightCullingLevelSettings*)res;
}
