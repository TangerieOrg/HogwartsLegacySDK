#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression {
public:
    FExpressionInput TextureSize; // 0x40
    float ConstWidth; // 0x54
    float ConstHeight; // 0x58
    char pad_5c[0x4];
    static UMaterialExpressionDecalMipmapLevel* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
