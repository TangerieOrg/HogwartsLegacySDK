#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSkyAtmosphereLuminance : public UMaterialExpression {
public:
    FExpressionInput WorldPosition; // 0x40
    FExpressionInput WorldDirection; // 0x54
    static UMaterialExpressionSkyAtmosphereLuminance* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
