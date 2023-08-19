#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UMovementPredictionComponent;
#pragma pack(push, 1)
class UAblBranchMovementPredictedEventScratchpad : public UAblTaskConditionScratchpad {
public:
    UMovementPredictionComponent* MovementPredictionComponent; // 0x30
    static UAblBranchMovementPredictedEventScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
