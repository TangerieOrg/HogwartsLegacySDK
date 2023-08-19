#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSeedInfo {
    FName PlantID; // 0x0
    FName Seed_ItemID; // 0x8
    FName LockId; // 0x10
    bool bUnlocked; // 0x18
    char pad_19[0x3];
    FName PlotSize; // 0x1c
    bool bIsMultiHarvestable; // 0x24
    char pad_25[0x3];
    int32_t GrowthTimeSec; // 0x28
    int32_t SortingIndex; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
