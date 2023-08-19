#pragma once
#include <cstdint>
#include "ETextureMipLoadOptions.hpp"
#include "ETexturePowerOfTwoSetting\Type.hpp"
#include "TextureCompressionSettings.hpp"
#include "TextureGroup.hpp"
#include "TextureMipGenSettings.hpp"
#pragma pack(push, 1)
struct FTextureOverride {
    FName Texture; // 0x0
    float Downscale; // 0x8
    TextureCompressionSettings CompressionSettings; // 0xc
    TextureGroup LODGroup; // 0xd
    char pad_e[0x2];
    int32_t MaxTextureSize; // 0x10
    TextureMipGenSettings MipGenSettings; // 0x14
    ETextureMipLoadOptions MipLoadOptions; // 0x15
    ETexturePowerOfTwoSetting::Type PowerOfTwoMode; // 0x16
    char pad_17[0x1];
}; // Size: 0x18
#pragma pack(pop)
