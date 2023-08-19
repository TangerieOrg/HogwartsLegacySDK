#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression {
public:
    FName ParameterName; // 0x40
    float PreviewWeight; // 0x48
    FGuid ExpressionGUID; // 0x4c
    char pad_5c[0x4];
    static UMaterialExpressionLandscapeLayerSample* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
