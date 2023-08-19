#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECirclingDirection : uint8_t {
    Clockwise = 0,
    Anticlockwise = 1,
    Random = 2,
    Closest = 3,
    ECirclingDirection_MAX = 4,
};
#pragma pack(pop)
