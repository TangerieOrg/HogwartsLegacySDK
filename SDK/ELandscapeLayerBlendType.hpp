#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELandscapeLayerBlendType : uint8_t {
    LB_WeightBlend = 0,
    LB_AlphaBlend = 1,
    LB_HeightBlend = 2,
    LB_MAX = 3,
};
#pragma pack(pop)
