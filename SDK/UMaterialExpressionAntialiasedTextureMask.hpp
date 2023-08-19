#pragma once
#include <cstdint>
#include "ETextureColorChannel.hpp"
#include "UMaterialExpressionTextureSampleParameter2D.hpp"
#pragma pack(push, 1)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D {
public:
    float Threshold; // 0x80
    ETextureColorChannel Channel; // 0x84
    char pad_85[0x3];
    static UMaterialExpressionAntialiasedTextureMask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
