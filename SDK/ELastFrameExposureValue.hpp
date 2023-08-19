#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELastFrameExposureValue : uint8_t {
    AverageLuminance = 0,
    AverageHistogramLuminance = 1,
    AutoExposure = 2,
    Brightness = 3,
    FilteredAverageLuminance = 4,
    FilteredAverageHistogramLuminance = 5,
    FilteredAutoExposure = 6,
    FilteredBrightness = 7,
    ELastFrameExposureValue_MAX = 8,
};
#pragma pack(pop)
