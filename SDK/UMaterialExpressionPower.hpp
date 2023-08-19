#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionPower : public UMaterialExpression {
public:
    FExpressionInput Base; // 0x40
    FExpressionInput Exponent; // 0x54
    float ConstExponent; // 0x68
    char pad_6c[0x4];
    static UMaterialExpressionPower* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
