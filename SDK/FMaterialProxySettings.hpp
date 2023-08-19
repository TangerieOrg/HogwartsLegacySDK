#pragma once
#include <cstdint>
#include "EBlendMode.hpp"
#include "EMaterialMergeType.hpp"
#include "ETextureSizingType.hpp"
#include "FIntPoint.hpp"
#pragma pack(push, 1)
struct FMaterialProxySettings {
    FIntPoint TextureSize; // 0x0
    float GutterSpace; // 0x8
    float MetallicConstant; // 0xc
    float RoughnessConstant; // 0x10
    float AnisotropyConstant; // 0x14
    float SpecularConstant; // 0x18
    float OpacityConstant; // 0x1c
    float OpacityMaskConstant; // 0x20
    float AmbientOcclusionConstant; // 0x24
    ETextureSizingType TextureSizingType; // 0x28
    EMaterialMergeType MaterialMergeType; // 0x29
    EBlendMode BlendMode; // 0x2a
    uint8_t bAllowTwoSidedMaterial : 1; // 0x2b
    uint8_t bNormalMap : 1; // 0x2b
    uint8_t bTangentMap : 1; // 0x2b
    uint8_t bMetallicMap : 1; // 0x2b
    uint8_t bRoughnessMap : 1; // 0x2b
    uint8_t bAnisotropyMap : 1; // 0x2b
    uint8_t bSpecularMap : 1; // 0x2b
    uint8_t bEmissiveMap : 1; // 0x2b
    uint8_t bOpacityMap : 1; // 0x2c
    uint8_t bOpacityMaskMap : 1; // 0x2c
    uint8_t bAmbientOcclusionMap : 1; // 0x2c
    uint8_t pad_bitfield_2c_3 : 5;
    char pad_2d[0x3];
    FIntPoint DiffuseTextureSize; // 0x30
    FIntPoint NormalTextureSize; // 0x38
    FIntPoint TangentTextureSize; // 0x40
    FIntPoint MetallicTextureSize; // 0x48
    FIntPoint RoughnessTextureSize; // 0x50
    FIntPoint AnisotropyTextureSize; // 0x58
    FIntPoint SpecularTextureSize; // 0x60
    FIntPoint EmissiveTextureSize; // 0x68
    FIntPoint OpacityTextureSize; // 0x70
    FIntPoint OpacityMaskTextureSize; // 0x78
    FIntPoint AmbientOcclusionTextureSize; // 0x80
}; // Size: 0x88
#pragma pack(pop)
