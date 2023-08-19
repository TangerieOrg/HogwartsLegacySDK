#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class AActor;
class ASpellTool;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
struct FDamageResult {
    AActor* Victim; // 0x0
    AActor* Instigator; // 0x8
    ASpellTool* SpellTool; // 0x10
    UInteractionArchitectAsset* MunitionAsset; // 0x18
    FGameplayTagContainer ImpactTagContainer; // 0x20
    float DamageAmount; // 0x40
    float BaseDamageAmount; // 0x44
    float RemainingHealth; // 0x48
    bool bNearDeathKneeling; // 0x4c
    bool bDeadlyAttack; // 0x4d
    bool bCursedDamage; // 0x4e
    bool bDeflection; // 0x4f
    bool bPerfectDeflection; // 0x50
    bool bFinisher; // 0x51
    char pad_52[0x6];
}; // Size: 0x58
#pragma pack(pop)
