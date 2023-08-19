#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnOnFloorTestType : uint8_t {
    ShapeSweep = 0,
    LineTrace = 1,
    ESpawnOnFloorTestType_MAX = 2,
};
#pragma pack(pop)
