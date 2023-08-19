#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNpcCapsuleScalingScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x68];
    static UAblNpcCapsuleScalingScratchpad* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
