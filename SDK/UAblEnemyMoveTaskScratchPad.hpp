#pragma once
#include <cstdint>
#include "FEnemyMoveTaskEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblEnemyMoveTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    FEnemyMoveTaskEntry MoveData; // 0x30
    static UAblEnemyMoveTaskScratchPad* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
