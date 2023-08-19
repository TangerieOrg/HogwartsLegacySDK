#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESampleTextureToCurveAlphaChannel : uint8_t {
    TextureAlpha = 0,
    FixedAlpha = 1,
    AlphaIsOne = 2,
    AlphaIsZero = 3,
    AlphaIsIntensity = 4,
    ESampleTextureToCurveAlphaChannel_MAX = 5,
};
#pragma pack(pop)
