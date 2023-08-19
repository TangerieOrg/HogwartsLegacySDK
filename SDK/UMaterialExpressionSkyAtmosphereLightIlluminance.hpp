#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression {
public:
    int32_t LightIndex; // 0x40
    FExpressionInput WorldPosition; // 0x44
    static UMaterialExpressionSkyAtmosphereLightIlluminance* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
