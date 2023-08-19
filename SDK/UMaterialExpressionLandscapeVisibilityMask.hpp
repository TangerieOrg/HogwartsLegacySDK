#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression {
public:
    FGuid ExpressionGUID; // 0x40
    static UMaterialExpressionLandscapeVisibilityMask* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
