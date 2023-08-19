#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FDepthFieldGlowInfo {
    uint8_t bEnableGlow : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    FLinearColor GlowColor; // 0x4
    FVector2D GlowOuterRadius; // 0x14
    FVector2D GlowInnerRadius; // 0x1c
}; // Size: 0x24
#pragma pack(pop)
