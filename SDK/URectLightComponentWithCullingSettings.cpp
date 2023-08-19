#include "FLightCullingPerLightSettings.hpp"
#include "URectLightComponent.hpp"
#include "URectLightComponentWithCullingSettings.hpp"
URectLightComponentWithCullingSettings* URectLightComponentWithCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.RectLightComponentWithCullingSettings");
    return (URectLightComponentWithCullingSettings*)res;
}
