#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#pragma pack(push, 1)
struct FEnemy_AttackIDData {
    int32_t Level; // 0x0
    char pad_4[0x4];
    FDbSingleColumnInfo EnemyDatabaseIDs; // 0x8
}; // Size: 0x90
#pragma pack(pop)
