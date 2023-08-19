#pragma once
#include <cstdint>
#include "EMotionWarpRotationType.hpp"
#include "UAvaMotionWarpingModifierConfig.hpp"
struct FAvaRootMotionWarper;
class UAvaMotionWarpWindowFinder;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAvaMotionWarpingModifierConfig_Warp : public UAvaMotionWarpingModifierConfig {
public:
    FName SyncPointName; // 0x28
    bool bWarpTranslation; // 0x30
    bool bDisallowHorizontalStretching; // 0x31
    bool bDisallowHorizontalSquishing; // 0x32
    bool bIgnoreZAxis; // 0x33
    bool bWarpRotation; // 0x34
    EMotionWarpRotationType RotationType; // 0x35
    char pad_36[0x2];
    float WarpRotationTimeMultiplier; // 0x38
    char pad_3c[0x4];
    static UAvaMotionWarpingModifierConfig_Warp* StaticClass();
    static void AddRootMotionModifierSimpleWarp(FAvaRootMotionWarper& InMotionWarper, UAvaMotionWarpWindowFinder* InWindowFinder, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InSyncPointName, bool bInWarpTranslation, bool bInDisallowHorizontalStretching, bool bInDisallowHorizontalSquishing, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
}; // Size: 0x40
#pragma pack(pop)
