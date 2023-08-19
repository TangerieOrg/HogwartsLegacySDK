#pragma once
#include <cstdint>
#include "FModifyMaterials_TextureOverride.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FSmartTexture {
    UTexture2D* DefaultTexture; // 0x0
    TArray<FModifyMaterials_TextureOverride> TextureOverrides; // 0x8
}; // Size: 0x18
#pragma pack(pop)
