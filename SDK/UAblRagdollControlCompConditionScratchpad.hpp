#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class URagdollControlComponent;
class UIcarus3DMovementComponent;
#pragma pack(push, 1)
class UAblRagdollControlCompConditionScratchpad : public UAblTaskConditionScratchpad {
public:
    URagdollControlComponent* RagdollControlComp; // 0x30
    UIcarus3DMovementComponent* FlightMovementComp; // 0x38
    static UAblRagdollControlCompConditionScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
