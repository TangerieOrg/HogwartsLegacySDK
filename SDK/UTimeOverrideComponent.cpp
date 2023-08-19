#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UTimeOverrideBase.hpp"
#include "UTimeOverrideComponent.hpp"
UTimeOverrideComponent* UTimeOverrideComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeOverrideComponent");
    return (UTimeOverrideComponent*)res;
}
void UTimeOverrideComponent::DisableLerpAlpha() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideComponent.DisableLerpAlpha"));
    struct Params_DisableLerpAlpha {
    }; // Size: 0x0
    Params_DisableLerpAlpha params{};
    ProcessEvent(func, &params);
}
void UTimeOverrideComponent::Valid(bool& bValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideComponent.Valid"));
    struct Params_Valid {
        bool bValid; // 0x0
    }; // Size: 0x1
    Params_Valid params{};
    params.bValid = (bool)bValid;
    ProcessEvent(func, &params);
    bValid = params.bValid;
}
void UTimeOverrideComponent::SetLerpAlpha(float LerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideComponent.SetLerpAlpha"));
    struct Params_SetLerpAlpha {
        float LerpAlpha; // 0x0
    }; // Size: 0x4
    Params_SetLerpAlpha params{};
    params.LerpAlpha = (float)LerpAlpha;
    ProcessEvent(func, &params);
}
void UTimeOverrideComponent::SetEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideComponent.SetEnabled"));
    struct Params_SetEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UTimeOverrideComponent::IsEnabled(bool& bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideComponent.IsEnabled"));
    struct Params_IsEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
    bEnable = params.bEnable;
}
void UTimeOverrideComponent::HasLerpAlpha(bool& bHasLerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideComponent.HasLerpAlpha"));
    struct Params_HasLerpAlpha {
        bool bHasLerpAlpha; // 0x0
    }; // Size: 0x1
    Params_HasLerpAlpha params{};
    params.bHasLerpAlpha = (bool)bHasLerpAlpha;
    ProcessEvent(func, &params);
    bHasLerpAlpha = params.bHasLerpAlpha;
}
void UTimeOverrideComponent::GetLerpAlpha(float& LerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideComponent.GetLerpAlpha"));
    struct Params_GetLerpAlpha {
        float LerpAlpha; // 0x0
    }; // Size: 0x4
    Params_GetLerpAlpha params{};
    params.LerpAlpha = (float)LerpAlpha;
    ProcessEvent(func, &params);
    LerpAlpha = params.LerpAlpha;
}
void UTimeOverrideComponent::CanUseLerpAlpha(bool& bUseLerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeOverrideComponent.CanUseLerpAlpha"));
    struct Params_CanUseLerpAlpha {
        bool bUseLerpAlpha; // 0x0
    }; // Size: 0x1
    Params_CanUseLerpAlpha params{};
    params.bUseLerpAlpha = (bool)bUseLerpAlpha;
    ProcessEvent(func, &params);
    bUseLerpAlpha = params.bUseLerpAlpha;
}
