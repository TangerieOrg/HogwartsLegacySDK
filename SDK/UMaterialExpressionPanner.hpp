#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionPanner : public UMaterialExpression {
public:
    FExpressionInput Coordinate; // 0x40
    FExpressionInput Time; // 0x54
    FExpressionInput Speed; // 0x68
    float SpeedX; // 0x7c
    float SpeedY; // 0x80
    uint32_t ConstCoordinate; // 0x84
    bool bFractionalPart; // 0x88
    char pad_89[0x7];
    static UMaterialExpressionPanner* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
