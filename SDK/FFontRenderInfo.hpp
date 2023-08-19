#pragma once
#include <cstdint>
#include "FDepthFieldGlowInfo.hpp"
#pragma pack(push, 1)
struct FFontRenderInfo {
    uint8_t bClipText : 1; // 0x0
    uint8_t bEnableShadow : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    char pad_1[0x3];
    FDepthFieldGlowInfo GlowInfo; // 0x4
}; // Size: 0x28
#pragma pack(pop)
