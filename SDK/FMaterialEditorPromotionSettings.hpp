#pragma once
#include <cstdint>
#include "FFilePath.hpp"
#pragma pack(push, 1)
struct FMaterialEditorPromotionSettings {
    FFilePath DefaultMaterialAsset; // 0x0
    FFilePath DefaultDiffuseTexture; // 0x10
    FFilePath DefaultNormalTexture; // 0x20
}; // Size: 0x30
#pragma pack(pop)
