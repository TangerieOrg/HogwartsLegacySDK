#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablMotionAdjustTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x68];
    static UablMotionAdjustTaskScratchPad* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
