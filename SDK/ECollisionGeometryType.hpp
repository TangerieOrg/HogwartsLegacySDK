#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECollisionGeometryType : int32_t {
    KeepExisting = 0,
    AlignedBoxes = 1,
    OrientedBoxes = 2,
    MinimalSpheres = 3,
    Capsules = 4,
    ConvexHulls = 5,
    SweptHulls = 6,
    MinVolume = 10,
    None = 11,
    ECollisionGeometryType_MAX = 12,
};
#pragma pack(pop)
