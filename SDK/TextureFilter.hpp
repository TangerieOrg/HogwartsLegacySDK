#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum TextureFilter : uint8_t {
    TF_Nearest = 0,
    TF_Bilinear = 1,
    TF_Trilinear = 2,
    TF_Default = 3,
    TF_MAX = 4,
};
#pragma pack(pop)
