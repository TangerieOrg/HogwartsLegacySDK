#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSobol : public UMaterialExpression {
public:
    FExpressionInput Cell; // 0x40
    FExpressionInput Index; // 0x54
    FExpressionInput Seed; // 0x68
    uint32_t ConstIndex; // 0x7c
    FVector2D ConstSeed; // 0x80
    static UMaterialExpressionSobol* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
