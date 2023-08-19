#pragma once
#include <cstdint>
#include "ENPC_Spawn.hpp"
#include "FGameplayTagContainer.hpp"
class UBehaviorTree;
#pragma pack(push, 1)
struct FNPC_SpawnData {
    ENPC_Spawn Type; // 0x0
    bool bHideOnSpawnStart; // 0x1
    char pad_2[0x2];
    float bUnhideOnSpawnStartDelay; // 0x4
    bool bApplyForceOnSpawn; // 0x8
    bool bTurnToTargetOnSpawn; // 0x9
    char pad_a[0x6];
    FGameplayTagContainer IATags; // 0x10
    FGameplayTagContainer AATags; // 0x30
    UBehaviorTree* SpawnBehaviorTree; // 0x50
}; // Size: 0x58
#pragma pack(pop)
