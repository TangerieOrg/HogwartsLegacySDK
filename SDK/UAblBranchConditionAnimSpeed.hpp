#pragma once
#include <cstdint>
#include "EAnimSpeedType\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionAnimSpeed : public UAblBranchCondition {
public:
    EAnimSpeedType::Type AnimSpeedType; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionAnimSpeed* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
