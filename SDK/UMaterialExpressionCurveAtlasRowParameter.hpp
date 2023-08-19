#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionScalarParameter.hpp"
class UCurveLinearColor;
class UCurveLinearColorAtlas;
#pragma pack(push, 1)
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter {
public:
    UCurveLinearColor* Curve; // 0x60
    UCurveLinearColorAtlas* Atlas; // 0x68
    FExpressionInput InputTime; // 0x70
    char pad_84[0x4];
    static UMaterialExpressionCurveAtlasRowParameter* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
