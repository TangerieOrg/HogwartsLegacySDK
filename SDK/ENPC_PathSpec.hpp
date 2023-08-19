#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PathSpec : uint8_t {
    None = 0,
    Ground = 1,
    Water = 2,
    GroundAndWater = 3,
    Custom = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
