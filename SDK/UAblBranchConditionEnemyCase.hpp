#pragma once
#include <cstdint>
#include "EAbilityTaskScratchPadCondition.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionEnemyCase : public UAblBranchCondition {
public:
    EAbilityTaskScratchPadCondition Condition; // 0x30
    char pad_31[0x3];
    float fMinTime; // 0x34
    float fMaxTime; // 0x38
    char pad_3c[0x4];
    static UAblBranchConditionEnemyCase* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
