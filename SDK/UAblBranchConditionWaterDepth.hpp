#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionWaterDepth : public UAblBranchCondition {
public:
    float GreaterThanWaterDepth; // 0x30
    char pad_34[0x4];
    static UAblBranchConditionWaterDepth* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
