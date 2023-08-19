#pragma once
#include <cstdint>
#include "EEnemyAIAttackState.hpp"
#include "EEnemyAIAttackStateType.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FEnemyAIAttackDistTableData : public FTableRowBase {
    EEnemyAIAttackStateType m_stateType; // 0x8
    EEnemyAIAttackState m_state; // 0x9
    char pad_a[0x2];
    float AttackMinRange; // 0xc
    float ApproachMinRange; // 0x10
    float ApproachMaxRange; // 0x14
    float AttackMaxRange; // 0x18
    float ApproachTolerance; // 0x1c
    float AttackRangeTolerance; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
