#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression {
public:
    FExpressionInput Position; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionDistanceToNearestSurface* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
