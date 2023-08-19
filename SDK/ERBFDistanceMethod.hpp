#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERBFDistanceMethod : uint8_t {
    Euclidean = 0,
    Quaternion = 1,
    SwingAngle = 2,
    TwistAngle = 3,
    DefaultMethod = 4,
    ERBFDistanceMethod_MAX = 5,
};
#pragma pack(pop)
