#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIScalingRule : uint8_t {
    ShortestSide = 0,
    LongestSide = 1,
    Horizontal = 2,
    Vertical = 3,
    ScaleToFit = 4,
    Custom = 5,
    EUIScalingRule_MAX = 6,
};
#pragma pack(pop)
