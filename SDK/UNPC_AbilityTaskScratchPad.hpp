#pragma once
#include <cstdint>
#include "FNPC_AbilityTaskMovementEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UNPC_AbilityTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    FNPC_AbilityTaskMovementEntry MoveData; // 0x28
    char pad_4c[0x54];
    static UNPC_AbilityTaskScratchPad* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
