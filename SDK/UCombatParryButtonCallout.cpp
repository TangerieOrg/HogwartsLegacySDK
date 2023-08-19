#include "ECombatParryType.hpp"
#include "UCombatParryButtonCallout.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
UCombatParryButtonCallout* UCombatParryButtonCallout::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CombatParryButtonCallout");
    return (UCombatParryButtonCallout*)res;
}
void UCombatParryButtonCallout::SetPerfectTimingState(bool bPerfectTiming) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatParryButtonCallout.SetPerfectTimingState"));
    struct Params_SetPerfectTimingState {
        bool bPerfectTiming; // 0x0
    }; // Size: 0x1
    Params_SetPerfectTimingState params{};
    params.bPerfectTiming = (bool)bPerfectTiming;
    ProcessEvent(func, &params);
}
void UCombatParryButtonCallout::SetParryType(ECombatParryType ParryType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatParryButtonCallout.SetParryType"));
    struct Params_SetParryType {
        ECombatParryType ParryType; // 0x0
    }; // Size: 0x1
    Params_SetParryType params{};
    params.ParryType = (ECombatParryType)ParryType;
    ProcessEvent(func, &params);
}
void UCombatParryButtonCallout::SetExpectedLifetime(float LifeTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatParryButtonCallout.SetExpectedLifetime"));
    struct Params_SetExpectedLifetime {
        float LifeTime; // 0x0
    }; // Size: 0x4
    Params_SetExpectedLifetime params{};
    params.LifeTime = (float)LifeTime;
    ProcessEvent(func, &params);
}
void UCombatParryButtonCallout::OnInputDeviceChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatParryButtonCallout.OnInputDeviceChanged"));
    struct Params_OnInputDeviceChanged {
    }; // Size: 0x0
    Params_OnInputDeviceChanged params{};
    ProcessEvent(func, &params);
}
void UCombatParryButtonCallout::BlueprintSetPerfectTimingState(bool bPerfectTiming) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatParryButtonCallout.BlueprintSetPerfectTimingState"));
    struct Params_BlueprintSetPerfectTimingState {
        bool bPerfectTiming; // 0x0
    }; // Size: 0x1
    Params_BlueprintSetPerfectTimingState params{};
    params.bPerfectTiming = (bool)bPerfectTiming;
    ProcessEvent(func, &params);
}
void UCombatParryButtonCallout::BlueprintSetParryType(ECombatParryType ParryType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatParryButtonCallout.BlueprintSetParryType"));
    struct Params_BlueprintSetParryType {
        ECombatParryType ParryType; // 0x0
    }; // Size: 0x1
    Params_BlueprintSetParryType params{};
    params.ParryType = (ECombatParryType)ParryType;
    ProcessEvent(func, &params);
}
