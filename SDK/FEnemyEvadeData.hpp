#pragma once
#include <cstdint>
#include "EEnemyAIDodgeState.hpp"
class UClass;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
struct FEnemyEvadeData {
    EEnemyAIDodgeState EvadeType; // 0x0
    char pad_1[0x7];
    UClass* EvadeAbilityPtr; // 0x8
    UInteractionArchitectAsset* InteractionArchitectAssetPtr; // 0x10
    float EvadeChance; // 0x18
    float EvadeSuccessCooldown; // 0x1c
    float EvadeFailedCooldown; // 0x20
    char pad_24[0xc];
}; // Size: 0x30
#pragma pack(pop)
