#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionEnemyReachTarget : public UAblBranchCondition {
public:
    bool bOnlyTriggerOnGroundMatch; // 0x30
    bool bOnGroundRequirement; // 0x31
    char pad_32[0x6];
    static UAblBranchConditionEnemyReachTarget* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
