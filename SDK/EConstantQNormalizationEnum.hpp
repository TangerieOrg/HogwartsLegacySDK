#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConstantQNormalizationEnum : uint8_t {
    EqualEuclideanNorm = 0,
    EqualEnergy = 1,
    EqualAmplitude = 2,
    EConstantQNormalizationEnum_MAX = 3,
};
#pragma pack(pop)
