#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionIdleTimeElapsed : public UAblBranchCondition {
public:
    float TimeElapsed; // 0x30
    char pad_34[0x4];
    static UAblBranchConditionIdleTimeElapsed* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
