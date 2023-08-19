#pragma once
#include <cstdint>
#include "EMaterialSamplerType.hpp"
#include "UMaterialExpression.hpp"
class UTexture;
#pragma pack(push, 1)
class UMaterialExpressionTextureArray : public UMaterialExpression {
public:
    char pad_40[0x18];
    TArray<UTexture*> Textures; // 0x58
    EMaterialSamplerType SamplerType; // 0x68
    bool bHideIndexedPins; // 0x69
    char pad_6a[0x6];
    static UMaterialExpressionTextureArray* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
