#pragma once
#include <cstdint>
#include "ELineRule_LayeredAnimationType.hpp"
#include "FAnimationRequestLayerReference.hpp"
#include "FGameplayTagContainer.hpp"
#include "UDialogueLineRule.hpp"
class UAnimMaskAsset;
class UFloatProvider;
#pragma pack(push, 1)
class UDialogueLineRule_FillerLayeredAnimation : public UDialogueLineRule {
public:
    char pad_38[0x8];
    FGameplayTagContainer Tags; // 0x40
    FAnimationRequestLayerReference Layer; // 0x60
    UAnimMaskAsset* Mask; // 0x68
    ELineRule_LayeredAnimationType ActiveWhen; // 0x70
    char pad_71[0x3];
    float BlendWeight; // 0x74
    float BlendWeightVariability; // 0x78
    char pad_7c[0x4];
    UFloatProvider* ComputedBlendWeight; // 0x80
    float BlendTime; // 0x88
    float BlendTimeVariability; // 0x8c
    float PaddingTime; // 0x90
    float PaddingTimeVariability; // 0x94
    bool FitSmallAnimations; // 0x98
    char pad_99[0x7];
    static UDialogueLineRule_FillerLayeredAnimation* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
