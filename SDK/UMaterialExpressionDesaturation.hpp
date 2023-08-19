#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDesaturation : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    FExpressionInput Fraction; // 0x54
    FLinearColor LuminanceFactors; // 0x68
    static UMaterialExpressionDesaturation* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
