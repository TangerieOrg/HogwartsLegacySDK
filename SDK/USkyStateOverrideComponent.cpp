#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "USkyStateOverride.hpp"
#include "USkyStateOverrideComponent.hpp"
void USkyStateOverrideComponent::SetEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideComponent.SetEnabled"));
    struct Params_SetEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
USkyStateOverrideComponent* USkyStateOverrideComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.SkyStateOverrideComponent");
    return (USkyStateOverrideComponent*)res;
}
void USkyStateOverrideComponent::Valid(bool& bValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideComponent.Valid"));
    struct Params_Valid {
        bool bValid; // 0x0
    }; // Size: 0x1
    Params_Valid params{};
    params.bValid = (bool)bValid;
    ProcessEvent(func, &params);
    bValid = params.bValid;
}
void USkyStateOverrideComponent::SetLerpAlpha(float LerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideComponent.SetLerpAlpha"));
    struct Params_SetLerpAlpha {
        float LerpAlpha; // 0x0
    }; // Size: 0x4
    Params_SetLerpAlpha params{};
    params.LerpAlpha = (float)LerpAlpha;
    ProcessEvent(func, &params);
}
void USkyStateOverrideComponent::IsEnabled(bool& bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideComponent.IsEnabled"));
    struct Params_IsEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
    bEnable = params.bEnable;
}
void USkyStateOverrideComponent::HasLerpAlpha(bool& bHasLerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideComponent.HasLerpAlpha"));
    struct Params_HasLerpAlpha {
        bool bHasLerpAlpha; // 0x0
    }; // Size: 0x1
    Params_HasLerpAlpha params{};
    params.bHasLerpAlpha = (bool)bHasLerpAlpha;
    ProcessEvent(func, &params);
    bHasLerpAlpha = params.bHasLerpAlpha;
}
void USkyStateOverrideComponent::GetLerpAlpha(float& LerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideComponent.GetLerpAlpha"));
    struct Params_GetLerpAlpha {
        float LerpAlpha; // 0x0
    }; // Size: 0x4
    Params_GetLerpAlpha params{};
    params.LerpAlpha = (float)LerpAlpha;
    ProcessEvent(func, &params);
    LerpAlpha = params.LerpAlpha;
}
void USkyStateOverrideComponent::CanUseLerpAlpha(bool& bUseLerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideComponent.CanUseLerpAlpha"));
    struct Params_CanUseLerpAlpha {
        bool bUseLerpAlpha; // 0x0
    }; // Size: 0x1
    Params_CanUseLerpAlpha params{};
    params.bUseLerpAlpha = (bool)bUseLerpAlpha;
    ProcessEvent(func, &params);
    bUseLerpAlpha = params.bUseLerpAlpha;
}
void USkyStateOverrideComponent::DisableLerpAlpha() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideComponent.DisableLerpAlpha"));
    struct Params_DisableLerpAlpha {
    }; // Size: 0x0
    Params_DisableLerpAlpha params{};
    ProcessEvent(func, &params);
}
