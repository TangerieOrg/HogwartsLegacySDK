#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOcclusionTriangleSamplingUIMode : uint8_t {
    Vertices = 0,
    VerticesAndCentroids = 1,
    EOcclusionTriangleSamplingUIMode_MAX = 2,
};
#pragma pack(pop)
