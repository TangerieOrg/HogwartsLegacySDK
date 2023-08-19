#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionHairColor : public UMaterialExpression {
public:
    FExpressionInput Melanin; // 0x40
    FExpressionInput Redness; // 0x54
    FExpressionInput DyeColor; // 0x68
    char pad_7c[0x4];
    static UMaterialExpressionHairColor* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
