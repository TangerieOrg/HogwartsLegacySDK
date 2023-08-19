#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
class UFont;
#pragma pack(push, 1)
class UMaterialExpressionFontSample : public UMaterialExpression {
public:
    UFont* Font; // 0x40
    int32_t FontTexturePage; // 0x48
    char pad_4c[0x4];
    static UMaterialExpressionFontSample* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
