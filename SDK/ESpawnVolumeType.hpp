#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnVolumeType : uint8_t {
    Point = 0,
    Box = 1,
    Sphere = 2,
    Capsule = 3,
    Spline = 4,
    ESpawnVolumeType_MAX = 5,
};
#pragma pack(pop)
