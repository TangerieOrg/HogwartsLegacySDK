#include "FLightCullingPerLightSettings.hpp"
#include "USpotLightComponent.hpp"
#include "USpotLightComponentWithCullingSettings.hpp"
USpotLightComponentWithCullingSettings* USpotLightComponentWithCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.SpotLightComponentWithCullingSettings");
    return (USpotLightComponentWithCullingSettings*)res;
}
