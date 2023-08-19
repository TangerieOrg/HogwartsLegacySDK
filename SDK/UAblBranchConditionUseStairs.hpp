#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionUseStairs : public UAblBranchCondition {
public:
    float AllowableAngleRange; // 0x30
    char pad_34[0x4];
    static UAblBranchConditionUseStairs* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
