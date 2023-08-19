#include "ALight.hpp"
#include "ASpotLightWithCullingSettings.hpp"
#include "UFunction.hpp"
#include "USpotLightComponentWithCullingSettings.hpp"
ASpotLightWithCullingSettings* ASpotLightWithCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.SpotLightWithCullingSettings");
    return (ASpotLightWithCullingSettings*)res;
}
void ASpotLightWithCullingSettings::Copy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.SpotLightWithCullingSettings.Copy"));
    struct Params_Copy {
    }; // Size: 0x0
    Params_Copy params{};
    ProcessEvent(func, &params);
}
