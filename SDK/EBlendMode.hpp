#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBlendMode : uint8_t {
    BLEND_Opaque = 0,
    BLEND_Masked = 1,
    BLEND_Translucent = 2,
    BLEND_Additive = 3,
    BLEND_Modulate = 4,
    BLEND_AlphaComposite = 5,
    BLEND_AlphaHoldout = 6,
    BLEND_MAX = 7,
};
#pragma pack(pop)
