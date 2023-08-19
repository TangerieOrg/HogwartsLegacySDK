#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UMultiFX2_Base;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
struct FTransformationOverlandData {
    TArray<UMultiFX2_Base*> HideFX2; // 0x0
    TArray<UMultiFX2_Base*> SpawnFX2; // 0x10
    TArray<UMultiFX2_Base*> UnspawnFX2; // 0x20
    TArray<UMultiFX2_Base*> RestoreFX2; // 0x30
    FGameplayTagContainer RestoreMunitionTagContainer; // 0x40
    UInteractionArchitectAsset* RestoreMunitionDataAsset; // 0x60
    char pad_68[0xa0];
}; // Size: 0x108
#pragma pack(pop)
