#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNPC_DilateTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    static UAblNPC_DilateTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
