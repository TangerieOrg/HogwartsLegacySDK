#pragma once
#include <cstdint>
#include "ENoiseSize.hpp"
#include "FGameplayTag.hpp"
class UInteractionArchitectAsset;
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FPhysicsReactionGroup {
    float MinDamageThreshold; // 0x0
    char pad_4[0x4];
    UInteractionArchitectAsset* MunitionDataLevelAsset; // 0x8
    FGameplayTag ImpactStrengthTag; // 0x10
    float CharacterDamage; // 0x18
    ENoiseSize NoiseSize; // 0x1c
    char pad_1d[0x3];
    TArray<UMultiFX2_Base*> CollisionFX2; // 0x20
}; // Size: 0x30
#pragma pack(pop)
