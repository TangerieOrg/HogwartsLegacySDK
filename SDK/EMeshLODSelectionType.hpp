#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshLODSelectionType : uint8_t {
    AllLODs = 0,
    SpecificLOD = 1,
    CalculateLOD = 2,
    LowestDetailLOD = 3,
    EMeshLODSelectionType_MAX = 4,
};
#pragma pack(pop)
