#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblRayCastQueryTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    bool AsyncProcessed; // 0x30
    char pad_31[0x7];
    static UAblRayCastQueryTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
