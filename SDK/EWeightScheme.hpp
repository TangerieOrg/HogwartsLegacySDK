#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeightScheme : int32_t {
    Uniform = 0,
    Umbrella = 1,
    Valence = 2,
    MeanValue = 3,
    Cotangent = 4,
    ClampedCotangent = 5,
    EWeightScheme_MAX = 6,
};
#pragma pack(pop)
