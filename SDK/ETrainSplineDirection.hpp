#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETrainSplineDirection : uint8_t {
    INCREMENTING_NORTH = 0,
    INCREMENTING_SOUTH = 1,
    INCREMENTING_MAX = 2,
};
#pragma pack(pop)
