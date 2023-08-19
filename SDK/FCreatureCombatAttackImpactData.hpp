#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UCreatureCombatAttackData;
#pragma pack(push, 1)
struct FCreatureCombatAttackImpactData {
    UCreatureCombatAttackData* AttackData; // 0x0
    FGameplayTagContainer AnimationArchitectGameplayTags; // 0x8
    char pad_28[0x48];
}; // Size: 0x70
#pragma pack(pop)
