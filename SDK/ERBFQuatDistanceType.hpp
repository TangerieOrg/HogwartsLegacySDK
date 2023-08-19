#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERBFQuatDistanceType : uint8_t {
    Euclidean = 0,
    ArcLength = 1,
    SwingAngle = 2,
    TwistAngle = 3,
    ERBFQuatDistanceType_MAX = 4,
};
#pragma pack(pop)
