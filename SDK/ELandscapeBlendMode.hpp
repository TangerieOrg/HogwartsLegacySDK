#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELandscapeBlendMode : uint8_t {
    LSBM_AdditiveBlend = 0,
    LSBM_AlphaBlend = 1,
    LSBM_MAX = 2,
};
#pragma pack(pop)
