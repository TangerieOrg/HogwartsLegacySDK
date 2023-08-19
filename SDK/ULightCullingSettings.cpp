#include "ELightCullingDistanceOverride.hpp"
#include "FLightCullingCameraSetup.hpp"
#include "UDataAsset.hpp"
#include "ULightCullingSettings.hpp"
ULightCullingSettings* ULightCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.LightCullingSettings");
    return (ULightCullingSettings*)res;
}
