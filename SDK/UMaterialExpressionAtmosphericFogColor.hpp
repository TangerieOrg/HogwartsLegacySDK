#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression {
public:
    FExpressionInput WorldPosition; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionAtmosphericFogColor* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
