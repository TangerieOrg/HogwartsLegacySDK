#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionRotator : public UMaterialExpression {
public:
    FExpressionInput Coordinate; // 0x40
    FExpressionInput Time; // 0x54
    float CenterX; // 0x68
    float CenterY; // 0x6c
    float Speed; // 0x70
    uint32_t ConstCoordinate; // 0x74
    static UMaterialExpressionRotator* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
