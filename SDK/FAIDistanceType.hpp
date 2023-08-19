#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FAIDistanceType : uint8_t {
    Distance3D = 0,
    Distance2D = 1,
    DistanceZ = 2,
    MAX = 3,
};
#pragma pack(pop)
