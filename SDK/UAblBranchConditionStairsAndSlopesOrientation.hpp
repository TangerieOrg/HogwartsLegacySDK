#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionStairsAndSlopesOrientation : public UAblBranchCondition {
public:
    float MinAngle; // 0x30
    char pad_34[0x4];
    static UAblBranchConditionStairsAndSlopesOrientation* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
