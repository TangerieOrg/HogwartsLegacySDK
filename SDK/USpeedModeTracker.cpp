#include "ETargetSpeedMode\Type.hpp"
#include "ETargetSpeedPriority\Type.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USpeedModeTracker.hpp"
USpeedModeTracker* USpeedModeTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.SpeedModeTracker");
    return (USpeedModeTracker*)res;
}
void USpeedModeTracker::SetTargetSpeedMode(ETargetSpeedMode::Type InSpeedMode, ETargetSpeedPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.SpeedModeTracker.SetTargetSpeedMode"));
    struct Params_SetTargetSpeedMode {
        ETargetSpeedMode::Type InSpeedMode; // 0x0
        ETargetSpeedPriority::Type InPriority; // 0x1
        bool bBroadcastChange; // 0x2
    }; // Size: 0x3
    Params_SetTargetSpeedMode params{};
    params.InSpeedMode = (ETargetSpeedMode::Type)InSpeedMode;
    params.InPriority = (ETargetSpeedPriority::Type)InPriority;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
void USpeedModeTracker::SetBaseTargetSpeedMode(ETargetSpeedMode::Type InSpeedMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.SpeedModeTracker.SetBaseTargetSpeedMode"));
    struct Params_SetBaseTargetSpeedMode {
        ETargetSpeedMode::Type InSpeedMode; // 0x0
    }; // Size: 0x1
    Params_SetBaseTargetSpeedMode params{};
    params.InSpeedMode = (ETargetSpeedMode::Type)InSpeedMode;
    ProcessEvent(func, &params);
}
void USpeedModeTracker::ClearTargetSpeedMode(ETargetSpeedPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.SpeedModeTracker.ClearTargetSpeedMode"));
    struct Params_ClearTargetSpeedMode {
        ETargetSpeedPriority::Type InPriority; // 0x0
        bool bBroadcastChange; // 0x1
    }; // Size: 0x2
    Params_ClearTargetSpeedMode params{};
    params.InPriority = (ETargetSpeedPriority::Type)InPriority;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
ETargetSpeedMode::Type USpeedModeTracker::GetTargetSpeedMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.SpeedModeTracker.GetTargetSpeedMode"));
    struct Params_GetTargetSpeedMode {
        ETargetSpeedMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTargetSpeedMode params{};
    ProcessEvent(func, &params);
    return (ETargetSpeedMode::Type)params.ReturnValue;
}
ETargetSpeedMode::Type USpeedModeTracker::GetBaseTargetSpeedMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.SpeedModeTracker.GetBaseTargetSpeedMode"));
    struct Params_GetBaseTargetSpeedMode {
        ETargetSpeedMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBaseTargetSpeedMode params{};
    ProcessEvent(func, &params);
    return (ETargetSpeedMode::Type)params.ReturnValue;
}
