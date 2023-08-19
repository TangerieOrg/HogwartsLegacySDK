#include "ALight.hpp"
#include "APointLight.hpp"
#include "UFunction.hpp"
#include "UPointLightComponent.hpp"
APointLight* APointLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PointLight");
    return (APointLight*)res;
}
void APointLight::SetRadius(float NewRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PointLight.SetRadius"));
    struct Params_SetRadius {
        float NewRadius; // 0x0
    }; // Size: 0x4
    Params_SetRadius params{};
    params.NewRadius = (float)NewRadius;
    ProcessEvent(func, &params);
}
void APointLight::SetLightFalloffExponent(float NewLightFalloffExponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PointLight.SetLightFalloffExponent"));
    struct Params_SetLightFalloffExponent {
        float NewLightFalloffExponent; // 0x0
    }; // Size: 0x4
    Params_SetLightFalloffExponent params{};
    params.NewLightFalloffExponent = (float)NewLightFalloffExponent;
    ProcessEvent(func, &params);
}
