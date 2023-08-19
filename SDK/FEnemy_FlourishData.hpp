#pragma once
#include <cstdint>
#include "FEnemy_AttackSpecificData.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FEnemy_FlourishData : public FEnemy_AttackSpecificData {
    char pad_1[0x7];
    FGameplayTagContainer TagContainer; // 0x8
    float MinDistToTarget; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
