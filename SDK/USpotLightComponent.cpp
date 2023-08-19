#include "UFunction.hpp"
#include "UPointLightComponent.hpp"
#include "USpotLightComponent.hpp"
USpotLightComponent* USpotLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SpotLightComponent");
    return (USpotLightComponent*)res;
}
void USpotLightComponent::SetOuterConeAngle(float NewOuterConeAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SpotLightComponent.SetOuterConeAngle"));
    struct Params_SetOuterConeAngle {
        float NewOuterConeAngle; // 0x0
    }; // Size: 0x4
    Params_SetOuterConeAngle params{};
    params.NewOuterConeAngle = (float)NewOuterConeAngle;
    ProcessEvent(func, &params);
}
void USpotLightComponent::SetInnerConeAngle(float NewInnerConeAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SpotLightComponent.SetInnerConeAngle"));
    struct Params_SetInnerConeAngle {
        float NewInnerConeAngle; // 0x0
    }; // Size: 0x4
    Params_SetInnerConeAngle params{};
    params.NewInnerConeAngle = (float)NewInnerConeAngle;
    ProcessEvent(func, &params);
}
