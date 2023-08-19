#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_BlendSpaceCoordinates {
    Cartesian = 0,
    Polar = 1,
    Anim = 2,
    MoveTurn = 3,
    Standard = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
