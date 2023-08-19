#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVirtualTextureBuildSettings {
    int32_t TileSize; // 0x0
    int32_t TileBorderSize; // 0x4
    bool bEnableCompressCrunch; // 0x8
    bool bEnableCompressZlib; // 0x9
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
