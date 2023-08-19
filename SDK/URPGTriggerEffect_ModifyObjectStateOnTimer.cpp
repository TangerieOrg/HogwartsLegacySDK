#include "UFunction.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ModifyObjectStateOnTimer.hpp"
URPGTriggerEffect_ModifyObjectStateOnTimer* URPGTriggerEffect_ModifyObjectStateOnTimer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ModifyObjectStateOnTimer");
    return (URPGTriggerEffect_ModifyObjectStateOnTimer*)res;
}
void URPGTriggerEffect_ModifyObjectStateOnTimer::OnTimerTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGTriggerEffect_ModifyObjectStateOnTimer.OnTimerTick"));
    struct Params_OnTimerTick {
    }; // Size: 0x0
    Params_OnTimerTick params{};
    ProcessEvent(func, &params);
}
