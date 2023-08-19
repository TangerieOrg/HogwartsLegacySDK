#include "UButtonWatcher.hpp"
#include "UFunction.hpp"
#include "UTimedButtonWatcher.hpp"
UTimedButtonWatcher* UTimedButtonWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.TimedButtonWatcher");
    return (UTimedButtonWatcher*)res;
}
void UTimedButtonWatcher::SetChargeTime(float InChargeTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.TimedButtonWatcher.SetChargeTime"));
    struct Params_SetChargeTime {
        float InChargeTime; // 0x0
    }; // Size: 0x4
    Params_SetChargeTime params{};
    params.InChargeTime = (float)InChargeTime;
    ProcessEvent(func, &params);
}
float UTimedButtonWatcher::RestoreChargeTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.TimedButtonWatcher.RestoreChargeTime"));
    struct Params_RestoreChargeTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_RestoreChargeTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UTimedButtonWatcher::ActionStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.TimedButtonWatcher.ActionStop"));
    struct Params_ActionStop {
    }; // Size: 0x0
    Params_ActionStop params{};
    ProcessEvent(func, &params);
}
