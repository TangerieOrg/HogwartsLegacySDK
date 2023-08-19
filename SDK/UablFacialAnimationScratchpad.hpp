#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablFacialAnimationScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x10];
    static UablFacialAnimationScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
