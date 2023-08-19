#pragma once
#include <cstdint>
#include "EPixelFormat.hpp"
#pragma pack(push, 1)
struct FVirtualTextureSpacePoolConfig {
    int32_t MinTileSize; // 0x0
    int32_t MaxTileSize; // 0x4
    TArray<EPixelFormat> Formats; // 0x8
    int32_t SizeInMegabyte; // 0x18
    bool bAllowSizeScale; // 0x1c
    char pad_1d[0x3];
    uint32_t ScalabilityGroup; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
