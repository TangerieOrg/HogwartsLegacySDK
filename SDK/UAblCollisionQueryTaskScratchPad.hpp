#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblCollisionQueryTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    FTransform QueryTransform; // 0x30
    char pad_60[0x8];
    bool AsyncProcessed; // 0x68
    char pad_69[0x7];
    static UAblCollisionQueryTaskScratchPad* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
