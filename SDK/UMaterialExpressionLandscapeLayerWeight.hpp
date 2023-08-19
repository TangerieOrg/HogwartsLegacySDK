#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "FVector.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression {
public:
    FExpressionInput Base; // 0x40
    FExpressionInput Layer; // 0x54
    FName ParameterName; // 0x68
    float PreviewWeight; // 0x70
    FVector ConstBase; // 0x74
    FGuid ExpressionGUID; // 0x80
    static UMaterialExpressionLandscapeLayerWeight* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
