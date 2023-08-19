#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPlantDefinition {
    FName PlantID; // 0x0
    int32_t Tier; // 0x8
    FName Seed_ItemID; // 0xc
    FName LockId; // 0x14
    FName ByproductID; // 0x1c
    FName PlotSize; // 0x24
    int32_t GrowthTimeSec; // 0x2c
    bool bIsMultiHarvestable; // 0x30
    char pad_31[0x3];
    int32_t RegrowthTimeSec; // 0x34
    int32_t Yield_Planted; // 0x38
    int32_t Yield_Foraged; // 0x3c
    int32_t SortingIndex; // 0x40
}; // Size: 0x44
#pragma pack(pop)
