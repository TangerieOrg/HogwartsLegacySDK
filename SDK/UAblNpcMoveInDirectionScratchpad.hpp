#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNpcMoveInDirectionScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x50];
    static UAblNpcMoveInDirectionScratchpad* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
