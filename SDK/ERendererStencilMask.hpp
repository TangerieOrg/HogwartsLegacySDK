#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERendererStencilMask : uint8_t {
    ERSM_Default = 0,
    ERSM_255 = 1,
    ERSM_1 = 2,
    ERSM_2 = 3,
    ERSM_4 = 4,
    ERSM_8 = 5,
    ERSM_16 = 6,
    ERSM_32 = 7,
    ERSM_64 = 8,
    ERSM_128 = 9,
    ERSM_MAX = 10,
};
#pragma pack(pop)
