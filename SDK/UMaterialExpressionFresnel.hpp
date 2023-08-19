#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionFresnel : public UMaterialExpression {
public:
    FExpressionInput ExponentIn; // 0x40
    float Exponent; // 0x54
    FExpressionInput BaseReflectFractionIn; // 0x58
    float BaseReflectFraction; // 0x6c
    FExpressionInput Normal; // 0x70
    char pad_84[0x4];
    static UMaterialExpressionFresnel* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
