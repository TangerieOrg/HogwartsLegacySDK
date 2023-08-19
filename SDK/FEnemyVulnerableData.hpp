#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#pragma pack(push, 1)
struct FEnemyVulnerableData {
    FGameplayTag WeaponTag; // 0x0
    bool ProtegoWhenVulnerable; // 0x8
    char pad_9[0x3];
    int32_t ChanceToEvade; // 0xc
    int32_t ChanceToProtego; // 0x10
    int32_t ProtegoDeflectedAttack; // 0x14
    int32_t BlockAttack; // 0x18
    int32_t DeflectBackAttack; // 0x1c
    int32_t DeflectToTarget; // 0x20
    float DamageModifier; // 0x24
}; // Size: 0x28
#pragma pack(pop)
