#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablClothOptionsScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0xa0];
    static UablClothOptionsScratchpad* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
