#include "UAblAbilityAnimNotifyEventScratchPad.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblAbilityEventScratchPad.hpp"
#include "UAnimationAsset.hpp"
#include "UFunction.hpp"
UAblAbilityAnimNotifyEventScratchPad* UAblAbilityAnimNotifyEventScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityAnimNotifyEventScratchPad");
    return (UAblAbilityAnimNotifyEventScratchPad*)res;
}
void UAblAbilityAnimNotifyEventScratchPad::OnAnimationPlayed(float InCurrentTime, UAnimationAsset* InAnimationAsset, UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityAnimNotifyEventScratchPad.OnAnimationPlayed"));
    struct Params_OnAnimationPlayed {
        float InCurrentTime; // 0x0
        char pad_4[0x4];
        UAnimationAsset* InAnimationAsset; // 0x8
        UAblAbilityContext* Context; // 0x10
    }; // Size: 0x18
    Params_OnAnimationPlayed params{};
    params.InCurrentTime = (float)InCurrentTime;
    params.InAnimationAsset = (UAnimationAsset*)InAnimationAsset;
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
