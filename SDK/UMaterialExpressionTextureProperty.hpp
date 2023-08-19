#pragma once
#include <cstdint>
#include "EMaterialExposedTextureProperty.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTextureProperty : public UMaterialExpression {
public:
    FExpressionInput TextureObject; // 0x40
    EMaterialExposedTextureProperty Property; // 0x54
    char pad_55[0x3];
    static UMaterialExpressionTextureProperty* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
