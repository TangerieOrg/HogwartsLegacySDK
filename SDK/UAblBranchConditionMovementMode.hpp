#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionMovementMode : public UAblTaskCondition {
public:
    EMovementMode MovementMode; // 0x28
    char pad_29[0x3];
    float MinDuration; // 0x2c
    static UAblBranchConditionMovementMode* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
