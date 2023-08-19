#pragma once
#include <cstdint>
#include "FSkinFXMaterialTextureProperty.hpp"
#include "FSkinFXTextureAdvanced.hpp"
#pragma pack(push, 1)
struct FSkinFXTexture {
    FSkinFXMaterialTextureProperty MaterialParameter; // 0x0
    char pad_8[0x28];
    FSkinFXTextureAdvanced Advanced; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
