#pragma once
#include <cstdint>
#include "ERuntimeVirtualTextureMaterialType.hpp"
#include "TextureGroup.hpp"
#include "UObject.hpp"
class URuntimeVirtualTextureStreamingProxy;
#pragma pack(push, 1)
class URuntimeVirtualTexture : public UObject {
public:
    int32_t TileCount; // 0x28
    int32_t TileSize; // 0x2c
    int32_t TileBorderSize; // 0x30
    ERuntimeVirtualTextureMaterialType MaterialType; // 0x34
    bool bCompressTextures; // 0x35
    bool bClearTextures; // 0x36
    bool bSinglePhysicalSpace; // 0x37
    bool bPrivateSpace; // 0x38
    bool bAdaptive; // 0x39
    bool bContinuousUpdate; // 0x3a
    char pad_3b[0x1];
    int32_t RemoveLowMips; // 0x3c
    TextureGroup LODGroup; // 0x40
    char pad_41[0x3];
    int32_t Size; // 0x44
    URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x48
    char pad_50[0x50];
    static URuntimeVirtualTexture* StaticClass();
    int32_t GetTileSize();
    int32_t GetTileCount();
    int32_t GetTileBorderSize();
    int32_t GetSize();
    int32_t GetPageTableSize();
}; // Size: 0xa0
#pragma pack(pop)
