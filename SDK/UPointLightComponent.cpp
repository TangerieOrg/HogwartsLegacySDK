#include "UFunction.hpp"
#include "ULocalLightComponent.hpp"
#include "UPointLightComponent.hpp"
void UPointLightComponent::SetSoftSourceRadius(float bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PointLightComponent.SetSoftSourceRadius"));
    struct Params_SetSoftSourceRadius {
        float bNewValue; // 0x0
    }; // Size: 0x4
    Params_SetSoftSourceRadius params{};
    params.bNewValue = (float)bNewValue;
    ProcessEvent(func, &params);
}
UPointLightComponent* UPointLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PointLightComponent");
    return (UPointLightComponent*)res;
}
void UPointLightComponent::SetSourceRadius(float bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PointLightComponent.SetSourceRadius"));
    struct Params_SetSourceRadius {
        float bNewValue; // 0x0
    }; // Size: 0x4
    Params_SetSourceRadius params{};
    params.bNewValue = (float)bNewValue;
    ProcessEvent(func, &params);
}
void UPointLightComponent::SetSourceLength(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PointLightComponent.SetSourceLength"));
    struct Params_SetSourceLength {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetSourceLength params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UPointLightComponent::SetLightFalloffExponent(float NewLightFalloffExponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PointLightComponent.SetLightFalloffExponent"));
    struct Params_SetLightFalloffExponent {
        float NewLightFalloffExponent; // 0x0
    }; // Size: 0x4
    Params_SetLightFalloffExponent params{};
    params.NewLightFalloffExponent = (float)NewLightFalloffExponent;
    ProcessEvent(func, &params);
}
