#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblRipApartScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x18];
    static UAblRipApartScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
