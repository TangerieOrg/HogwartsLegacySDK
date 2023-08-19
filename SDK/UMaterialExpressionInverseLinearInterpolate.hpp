#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionInverseLinearInterpolate : public UMaterialExpression {
public:
    FExpressionInput A; // 0x40
    FExpressionInput B; // 0x54
    FExpressionInput Value; // 0x68
    float ConstA; // 0x7c
    float ConstB; // 0x80
    float ConstValue; // 0x84
    bool bClampResult; // 0x88
    char pad_89[0x7];
    static UMaterialExpressionInverseLinearInterpolate* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
