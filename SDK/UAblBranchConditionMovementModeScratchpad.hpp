#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UCharacterMovementComponent;
#pragma pack(push, 1)
class UAblBranchConditionMovementModeScratchpad : public UAblTaskConditionScratchpad {
public:
    UCharacterMovementComponent* MovementComp; // 0x30
    float TimeInMode; // 0x38
    char pad_3c[0x4];
    static UAblBranchConditionMovementModeScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
