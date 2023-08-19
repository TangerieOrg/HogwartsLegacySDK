#pragma once
#include <cstdint>
#include "ECreatureFlightState.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionDesiredFlightState : public UAblBranchCondition {
public:
    ECreatureFlightState DesiredFlightState; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionDesiredFlightState* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
