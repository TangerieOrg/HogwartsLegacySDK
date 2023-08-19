#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBakedCurvatureTypeMode : int32_t {
    MeanAverage = 0,
    Max = 1,
    Min = 2,
    Gaussian = 3,
};
#pragma pack(pop)
