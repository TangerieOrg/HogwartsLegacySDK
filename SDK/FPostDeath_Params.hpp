#pragma once
#include <cstdint>
#include "EPostDeathCleanupEffect.hpp"
#include "EPostDeathCleanupMode.hpp"
#include "EPostDeathSortingMode.hpp"
#pragma pack(push, 1)
struct FPostDeath_Params {
    EPostDeathCleanupEffect CleanUpEffect; // 0x0
    EPostDeathCleanupMode CleanUpMode; // 0x1
    EPostDeathSortingMode SortingMode; // 0x2
    char pad_3[0x1];
    int32_t BatchSize; // 0x4
    int32_t MaxAllowedDeadNPCs; // 0x8
    int32_t MinAllowedDeadNPCs; // 0xc
    float TimeBetweenBatches; // 0x10
    float TimerModeDelay; // 0x14
}; // Size: 0x18
#pragma pack(pop)
