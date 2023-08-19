#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchMovementPredictedEvent_New : public UAblTaskCondition {
public:
    FName EventName; // 0x28
    float TimeThreshold; // 0x30
    char pad_34[0x4];
    static UAblBranchMovementPredictedEvent_New* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
