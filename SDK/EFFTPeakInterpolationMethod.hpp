#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFFTPeakInterpolationMethod : uint8_t {
    NearestNeighbor = 0,
    Linear = 1,
    Quadratic = 2,
    ConstantQ = 3,
    EFFTPeakInterpolationMethod_MAX = 4,
};
#pragma pack(pop)
