#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblPhysicsBallisticToTargetScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x20];
    static UAblPhysicsBallisticToTargetScratchpad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
