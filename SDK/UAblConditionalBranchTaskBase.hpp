#pragma once
#include <cstdint>
#include "EAnimBlendTickStyle.hpp"
#include "EEvaluatorRootMotion\Mode.hpp"
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblConditionalBranchTaskBase : public UAblAbilityTask {
public:
    TArray<UAblTaskCondition*> BranchConditions; // 0x70
    bool bMustPassAllConditions; // 0x80
    bool bOverrideAnimationBlendIn; // 0x81
    char pad_82[0x6];
    FAlphaBlend AnimationBlendInOverride; // 0x88
    bool bClampBlendOutTime; // 0xb8
    bool bOverrideRootMotion; // 0xb9
    EEvaluatorRootMotion::Mode SourceRootMotion; // 0xba
    EEvaluatorRootMotion::Mode DestRootMotion; // 0xbb
    bool bOverrideBlendTickStyle; // 0xbc
    EAnimBlendTickStyle BlendTickStyleOverride; // 0xbd
    char pad_be[0x2];
    static UAblConditionalBranchTaskBase* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
