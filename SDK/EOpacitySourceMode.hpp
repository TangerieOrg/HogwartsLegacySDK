#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EOpacitySourceMode : uint8_t {
    OSM_Alpha = 0,
    OSM_ColorBrightness = 1,
    OSM_RedChannel = 2,
    OSM_GreenChannel = 3,
    OSM_BlueChannel = 4,
    OSM_MAX = 5,
};
#pragma pack(pop)
