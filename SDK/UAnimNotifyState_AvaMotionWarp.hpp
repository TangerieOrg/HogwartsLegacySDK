#pragma once
#include <cstdint>
#include "UAnimNotifyState.hpp"
class UAvaMotionWarpingModifierConfig;
struct FAvaRootMotionWarper;
class UAvaMotionWarpWindowFinder;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAnimNotifyState_AvaMotionWarp : public UAnimNotifyState {
public:
    UAvaMotionWarpingModifierConfig* RootMotionModifierConfig; // 0x30
    static UAnimNotifyState_AvaMotionWarp* StaticClass();
    void AddMotionWarpModifier(FAvaRootMotionWarper& InMotionWarper, UAvaMotionWarpWindowFinder* InWindowFinder, UAnimSequenceBase* InAnimation, float StartTime, float EndTime);
}; // Size: 0x38
#pragma pack(pop)
