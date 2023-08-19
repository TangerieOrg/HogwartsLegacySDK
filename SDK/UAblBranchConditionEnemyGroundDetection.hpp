#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionEnemyGroundDetection : public UAblBranchCondition {
public:
    float OnGroundDistance; // 0x30
    bool bIncludeCharacterHeightBounds; // 0x34
    char pad_35[0x3];
    static UAblBranchConditionEnemyGroundDetection* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
