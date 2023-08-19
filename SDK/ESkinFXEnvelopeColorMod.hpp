#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXEnvelopeColorMod : uint8_t {
    RGBONLY = 0,
    ALPHAONLY = 1,
    ALL = 2,
    ESkinFXEnvelopeColorMod_MAX = 3,
};
#pragma pack(pop)
