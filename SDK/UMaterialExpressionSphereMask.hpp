#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSphereMask : public UMaterialExpression {
public:
    FExpressionInput A; // 0x40
    FExpressionInput B; // 0x54
    FExpressionInput Radius; // 0x68
    FExpressionInput Hardness; // 0x7c
    float AttenuationRadius; // 0x90
    float HardnessPercent; // 0x94
    static UMaterialExpressionSphereMask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
