#pragma once
#include <cstdint>
#include "FFilterOptionPerAxis.hpp"
#pragma pack(push, 1)
struct FTransformFilter {
    FFilterOptionPerAxis TranslationFilter; // 0x0
    FFilterOptionPerAxis RotationFilter; // 0x3
    FFilterOptionPerAxis ScaleFilter; // 0x6
}; // Size: 0x9
#pragma pack(pop)
