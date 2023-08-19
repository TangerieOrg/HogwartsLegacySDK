#include "FLightCullingPerLightSettings.hpp"
#include "UPointLightComponent.hpp"
#include "UPointLightComponentWithCullingSettings.hpp"
UPointLightComponentWithCullingSettings* UPointLightComponentWithCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.PointLightComponentWithCullingSettings");
    return (UPointLightComponentWithCullingSettings*)res;
}
