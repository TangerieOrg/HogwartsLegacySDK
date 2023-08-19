#pragma once
#include <cstdint>
#include "EMaterialPositionTransformSource.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTransformPosition : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    EMaterialPositionTransformSource TransformSourceType; // 0x54
    EMaterialPositionTransformSource TransformType; // 0x55
    char pad_56[0x2];
    static UMaterialExpressionTransformPosition* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
