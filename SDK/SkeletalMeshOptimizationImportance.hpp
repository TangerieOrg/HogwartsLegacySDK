#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SkeletalMeshOptimizationImportance : uint8_t {
    SMOI_Off = 0,
    SMOI_Lowest = 1,
    SMOI_Low = 2,
    SMOI_Normal = 3,
    SMOI_High = 4,
    SMOI_Highest = 5,
    SMOI_MAX = 6,
};
#pragma pack(pop)
