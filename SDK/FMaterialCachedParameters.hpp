#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FMaterialCachedParameterEntry.hpp"
class UTexture;
class UFont;
class URuntimeVirtualTexture;
#pragma pack(push, 1)
struct FMaterialCachedParameters {
    FMaterialCachedParameterEntry RuntimeEntries[5]; // 0x0
    TArray<float> ScalarValues; // 0xf0
    TArray<FLinearColor> VectorValues; // 0x100
    TArray<UTexture*> TextureValues; // 0x110
    TArray<UFont*> FontValues; // 0x120
    TArray<int32_t> FontPageValues; // 0x130
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x140
}; // Size: 0x150
#pragma pack(pop)
