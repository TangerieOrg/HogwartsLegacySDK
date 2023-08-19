#pragma once
#include <cstdint>
#include "EEnemy_Ability.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablNPC_SpawnJumpSplineWaitTask : public UAblAbilityTask {
public:
    EEnemy_Ability BranchToAbilityOnRelease; // 0x70
    char pad_71[0x7];
    static UablNPC_SpawnJumpSplineWaitTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
