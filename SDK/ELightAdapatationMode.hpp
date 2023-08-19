#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightAdapatationMode : uint8_t {
    LastFrameAutoExposure = 0,
    LastFrameAverageLuminance = 1,
    MinMaxExposureTarget = 2,
    AutoAdaptation = 3,
    AutoAdaptationBloom = 4,
    FixedExposure = 5,
    ELightAdapatationMode_MAX = 6,
};
#pragma pack(pop)
