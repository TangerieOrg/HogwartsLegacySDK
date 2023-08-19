#pragma once
#include <cstdint>
#include "FIntVector.hpp"
#include "FVector.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FVolumetricCloudsHighAltitudeParams {
    float Chance; // 0x0
    float Focus; // 0x4
    float Intensity; // 0x8
    FIntVector Scale; // 0xc
    FVector Offset; // 0x18
    char pad_24[0x4];
    UTexture2D* ChannelPackedTexture; // 0x28
    float TextureScale; // 0x30
    FVector ChannelMask; // 0x34
}; // Size: 0x40
#pragma pack(pop)
