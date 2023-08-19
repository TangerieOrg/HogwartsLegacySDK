#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETextureSourceFormat {
    TSF_Invalid = 0,
    TSF_G8 = 1,
    TSF_BGRA8 = 2,
    TSF_BGRE8 = 3,
    TSF_RGBA16 = 4,
    TSF_RGBA16F = 5,
    TSF_RGBA8 = 6,
    TSF_RGBE8 = 7,
    TSF_G16 = 8,
    TSF_MAX = 9,
};
#pragma pack(pop)
