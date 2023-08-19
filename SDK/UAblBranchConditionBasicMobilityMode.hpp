#pragma once
#include <cstdint>
#include "EBasicMobilityMode\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionBasicMobilityMode : public UAblBranchCondition {
public:
    EBasicMobilityMode::Type BasicMobilityMode; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionBasicMobilityMode* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
