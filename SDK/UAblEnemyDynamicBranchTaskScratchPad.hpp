#pragma once
#include <cstdint>
#include "EEnemy_Ability.hpp"
#include "UAblBranchTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblEnemyDynamicBranchTaskScratchPad : public UAblBranchTaskScratchPad {
public:
    float ElapsedTime; // 0x50
    EEnemy_Ability TaskState; // 0x54
    bool BranchCriteriaFromParent; // 0x55
    char pad_56[0xa];
    static UAblEnemyDynamicBranchTaskScratchPad* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
