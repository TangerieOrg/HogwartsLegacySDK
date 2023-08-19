#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionInCombatMode : public UAblBranchCondition {
public:
    bool bCheckDelayedState; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionInCombatMode* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
