#include "UAblAbilityBaseScratchPad.hpp"
#include "UAblAbilityEventScratchPad.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAblAbilityEventScratchPad* UAblAbilityEventScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityEventScratchPad");
    return (UAblAbilityEventScratchPad*)res;
}
void UAblAbilityEventScratchPad::EventReceived(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityEventScratchPad.EventReceived"));
    struct Params_EventReceived {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_EventReceived params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
