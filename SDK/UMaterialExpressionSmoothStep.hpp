#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSmoothStep : public UMaterialExpression {
public:
    FExpressionInput Min; // 0x40
    FExpressionInput Max; // 0x54
    FExpressionInput Value; // 0x68
    float ConstMin; // 0x7c
    float ConstMax; // 0x80
    float ConstValue; // 0x84
    static UMaterialExpressionSmoothStep* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
