#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionVelocity : public UAblBranchCondition {
public:
    bool bMinSpeed; // 0x30
    char pad_31[0x3];
    float MinSpeed; // 0x34
    static UAblBranchConditionVelocity* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
