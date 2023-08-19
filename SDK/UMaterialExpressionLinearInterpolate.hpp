#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression {
public:
    FExpressionInput A; // 0x40
    FExpressionInput B; // 0x54
    FExpressionInput Alpha; // 0x68
    float ConstA; // 0x7c
    float ConstB; // 0x80
    float ConstAlpha; // 0x84
    static UMaterialExpressionLinearInterpolate* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
