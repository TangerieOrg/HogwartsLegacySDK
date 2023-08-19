#pragma once
#include <cstdint>
#include "EEnemyAIAttackState.hpp"
#include "FEnemyAIAttackDistTableData.hpp"
#pragma pack(push, 1)
struct FEnemyAIAttackDistTableDataContainer {
    EEnemyAIAttackState State; // 0x0
    char pad_1[0x7];
    FEnemyAIAttackDistTableData Data; // 0x8
}; // Size: 0x30
#pragma pack(pop)
