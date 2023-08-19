#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionTimer_New : public UAblTaskCondition {
public:
    float MinTime; // 0x28
    float MaxTime; // 0x2c
    static UAblBranchConditionTimer_New* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
