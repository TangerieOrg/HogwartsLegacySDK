#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNpcCollisionScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x20];
    static UAblNpcCollisionScratchpad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
