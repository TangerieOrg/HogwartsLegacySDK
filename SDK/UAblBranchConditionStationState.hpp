#pragma once
#include <cstdint>
#include "EStationState\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionStationState : public UAblBranchCondition {
public:
    EStationState::Type StationState; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionStationState* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
