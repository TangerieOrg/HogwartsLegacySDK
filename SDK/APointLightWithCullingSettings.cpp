#include "ALight.hpp"
#include "APointLightWithCullingSettings.hpp"
#include "UFunction.hpp"
#include "UPointLightComponentWithCullingSettings.hpp"
APointLightWithCullingSettings* APointLightWithCullingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.PointLightWithCullingSettings");
    return (APointLightWithCullingSettings*)res;
}
void APointLightWithCullingSettings::Copy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.PointLightWithCullingSettings.Copy"));
    struct Params_Copy {
    }; // Size: 0x0
    Params_Copy params{};
    ProcessEvent(func, &params);
}
