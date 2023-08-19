#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblScaleCharacterScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    static UAblScaleCharacterScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
