#pragma once
#include <cstdint>
#include "ELineRule_LayeredAnimationLipSyncIntensityType.hpp"
#include "ELineRule_LayeredAnimationStartFromType.hpp"
#include "ELineRule_LayeredAnimationType.hpp"
#include "FAnimationRequestLayerReference.hpp"
#include "FGameplayTagContainer.hpp"
#include "UDialogueLineRule.hpp"
class UAnimMaskAsset;
class UFloatProvider;
#pragma pack(push, 1)
class UDialogueLineRule_LayeredAnimation : public UDialogueLineRule {
public:
    char pad_38[0x8];
    FGameplayTagContainer Tags; // 0x40
    FAnimationRequestLayerReference Layer; // 0x60
    UAnimMaskAsset* Mask; // 0x68
    ELineRule_LayeredAnimationType ActiveWhen; // 0x70
    ELineRule_LayeredAnimationStartFromType StartsFrom; // 0x71
    ELineRule_LayeredAnimationLipSyncIntensityType LipSyncIntensity; // 0x72
    char pad_73[0x1];
    float BlendWeight; // 0x74
    float BlendWeightVariability; // 0x78
    char pad_7c[0x4];
    UFloatProvider* ComputedBlendWeight; // 0x80
    float BlendTime; // 0x88
    float BlendTimeVariability; // 0x8c
    bool Blocking; // 0x90
    char pad_91[0x7];
    static UDialogueLineRule_LayeredAnimation* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
