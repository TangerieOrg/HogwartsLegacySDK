#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblPossessionTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    static UAblPossessionTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
