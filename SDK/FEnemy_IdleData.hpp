#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
class UInteractionArchitectAsset;
#pragma pack(push, 1)
struct FEnemy_IdleData {
    bool bEnable; // 0x0
    char pad_1[0x3];
    float AtLocationRadius; // 0x4
    float SuccessCooldown; // 0x8
    float SuccessCooldownDeviation; // 0xc
    float FailedCooldown; // 0x10
    float FailedCooldownDeviation; // 0x14
    float AbortMaxAngle; // 0x18
    float AbortMinDist; // 0x1c
    float AbortChanceIfTicketAvailable; // 0x20
    FGameplayTag Tag; // 0x24
    char pad_2c[0x4];
    FGameplayTagContainer CombatTags; // 0x30
    FGameplayTag IATag; // 0x50
    UInteractionArchitectAsset* IAAsset; // 0x58
}; // Size: 0x60
#pragma pack(pop)
