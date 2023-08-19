#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARPlaneDetectionMode : uint8_t {
    None = 0,
    HorizontalPlaneDetection = 1,
    VerticalPlaneDetection = 2,
    EARPlaneDetectionMode_MAX = 3,
};
#pragma pack(pop)
