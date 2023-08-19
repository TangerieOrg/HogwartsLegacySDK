#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class MovieScene3DPathSection_Axis : uint8_t {
    X = 0,
    Y = 1,
    Z = 2,
    NEG_X = 3,
    NEG_Y = 4,
    NEG_Z = 5,
    MovieScene3DPathSection_MAX = 6,
};
#pragma pack(pop)
