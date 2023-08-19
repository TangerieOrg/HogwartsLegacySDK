#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStreamingTextureBuildInfo {
    uint32_t PackedRelativeBox; // 0x0
    int32_t TextureLevelIndex; // 0x4
    float TexelFactor; // 0x8
}; // Size: 0xc
#pragma pack(pop)
