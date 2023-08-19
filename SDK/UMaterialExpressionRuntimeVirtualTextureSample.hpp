#pragma once
#include <cstdint>
#include "ERuntimeVirtualTextureMaterialType.hpp"
#include "ERuntimeVirtualTextureMipValueMode.hpp"
#include "ERuntimeVirtualTextureTextureAddressMode.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
class URuntimeVirtualTexture;
#pragma pack(push, 1)
class UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression {
public:
    FExpressionInput Coordinates; // 0x40
    FExpressionInput WorldPosition; // 0x54
    FExpressionInput MipValue; // 0x68
    char pad_7c[0x4];
    URuntimeVirtualTexture* VirtualTexture; // 0x80
    ERuntimeVirtualTextureMaterialType MaterialType; // 0x88
    bool bSinglePhysicalSpace; // 0x89
    bool bAdaptive; // 0x8a
    ERuntimeVirtualTextureMipValueMode MipValueMode; // 0x8b
    ERuntimeVirtualTextureTextureAddressMode TextureAddressMode; // 0x8c
    char pad_8d[0x3];
    static UMaterialExpressionRuntimeVirtualTextureSample* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
