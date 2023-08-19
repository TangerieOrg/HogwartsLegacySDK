#pragma once
#include <cstdint>
#include "EMaterialSceneAttributeInputMode\Type.hpp"
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSceneColor : public UMaterialExpression {
public:
    EMaterialSceneAttributeInputMode::Type InputMode; // 0x40
    char pad_41[0x3];
    FExpressionInput Input; // 0x44
    FExpressionInput OffsetFraction; // 0x58
    FVector2D ConstInput; // 0x6c
    char pad_74[0x4];
    static UMaterialExpressionSceneColor* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
