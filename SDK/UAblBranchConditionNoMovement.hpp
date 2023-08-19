#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionNoMovement : public UAblBranchCondition {
public:
    float DistanceSquaredTolerance; // 0x30
    char pad_34[0x4];
    static UAblBranchConditionNoMovement* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
