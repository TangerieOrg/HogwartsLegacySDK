#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UAmbulatory_MovementComponent;
#pragma pack(push, 1)
class UAblAmbulatoryGroundDetectionScratchpad : public UAblTaskConditionScratchpad {
public:
    UAmbulatory_MovementComponent* MovementComp; // 0x30
    static UAblAmbulatoryGroundDetectionScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
