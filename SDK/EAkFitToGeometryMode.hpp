#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkFitToGeometryMode {
    OrientedBox = 0,
    AlignedBox = 1,
    ConvexPolyhedron = 2,
    EAkFitToGeometryMode_MAX = 3,
};
#pragma pack(pop)
