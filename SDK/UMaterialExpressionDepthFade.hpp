#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDepthFade : public UMaterialExpression {
public:
    FExpressionInput InOpacity; // 0x40
    FExpressionInput FadeDistance; // 0x54
    float OpacityDefault; // 0x68
    float FadeDistanceDefault; // 0x6c
    static UMaterialExpressionDepthFade* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
