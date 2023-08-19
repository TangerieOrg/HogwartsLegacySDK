#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESampleTextureToColorNormalizeMode : uint8_t {
    Intensity = 0,
    Luminance = 1,
    LuminanceBT709 = 2,
    LuminanceRMY = 3,
    LuminanceYIQ = 4,
    LuminanceATM = 5,
    Magnitude = 6,
    MagnitudeRG = 7,
    MagnitudeGB = 8,
    MagnitudeRB = 9,
    RedComponent = 10,
    GreenComponent = 11,
    BlueComponent = 12,
    MaxComponent = 13,
    ESampleTextureToColorNormalizeMode_MAX = 14,
};
#pragma pack(pop)
