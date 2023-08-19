#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXColorConvert : uint8_t {
    None = 0,
    CLAMP = 1,
    QUANTIZE = 2,
    FROMHSB = 3,
    XYZ = 4,
    XYZW = 5,
    XY = 6,
    XYZWPAIR = 7,
    PYRFORWARD = 8,
    PYRUP = 9,
    PYRRIGHT = 10,
    RANGLE = 11,
    RGANGLE = 12,
    ESkinFXColorConvert_MAX = 13,
};
#pragma pack(pop)
