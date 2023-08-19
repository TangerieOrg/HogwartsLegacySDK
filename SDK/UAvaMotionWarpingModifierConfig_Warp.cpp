#include "EMotionWarpRotationType.hpp"
#include "FAvaRootMotionWarper.hpp"
#include "UAnimSequenceBase.hpp"
#include "UAvaMotionWarpWindowFinder.hpp"
#include "UAvaMotionWarpingModifierConfig.hpp"
#include "UAvaMotionWarpingModifierConfig_Warp.hpp"
#include "UFunction.hpp"
void UAvaMotionWarpingModifierConfig_Warp::AddRootMotionModifierSimpleWarp(FAvaRootMotionWarper& InMotionWarper, UAvaMotionWarpWindowFinder* InWindowFinder, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InSyncPointName, bool bInWarpTranslation, bool bInDisallowHorizontalStretching, bool bInDisallowHorizontalSquishing, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.AvaMotionWarpingModifierConfig_Warp.AddRootMotionModifierSimpleWarp"));
    struct Params_AddRootMotionModifierSimpleWarp {
        FAvaRootMotionWarper InMotionWarper; // 0x0
        UAvaMotionWarpWindowFinder* InWindowFinder; // 0x78
        UAnimSequenceBase* InAnimation; // 0x80
        float InStartTime; // 0x88
        float InEndTime; // 0x8c
        FName InSyncPointName; // 0x90
        bool bInWarpTranslation; // 0x98
        bool bInDisallowHorizontalStretching; // 0x99
        bool bInDisallowHorizontalSquishing; // 0x9a
        bool bInIgnoreZAxis; // 0x9b
        bool bInWarpRotation; // 0x9c
        EMotionWarpRotationType InRotationType; // 0x9d
        char pad_9e[0x2];
        float InWarpRotationTimeMultiplier; // 0xa0
    }; // Size: 0xa4
    Params_AddRootMotionModifierSimpleWarp params{};
    params.InMotionWarper = (FAvaRootMotionWarper)InMotionWarper;
    params.InWindowFinder = (UAvaMotionWarpWindowFinder*)InWindowFinder;
    params.InAnimation = (UAnimSequenceBase*)InAnimation;
    params.InStartTime = (float)InStartTime;
    params.InEndTime = (float)InEndTime;
    params.InSyncPointName = (FName)InSyncPointName;
    params.bInWarpTranslation = (bool)bInWarpTranslation;
    params.bInDisallowHorizontalStretching = (bool)bInDisallowHorizontalStretching;
    params.bInDisallowHorizontalSquishing = (bool)bInDisallowHorizontalSquishing;
    params.bInIgnoreZAxis = (bool)bInIgnoreZAxis;
    params.bInWarpRotation = (bool)bInWarpRotation;
    params.InRotationType = (EMotionWarpRotationType)InRotationType;
    params.InWarpRotationTimeMultiplier = (float)InWarpRotationTimeMultiplier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMotionWarper = params.InMotionWarper;
}
UAvaMotionWarpingModifierConfig_Warp* UAvaMotionWarpingModifierConfig_Warp::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AvaMotionWarpingModifierConfig_Warp");
    return (UAvaMotionWarpingModifierConfig_Warp*)res;
}
