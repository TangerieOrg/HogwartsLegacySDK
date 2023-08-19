#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightReportExposure {
    ExposureMinMax = 0,
    ExposureBias = 1,
    ExposureHistMinMax = 2,
    ExposureSpeed = 3,
    ExposureLowHighPercent = 4,
    ExposureLastFrameLuminance = 5,
    ExposureLastFrameExposure = 6,
    ExposureLastFrameBright = 7,
    EDayNightReportExposure_MAX = 8,
};
#pragma pack(pop)
