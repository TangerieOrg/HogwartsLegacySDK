#pragma once
#include <cstdint>
#include "FHairGroupsInterpolation.hpp"
#pragma pack(push, 1)
struct FGroomHairGroupPreview {
    int32_t GroupId; // 0x0
    int32_t CurveCount; // 0x4
    int32_t GuideCount; // 0x8
    FHairGroupsInterpolation InterpolationSettings; // 0xc
}; // Size: 0x20
#pragma pack(pop)
