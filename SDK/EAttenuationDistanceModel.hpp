#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAttenuationDistanceModel : uint8_t {
    Linear = 0,
    Logarithmic = 1,
    Inverse = 2,
    LogReverse = 3,
    NaturalSound = 4,
    Custom = 5,
    EAttenuationDistanceModel_MAX = 6,
};
#pragma pack(pop)
