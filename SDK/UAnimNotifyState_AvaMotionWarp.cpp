#include "FAvaRootMotionWarper.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_AvaMotionWarp.hpp"
#include "UAnimSequenceBase.hpp"
#include "UAvaMotionWarpWindowFinder.hpp"
#include "UAvaMotionWarpingModifierConfig.hpp"
#include "UFunction.hpp"
UAnimNotifyState_AvaMotionWarp* UAnimNotifyState_AvaMotionWarp::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AnimNotifyState_AvaMotionWarp");
    return (UAnimNotifyState_AvaMotionWarp*)res;
}
void UAnimNotifyState_AvaMotionWarp::AddMotionWarpModifier(FAvaRootMotionWarper& InMotionWarper, UAvaMotionWarpWindowFinder* InWindowFinder, UAnimSequenceBase* InAnimation, float StartTime, float EndTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.AnimNotifyState_AvaMotionWarp.AddMotionWarpModifier"));
    struct Params_AddMotionWarpModifier {
        FAvaRootMotionWarper InMotionWarper; // 0x0
        UAvaMotionWarpWindowFinder* InWindowFinder; // 0x78
        UAnimSequenceBase* InAnimation; // 0x80
        float StartTime; // 0x88
        float EndTime; // 0x8c
    }; // Size: 0x90
    Params_AddMotionWarpModifier params{};
    params.InMotionWarper = (FAvaRootMotionWarper)InMotionWarper;
    params.InWindowFinder = (UAvaMotionWarpWindowFinder*)InWindowFinder;
    params.InAnimation = (UAnimSequenceBase*)InAnimation;
    params.StartTime = (float)StartTime;
    params.EndTime = (float)EndTime;
    ProcessEvent(func, &params);
    InMotionWarper = params.InMotionWarper;
}
