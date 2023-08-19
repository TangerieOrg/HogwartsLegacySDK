#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FLayerBlendInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression {
public:
    TArray<FLayerBlendInput> Layers; // 0x40
    FGuid ExpressionGUID; // 0x50
    static UMaterialExpressionLandscapeLayerBlend* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
