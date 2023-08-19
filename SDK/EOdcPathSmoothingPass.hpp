#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOdcPathSmoothingPass {
    Original = 0,
    FilterSignificantPoints = 1,
    Extrude = 2,
    AlignPointsOnSlopes = 3,
    Smoothed = 4,
    EOdcPathSmoothingPass_MAX = 5,
};
#pragma pack(pop)
