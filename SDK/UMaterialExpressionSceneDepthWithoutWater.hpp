#pragma once
#include <cstdint>
#include "EMaterialSceneAttributeInputMode\Type.hpp"
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSceneDepthWithoutWater : public UMaterialExpression {
public:
    EMaterialSceneAttributeInputMode::Type InputMode; // 0x40
    char pad_41[0x3];
    FExpressionInput Input; // 0x44
    FVector2D ConstInput; // 0x58
    float FallbackDepth; // 0x60
    char pad_64[0x4];
    static UMaterialExpressionSceneDepthWithoutWater* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
