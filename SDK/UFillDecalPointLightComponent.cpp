#include "UFadeToDecalPointLightComponent.hpp"
#include "UFillDecalPointLightComponent.hpp"
#include "UFunction.hpp"
UFillDecalPointLightComponent* UFillDecalPointLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FillDecalPointLightComponent");
    return (UFillDecalPointLightComponent*)res;
}
void UFillDecalPointLightComponent::SetRadii(float NewInnerCutoutRadius, float NewOuterCutoutRadius, float NewFullRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FillDecalPointLightComponent.SetRadii"));
    struct Params_SetRadii {
        float NewInnerCutoutRadius; // 0x0
        float NewOuterCutoutRadius; // 0x4
        float NewFullRadius; // 0x8
    }; // Size: 0xc
    Params_SetRadii params{};
    params.NewInnerCutoutRadius = (float)NewInnerCutoutRadius;
    params.NewOuterCutoutRadius = (float)NewOuterCutoutRadius;
    params.NewFullRadius = (float)NewFullRadius;
    ProcessEvent(func, &params);
}
void UFillDecalPointLightComponent::SetOuterCutoutRadius(float NewOuterCutoutRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FillDecalPointLightComponent.SetOuterCutoutRadius"));
    struct Params_SetOuterCutoutRadius {
        float NewOuterCutoutRadius; // 0x0
    }; // Size: 0x4
    Params_SetOuterCutoutRadius params{};
    params.NewOuterCutoutRadius = (float)NewOuterCutoutRadius;
    ProcessEvent(func, &params);
}
void UFillDecalPointLightComponent::SetIntensityMultiplier(float NewIntensityMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FillDecalPointLightComponent.SetIntensityMultiplier"));
    struct Params_SetIntensityMultiplier {
        float NewIntensityMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetIntensityMultiplier params{};
    params.NewIntensityMultiplier = (float)NewIntensityMultiplier;
    ProcessEvent(func, &params);
}
void UFillDecalPointLightComponent::SetInnerCutoutRadius(float NewInnerCutoutRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FillDecalPointLightComponent.SetInnerCutoutRadius"));
    struct Params_SetInnerCutoutRadius {
        float NewInnerCutoutRadius; // 0x0
    }; // Size: 0x4
    Params_SetInnerCutoutRadius params{};
    params.NewInnerCutoutRadius = (float)NewInnerCutoutRadius;
    ProcessEvent(func, &params);
}
void UFillDecalPointLightComponent::SetFullRadius(float NewFullRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FillDecalPointLightComponent.SetFullRadius"));
    struct Params_SetFullRadius {
        float NewFullRadius; // 0x0
    }; // Size: 0x4
    Params_SetFullRadius params{};
    params.NewFullRadius = (float)NewFullRadius;
    ProcessEvent(func, &params);
}
