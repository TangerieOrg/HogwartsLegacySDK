#pragma once
#include <cstdint>
#include "EEnemyMovementState.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FEnemy_AttackRange_DistanceData : public FTableRowBase {
    EEnemyMovementState EnemyMoveState; // 0x8
    char pad_9[0x3];
    float MinDistance; // 0xc
    float MaxDistance; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
