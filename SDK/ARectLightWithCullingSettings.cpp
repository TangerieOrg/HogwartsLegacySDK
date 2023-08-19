#include "ALight.hpp"
#include "ARectLightWithCullingSettings.hpp"
#include "UFunction.hpp"
#include "URectLightComponentWithCullingSettings.hpp"
void ARectLightWithCullingSettings::Copy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.RectLightWithCullingSettings.Copy"));
    struct Params_Copy {
    }; // Size: 0x0
    Params_Copy params{};
    ProcessEvent(func, &params);
}
ARectLightWithCullingSettings* ARectLightWithCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.RectLightWithCullingSettings");
    return (ARectLightWithCullingSettings*)res;
}
