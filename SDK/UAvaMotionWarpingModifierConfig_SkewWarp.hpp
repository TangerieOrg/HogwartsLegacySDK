#pragma once
#include <cstdint>
#include "EMotionWarpRotationType.hpp"
#include "UAvaMotionWarpingModifierConfig_Warp.hpp"
struct FAvaRootMotionWarper;
class UAvaMotionWarpWindowFinder;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAvaMotionWarpingModifierConfig_SkewWarp : public UAvaMotionWarpingModifierConfig_Warp {
public:
    static UAvaMotionWarpingModifierConfig_SkewWarp* StaticClass();
    static void AddMotionWarpingModifierSkewWarp(FAvaRootMotionWarper& InMotionWarper, UAvaMotionWarpWindowFinder* InWindowFinder, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
}; // Size: 0x40
#pragma pack(pop)
