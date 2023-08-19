#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablJumpAdjustTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x40];
    static UablJumpAdjustTaskScratchPad* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
