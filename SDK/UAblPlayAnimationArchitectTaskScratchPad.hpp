#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
class AActor;
class UAnimationAsset;
#pragma pack(push, 1)
class UAblPlayAnimationArchitectTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    AActor* TargetActor; // 0x28
    char pad_30[0x10];
    UAnimationAsset* AnimationAsset; // 0x40
    TArray<UAnimationAsset*> BlendTrackAnimationAssets; // 0x48
    float AssetEndTimeAdjust; // 0x58
    char pad_5c[0x4];
    FAlphaBlend BlendIn; // 0x60
    FAlphaBlend BlendOut; // 0x90
    char pad_c0[0x68];
    static UAblPlayAnimationArchitectTaskScratchPad* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
