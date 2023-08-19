#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchMovementPredictedEvent : public UAblBranchCondition {
public:
    FName EventName; // 0x30
    float TimeThreshold; // 0x38
    char pad_3c[0x4];
    static UAblBranchMovementPredictedEvent* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
