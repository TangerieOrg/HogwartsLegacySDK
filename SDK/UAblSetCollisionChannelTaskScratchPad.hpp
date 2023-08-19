#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblSetCollisionChannelTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x50];
    static UAblSetCollisionChannelTaskScratchPad* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
