#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAvaMotionWarpingModifierConfig.hpp"
struct FAvaRootMotionWarper;
class UAvaMotionWarpWindowFinder;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAvaMotionWarpingModifierConfig_Scale : public UAvaMotionWarpingModifierConfig {
public:
    FVector Scale; // 0x28
    char pad_34[0x4];
    static UAvaMotionWarpingModifierConfig_Scale* StaticClass();
    static void AddRootMotionModifierScale(FAvaRootMotionWarper& InMotionWarper, UAvaMotionWarpWindowFinder* InWindowFinder, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale);
}; // Size: 0x38
#pragma pack(pop)
