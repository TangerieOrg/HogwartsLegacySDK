#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression {
public:
    FExpressionInput InXY; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionDeriveNormalZ* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
