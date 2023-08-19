#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTemporalSobol : public UMaterialExpression {
public:
    FExpressionInput Index; // 0x40
    FExpressionInput Seed; // 0x54
    uint32_t ConstIndex; // 0x68
    FVector2D ConstSeed; // 0x6c
    char pad_74[0x4];
    static UMaterialExpressionTemporalSobol* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
