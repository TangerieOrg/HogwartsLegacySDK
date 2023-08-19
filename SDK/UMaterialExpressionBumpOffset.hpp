#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionBumpOffset : public UMaterialExpression {
public:
    FExpressionInput Coordinate; // 0x40
    FExpressionInput Height; // 0x54
    FExpressionInput HeightRatioInput; // 0x68
    float HeightRatio; // 0x7c
    float ReferencePlane; // 0x80
    uint32_t ConstCoordinate; // 0x84
    static UMaterialExpressionBumpOffset* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
