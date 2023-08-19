#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablImpulseToTargetTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    float ElapsedTime; // 0x28
    char pad_2c[0x4];
    static UablImpulseToTargetTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
