#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkyAtmosphereColorationComputeOutput : uint8_t {
    Composited = 0,
    ColorOnly = 1,
    IntensityOnly = 2,
    ColorRGBIntensityA = 3,
    ESkyAtmosphereColorationComputeOutput_MAX = 4,
};
#pragma pack(pop)
