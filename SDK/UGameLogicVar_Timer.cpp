#include "UFunction.hpp"
#include "UGameLogicBoolBase.hpp"
#include "UGameLogicVar_Timer.hpp"
UGameLogicVar_Timer* UGameLogicVar_Timer::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicVar_Timer");
    return (UGameLogicVar_Timer*)res;
}
float UGameLogicVar_Timer::GetTimerValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Timer.GetTimerValue"));
    struct Params_GetTimerValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTimerValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UGameLogicVar_Timer::SetTimerPause(bool bInPaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Timer.SetTimerPause"));
    struct Params_SetTimerPause {
        bool bInPaused; // 0x0
    }; // Size: 0x1
    Params_SetTimerPause params{};
    params.bInPaused = (bool)bInPaused;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Timer::SetTimerValue(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Timer.SetTimerValue"));
    struct Params_SetTimerValue {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetTimerValue params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Timer::TimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Timer.TimerExpired"));
    struct Params_TimerExpired {
    }; // Size: 0x0
    Params_TimerExpired params{};
    ProcessEvent(func, &params);
}
void UGameLogicVar_Timer::SetCachedValue(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Timer.SetCachedValue"));
    struct Params_SetCachedValue {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetCachedValue params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
bool UGameLogicVar_Timer::IsTimerPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Timer.IsTimerPaused"));
    struct Params_IsTimerPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTimerPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
