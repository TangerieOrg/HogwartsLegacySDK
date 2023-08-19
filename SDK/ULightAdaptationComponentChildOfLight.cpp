#include "ULightAdaptationComponent.hpp"
#include "ULightAdaptationComponentChildOfLight.hpp"
ULightAdaptationComponentChildOfLight* ULightAdaptationComponentChildOfLight::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.LightAdaptationComponentChildOfLight");
    return (ULightAdaptationComponentChildOfLight*)res;
}
