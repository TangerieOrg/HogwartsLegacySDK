#pragma once
#include <cstdint>
#include "ENPC_AttackSelectionConditions.hpp"
#pragma pack(push, 1)
struct FNPCAttackConditionValue {
    ENPC_AttackSelectionConditions WeightType; // 0x0
    char pad_1[0x3];
    float WeightValue; // 0x4
}; // Size: 0x8
#pragma pack(pop)
