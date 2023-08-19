#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblReactionsCapsuleScalingScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x60];
    static UAblReactionsCapsuleScalingScratchpad* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
