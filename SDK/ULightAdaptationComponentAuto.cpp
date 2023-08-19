#include "ULightAdaptationComponent.hpp"
#include "ULightAdaptationComponentAuto.hpp"
ULightAdaptationComponentAuto* ULightAdaptationComponentAuto::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.LightAdaptationComponentAuto");
    return (ULightAdaptationComponentAuto*)res;
}
