#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression {
public:
    FExpressionInput NormalizedRotationAxis; // 0x40
    FExpressionInput RotationAngle; // 0x54
    FExpressionInput PivotPoint; // 0x68
    FExpressionInput Position; // 0x7c
    float Period; // 0x90
    char pad_94[0x4];
    static UMaterialExpressionRotateAboutAxis* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
