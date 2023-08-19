#include "FKey.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblBranchTaskScratchPad.hpp"
#include "UAnimationAsset.hpp"
#include "UFunction.hpp"
UAblBranchTaskScratchPad* UAblBranchTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBranchTaskScratchPad");
    return (UAblBranchTaskScratchPad*)res;
}
void UAblBranchTaskScratchPad::OnAnimationPlayed(float InCurrentTime, UAnimationAsset* InAnimationAsset, UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblBranchTaskScratchPad.OnAnimationPlayed"));
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
