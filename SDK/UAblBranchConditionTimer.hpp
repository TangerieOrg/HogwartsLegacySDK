#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionTimer : public UAblBranchCondition {
public:
    float CountdownTime; // 0x30
    char pad_34[0x4];
    static UAblBranchConditionTimer* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
