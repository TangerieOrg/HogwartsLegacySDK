#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLogarithm2 : public UMaterialExpression {
public:
    FExpressionInput X; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionLogarithm2* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
