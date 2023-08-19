#pragma once
#include <cstdint>
#include "UablTurnAdjustTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablCreatureAttackTurnAdjustTaskScratchPad : public UablTurnAdjustTaskScratchPad {
public:
    char pad_38[0x20];
    static UablCreatureAttackTurnAdjustTaskScratchPad* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
