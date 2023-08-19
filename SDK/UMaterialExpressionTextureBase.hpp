#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
class UTexture;
#pragma pack(push, 1)
class UMaterialExpressionTextureBase : public UMaterialExpression {
public:
    UTexture* Texture; // 0x40
    static UMaterialExpressionTextureBase* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
