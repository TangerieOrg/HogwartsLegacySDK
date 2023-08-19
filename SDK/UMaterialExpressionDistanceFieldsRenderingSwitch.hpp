#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDistanceFieldsRenderingSwitch : public UMaterialExpression {
public:
    FExpressionInput No; // 0x40
    FExpressionInput Yes; // 0x54
    static UMaterialExpressionDistanceFieldsRenderingSwitch* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
