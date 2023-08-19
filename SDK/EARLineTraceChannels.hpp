#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARLineTraceChannels : uint8_t {
    None = 0,
    FeaturePoint = 1,
    GroundPlane = 2,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
    EARLineTraceChannels_MAX = 9,
};
#pragma pack(pop)
