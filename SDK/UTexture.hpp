#pragma once
#include <cstdint>
#include "ETextureDownscaleOptions.hpp"
#include "ETextureMipLoadOptions.hpp"
#include "FGuid.hpp"
#include "FPerPlatformFloat.hpp"
#include "TextureCompressionSettings.hpp"
#include "TextureFilter.hpp"
#include "TextureGroup.hpp"
#include "UStreamableRenderAsset.hpp"
class UAssetUserData;
#pragma pack(push, 1)
class UTexture : public UStreamableRenderAsset {
public:
    char pad_60[0x8];
    FGuid LightingGuid; // 0x68
    int32_t LODBias; // 0x78
    TextureCompressionSettings CompressionSettings; // 0x7c
    TextureFilter Filter; // 0x7d
    ETextureMipLoadOptions MipLoadOptions; // 0x7e
    TextureGroup LODGroup; // 0x7f
    FPerPlatformFloat Downscale; // 0x80
    ETextureDownscaleOptions DownscaleOptions; // 0x84
    uint8_t SRGB : 1; // 0x85
    uint8_t bNoTiling : 1; // 0x85
    uint8_t VirtualTextureStreaming : 1; // 0x85
    uint8_t CompressionYCoCg : 1; // 0x85
    uint8_t bNotOfflineProcessed : 1; // 0x85
    uint8_t bAsyncResourceReleaseHasBeenStarted : 1; // 0x85
    uint8_t pad_bitfield_85_6 : 2;
    char pad_86[0x2];
    TArray<UAssetUserData*> AssetUserData; // 0x88
    char pad_98[0xe8];
    static UTexture* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
