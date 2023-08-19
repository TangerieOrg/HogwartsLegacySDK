#include "ALight.hpp"
#include "ASpotLight.hpp"
#include "UFunction.hpp"
#include "USpotLightComponent.hpp"
ASpotLight* ASpotLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SpotLight");
    return (ASpotLight*)res;
}
void ASpotLight::SetOuterConeAngle(float NewOuterConeAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SpotLight.SetOuterConeAngle"));
    struct Params_SetOuterConeAngle {
        float NewOuterConeAngle; // 0x0
    }; // Size: 0x4
    Params_SetOuterConeAngle params{};
    params.NewOuterConeAngle = (float)NewOuterConeAngle;
    ProcessEvent(func, &params);
}
void ASpotLight::SetInnerConeAngle(float NewInnerConeAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SpotLight.SetInnerConeAngle"));
    struct Params_SetInnerConeAngle {
        float NewInnerConeAngle; // 0x0
    }; // Size: 0x4
    Params_SetInnerConeAngle params{};
    params.NewInnerConeAngle = (float)NewInnerConeAngle;
    ProcessEvent(func, &params);
}
