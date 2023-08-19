#pragma once
#include <cstdint>
#include "FAnimationTrack.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblAvaAnimationTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x28];
    FAnimationTrack AnimationTrack; // 0x50
    char pad_220[0x10];
    float CurrentBlendWeight; // 0x230
    char pad_234[0xc];
    static UAblAvaAnimationTaskScratchPad* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
