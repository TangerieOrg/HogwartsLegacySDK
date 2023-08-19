#pragma once
#include <cstdint>
#include "FEnemy_TargetPriority.hpp"
#pragma pack(push, 1)
struct FEnemy_TargetSelectionData {
    FName TargetSelectionScoreSet; // 0x0
    TArray<FEnemy_TargetPriority> TargetPriorityList; // 0x8
}; // Size: 0x18
#pragma pack(pop)
