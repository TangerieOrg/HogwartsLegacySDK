#include "UFunction.hpp"
#include "ULocalLightComponent.hpp"
#include "URectLightComponent.hpp"
#include "UTexture.hpp"
URectLightComponent* URectLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RectLightComponent");
    return (URectLightComponent*)res;
}
void URectLightComponent::SetSourceWidth(float bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RectLightComponent.SetSourceWidth"));
    struct Params_SetSourceWidth {
        float bNewValue; // 0x0
    }; // Size: 0x4
    Params_SetSourceWidth params{};
    params.bNewValue = (float)bNewValue;
    ProcessEvent(func, &params);
}
void URectLightComponent::SetSourceTexture(UTexture* bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RectLightComponent.SetSourceTexture"));
    struct Params_SetSourceTexture {
        UTexture* bNewValue; // 0x0
    }; // Size: 0x8
    Params_SetSourceTexture params{};
    params.bNewValue = (UTexture*)bNewValue;
    ProcessEvent(func, &params);
}
void URectLightComponent::SetSourceHeight(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RectLightComponent.SetSourceHeight"));
    struct Params_SetSourceHeight {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetSourceHeight params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void URectLightComponent::SetBarnDoorLength(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RectLightComponent.SetBarnDoorLength"));
    struct Params_SetBarnDoorLength {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetBarnDoorLength params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void URectLightComponent::SetBarnDoorAngle(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RectLightComponent.SetBarnDoorAngle"));
    struct Params_SetBarnDoorAngle {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetBarnDoorAngle params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
