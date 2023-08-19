#include "UAblAbilityContext.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCustomEventListenerScratchpad.hpp"
#include "UFunction.hpp"
UAblCustomEventListenerScratchpad* UAblCustomEventListenerScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomEventListenerScratchpad");
    return (UAblCustomEventListenerScratchpad*)res;
}
void UAblCustomEventListenerScratchpad::OnCustomEvent(UAblAbilityContext* Context, UAblAbilityContext* CallerContext, FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomEventListenerScratchpad.OnCustomEvent"));
    struct Params_OnCustomEvent {
        UAblAbilityContext* Context; // 0x0
        UAblAbilityContext* CallerContext; // 0x8
        FName EventName; // 0x10
    }; // Size: 0x18
    Params_OnCustomEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.CallerContext = (UAblAbilityContext*)CallerContext;
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
}
