#include "EMotionWarpRotationType.hpp"
#include "FAvaRootMotionWarper.hpp"
#include "UAnimSequenceBase.hpp"
#include "UAvaMotionWarpWindowFinder.hpp"
#include "UAvaMotionWarpingModifierConfig_SkewWarp.hpp"
#include "UAvaMotionWarpingModifierConfig_Warp.hpp"
#include "UFunction.hpp"
UAvaMotionWarpingModifierConfig_SkewWarp* UAvaMotionWarpingModifierConfig_SkewWarp::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AvaMotionWarpingModifierConfig_SkewWarp");
    return (UAvaMotionWarpingModifierConfig_SkewWarp*)res;
}
void UAvaMotionWarpingModifierConfig_SkewWarp::AddMotionWarpingModifierSkewWarp(FAvaRootMotionWarper& InMotionWarper, UAvaMotionWarpWindowFinder* InWindowFinder, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.AvaMotionWarpingModifierConfig_SkewWarp.AddMotionWarpingModifierSkewWarp"));
    struct Params_AddMotionWarpingModifierSkewWarp {
        FAvaRootMotionWarper InMotionWarper; // 0x0
        UAvaMotionWarpWindowFinder* InWindowFinder; // 0x78
        UAnimSequenceBase* InAnimation; // 0x80
        float InStartTime; // 0x88
        float InEndTime; // 0x8c
        FName InSyncPointName; // 0x90
        bool bInWarpTranslation; // 0x98
        bool bInIgnoreZAxis; // 0x99
        bool bInWarpRotation; // 0x9a
        EMotionWarpRotationType InRotationType; // 0x9b
        float InWarpRotationTimeMultiplier; // 0x9c
    }; // Size: 0xa0
    Params_AddMotionWarpingModifierSkewWarp params{};
    params.InMotionWarper = (FAvaRootMotionWarper)InMotionWarper;
    params.InWindowFinder = (UAvaMotionWarpWindowFinder*)InWindowFinder;
    params.InAnimation = (UAnimSequenceBase*)InAnimation;
    params.InStartTime = (float)InStartTime;
    params.InEndTime = (float)InEndTime;
    params.InSyncPointName = (FName)InSyncPointName;
    params.bInWarpTranslation = (bool)bInWarpTranslation;
    params.bInIgnoreZAxis = (bool)bInIgnoreZAxis;
    params.bInWarpRotation = (bool)bInWarpRotation;
    params.InRotationType = (EMotionWarpRotationType)InRotationType;
    params.InWarpRotationTimeMultiplier = (float)InWarpRotationTimeMultiplier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMotionWarper = params.InMotionWarper;
}
