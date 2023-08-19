#pragma once
#include <cstdint>
#include "FBoxSphereBounds.hpp"
class UStreamableRenderAsset;
#pragma pack(push, 1)
struct FStreamingRenderAssetPrimitiveInfo {
    UStreamableRenderAsset* RenderAsset; // 0x0
    FBoxSphereBounds Bounds; // 0x8
    float TexelFactor; // 0x24
    uint32_t PackedRelativeBox; // 0x28
    uint8_t bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
    uint8_t pad_bitfield_2c_1 : 7;
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
