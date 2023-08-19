#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNpcScaleScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x88];
    static UAblNpcScaleScratchpad* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
