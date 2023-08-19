#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAmbulatory_MovementComponent;
#pragma pack(push, 1)
class UAblSpiderFallTumbleScratchpad : public UAblAbilityTaskScratchPad {
public:
    UAmbulatory_MovementComponent* AmbulatoryMovementComponent; // 0x28
    char pad_30[0x10];
    static UAblSpiderFallTumbleScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
