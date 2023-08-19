#pragma once
#include <cstdint>
#include "FLastRenderedExposure.hpp"
#pragma pack(push, 1)
struct FLastRenderedExposureRunningAverage {
    FLastRenderedExposure Average; // 0x0
    int32_t Samples; // 0x20
    int32_t TotalSamples; // 0x24
}; // Size: 0x28
#pragma pack(pop)
