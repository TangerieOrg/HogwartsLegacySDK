#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum MediaTextureOrientation : uint8_t {
    MTORI_Original = 0,
    MTORI_CW90 = 1,
    MTORI_CW180 = 2,
    MTORI_CW270 = 3,
    MTORI_MAX = 4,
};
#pragma pack(pop)
