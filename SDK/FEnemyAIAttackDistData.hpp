#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnemyAIAttackDistData {
    bool bAttackDesperationEnable; // 0x0
    char pad_1[0x3];
    float AttackDesperationMinRange; // 0x4
    float AttackDesperationMaxRange; // 0x8
    float AttackDesperationNotInRangeTime; // 0xc
}; // Size: 0x10
#pragma pack(pop)
