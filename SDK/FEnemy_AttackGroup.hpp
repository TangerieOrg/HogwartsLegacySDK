#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
class APerceptionPointArea;
#pragma pack(push, 1)
struct FEnemy_AttackGroup {
    FGameplayTag Tag; // 0x0
    int32_t MaxAttacking; // 0x8
    char pad_c[0x4];
    TArray<APerceptionPointArea*> StandbyVolumeList; // 0x10
    char pad_20[0x10];
}; // Size: 0x30
#pragma pack(pop)
