#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicLightAdaptationEVValueType : uint8_t {
    Absolute = 0,
    MinMaxExposureTarget = 1,
    LastFrameAverageLuminanceDelta = 2,
    AutoAdaptationDelta = 3,
    AutoAdaptationBloomDelta = 4,
    EDynamicLightAdaptationEVValueType_MAX = 5,
};
#pragma pack(pop)
