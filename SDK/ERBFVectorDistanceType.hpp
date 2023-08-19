#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERBFVectorDistanceType : uint8_t {
    Euclidean = 0,
    Manhattan = 1,
    ArcLength = 2,
    ERBFVectorDistanceType_MAX = 3,
};
#pragma pack(pop)
