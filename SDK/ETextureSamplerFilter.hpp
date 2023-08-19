#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETextureSamplerFilter {
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,
    AnisotropicPoint = 3,
    AnisotropicLinear = 4,
    ETextureSamplerFilter_MAX = 5,
};
#pragma pack(pop)
