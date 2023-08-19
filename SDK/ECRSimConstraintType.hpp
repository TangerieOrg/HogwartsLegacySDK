#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECRSimConstraintType : uint8_t {
    Distance = 0,
    DistanceFromA = 1,
    DistanceFromB = 2,
    Plane = 3,
    ECRSimConstraintType_MAX = 4,
};
#pragma pack(pop)
