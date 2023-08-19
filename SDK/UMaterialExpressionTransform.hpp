#pragma once
#include <cstdint>
#include "EMaterialVectorCoordTransform.hpp"
#include "EMaterialVectorCoordTransformSource.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTransform : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
    EMaterialVectorCoordTransform TransformType; // 0x55
    char pad_56[0x2];
    static UMaterialExpressionTransform* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
