#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchProbability : public UAblBranchCondition {
public:
    float Probability; // 0x30
    char pad_34[0x4];
    static UAblBranchProbability* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
