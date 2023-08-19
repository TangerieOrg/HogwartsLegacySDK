#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UAmbulatory_MovementComponent;
#pragma pack(push, 1)
class UAblBranchConditionSlopeSlideDoneScratchpad : public UAblTaskConditionScratchpad {
public:
    UAmbulatory_MovementComponent* MovementComp; // 0x30
    char pad_38[0x8];
    static UAblBranchConditionSlopeSlideDoneScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
