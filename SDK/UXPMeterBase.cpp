#include "FExperienceChange.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UXPMeterBase.hpp"
UXPMeterBase* UXPMeterBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.XPMeterBase");
    return (UXPMeterBase*)res;
}
void UXPMeterBase::StartAddingXP(float FillDuration, float StartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.XPMeterBase.StartAddingXP"));
    struct Params_StartAddingXP {
        float FillDuration; // 0x0
        float StartTime; // 0x4
    }; // Size: 0x8
    Params_StartAddingXP params{};
    params.FillDuration = (float)FillDuration;
    params.StartTime = (float)StartTime;
    ProcessEvent(func, &params);
}
void UXPMeterBase::RemoveFromNotificationQueue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.XPMeterBase.RemoveFromNotificationQueue"));
    struct Params_RemoveFromNotificationQueue {
    }; // Size: 0x0
    Params_RemoveFromNotificationQueue params{};
    ProcessEvent(func, &params);
}
bool UXPMeterBase::TryStackNotification(FExperienceChange XPChangeData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.XPMeterBase.TryStackNotification"));
    struct Params_TryStackNotification {
        FExperienceChange XPChangeData; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_TryStackNotification params{};
    params.XPChangeData = (FExperienceChange)XPChangeData;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UXPMeterBase::OnXPAdded(float FillPct) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.XPMeterBase.OnXPAdded"));
    struct Params_OnXPAdded {
        float FillPct; // 0x0
    }; // Size: 0x4
    Params_OnXPAdded params{};
    params.FillPct = (float)FillPct;
    ProcessEvent(func, &params);
}
void UXPMeterBase::OnXPFillWrap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.XPMeterBase.OnXPFillWrap"));
    struct Params_OnXPFillWrap {
    }; // Size: 0x0
    Params_OnXPFillWrap params{};
    ProcessEvent(func, &params);
}
void UXPMeterBase::OnStartAddingXP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.XPMeterBase.OnStartAddingXP"));
    struct Params_OnStartAddingXP {
    }; // Size: 0x0
    Params_OnStartAddingXP params{};
    ProcessEvent(func, &params);
}
void UXPMeterBase::OnFinishAddingXP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.XPMeterBase.OnFinishAddingXP"));
    struct Params_OnFinishAddingXP {
    }; // Size: 0x0
    Params_OnFinishAddingXP params{};
    ProcessEvent(func, &params);
}
void UXPMeterBase::AddXP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.XPMeterBase.AddXP"));
    struct Params_AddXP {
    }; // Size: 0x0
    Params_AddXP params{};
    ProcessEvent(func, &params);
}
