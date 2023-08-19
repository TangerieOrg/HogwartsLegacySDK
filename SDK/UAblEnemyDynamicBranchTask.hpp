#pragma once
#include <cstdint>
#include "EEnemy_Ability.hpp"
#include "UAblBranchTask.hpp"
#pragma pack(push, 1)
class UAblEnemyDynamicBranchTask : public UAblBranchTask {
public:
    EEnemy_Ability AbilityState; // 0x118
    char pad_119[0x7];
    static UAblEnemyDynamicBranchTask* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
