#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablAnimDoneTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    float ElapsedTime; // 0x28
    char pad_2c[0x4];
    static UablAnimDoneTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
