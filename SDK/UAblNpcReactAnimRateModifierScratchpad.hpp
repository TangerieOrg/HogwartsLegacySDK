#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNpcReactAnimRateModifierScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x30];
    static UAblNpcReactAnimRateModifierScratchpad* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
