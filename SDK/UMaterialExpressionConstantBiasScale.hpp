#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    float Bias; // 0x54
    float Scale; // 0x58
    char pad_5c[0x4];
    static UMaterialExpressionConstantBiasScale* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
