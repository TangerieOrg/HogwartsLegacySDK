#pragma once
#include <cstdint>
#include "EStairsDirectionState\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionStairsAndSlopesDirection : public UAblBranchCondition {
public:
    EStairsDirectionState::Type StairsDirection; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionStairsAndSlopesDirection* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
