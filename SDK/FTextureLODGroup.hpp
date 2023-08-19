#pragma once
#include <cstdint>
#include "ETextureDownscaleOptions.hpp"
#include "ETextureLossyCompressionAmount.hpp"
#include "ETextureMipLoadOptions.hpp"
#include "TextureGroup.hpp"
#include "TextureMipGenSettings.hpp"
#pragma pack(push, 1)
struct FTextureLODGroup {
    TextureGroup Group; // 0x0
    char pad_1[0xb];
    int32_t LODBias; // 0xc
    int32_t LODBias_Smaller; // 0x10
    int32_t LODBias_Smallest; // 0x14
    char pad_18[0x4];
    int32_t NumStreamedMips; // 0x1c
    TextureMipGenSettings MipGenSettings; // 0x20
    char pad_21[0x3];
    int32_t MinLODSize; // 0x24
    int32_t MaxLODSize; // 0x28
    int32_t MaxLODSize_Smaller; // 0x2c
    int32_t MaxLODSize_Smallest; // 0x30
    int32_t OptionalLODBias; // 0x34
    int32_t OptionalMaxLODSize; // 0x38
    char pad_3c[0x4];
    FName MinMagFilter; // 0x40
    FName MipFilter; // 0x48
    ETextureMipLoadOptions MipLoadOptions; // 0x50
    bool HighPriorityLoad; // 0x51
    bool DuplicateNonOptionalMips; // 0x52
    char pad_53[0x1];
    float Downscale; // 0x54
    ETextureDownscaleOptions DownscaleOptions; // 0x58
    char pad_59[0x3];
    int32_t VirtualTextureTileCountBias; // 0x5c
    int32_t VirtualTextureTileSizeBias; // 0x60
    ETextureLossyCompressionAmount LossyCompressionAmount; // 0x64
    bool ForceDisallowStreaming; // 0x65
    char pad_66[0x2];
}; // Size: 0x68
#pragma pack(pop)
