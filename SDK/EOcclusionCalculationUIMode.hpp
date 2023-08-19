#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOcclusionCalculationUIMode : uint8_t {
    GeneralizedWindingNumber = 0,
    RaycastOcclusionSamples = 1,
    EOcclusionCalculationUIMode_MAX = 2,
};
#pragma pack(pop)
