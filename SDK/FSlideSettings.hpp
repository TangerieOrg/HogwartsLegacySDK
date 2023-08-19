#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UInteractionArchitectAsset;
class UClass;
#pragma pack(push, 1)
struct FSlideSettings {
    UInteractionArchitectAsset* SlideReactionMunition; // 0x0
    FGameplayTagContainer SlideReactionTag; // 0x8
    UClass* SlideReactionAbility; // 0x28
    float SweepUpOffset; // 0x30
    float SweepRadius; // 0x34
    float SweepFallbackDist; // 0x38
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
