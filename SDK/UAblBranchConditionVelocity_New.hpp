#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionVelocity_New : public UAblTaskCondition {
public:
    bool bSpeedIsGreaterThan; // 0x28
    char pad_29[0x3];
    float SpeedIsGreaterThan; // 0x2c
    bool bSpeedIsLessThan; // 0x30
    char pad_31[0x3];
    float SpeedIsLessThan; // 0x34
    bool bZIsGreaterThan; // 0x38
    char pad_39[0x3];
    float ZIsGreaterThan; // 0x3c
    bool bZIsLessThan; // 0x40
    char pad_41[0x3];
    float ZIsLessThan; // 0x44
    static UAblBranchConditionVelocity_New* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
