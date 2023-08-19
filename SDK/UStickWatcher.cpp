#include "FVector2D.hpp"
#include "UBaseWatcher.hpp"
#include "UFunction.hpp"
#include "UStickWatcher.hpp"
UStickWatcher* UStickWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.StickWatcher");
    return (UStickWatcher*)res;
}
void UStickWatcher::StickY(float AxisVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.StickWatcher.StickY"));
    struct Params_StickY {
        float AxisVal; // 0x0
    }; // Size: 0x4
    Params_StickY params{};
    params.AxisVal = (float)AxisVal;
    ProcessEvent(func, &params);
}
void UStickWatcher::StickX(float AxisVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.StickWatcher.StickX"));
    struct Params_StickX {
        float AxisVal; // 0x0
    }; // Size: 0x4
    Params_StickX params{};
    params.AxisVal = (float)AxisVal;
    ProcessEvent(func, &params);
}
FVector2D UStickWatcher::GetInputAxes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.StickWatcher.GetInputAxes"));
    struct Params_GetInputAxes {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInputAxes params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UStickWatcher::ActionStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.StickWatcher.ActionStop"));
    struct Params_ActionStop {
    }; // Size: 0x0
    Params_ActionStop params{};
    ProcessEvent(func, &params);
}
void UStickWatcher::ActionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.StickWatcher.ActionStart"));
    struct Params_ActionStart {
    }; // Size: 0x0
    Params_ActionStart params{};
    ProcessEvent(func, &params);
}
void UStickWatcher::ActionCancel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.StickWatcher.ActionCancel"));
    struct Params_ActionCancel {
    }; // Size: 0x0
    Params_ActionCancel params{};
    ProcessEvent(func, &params);
}
