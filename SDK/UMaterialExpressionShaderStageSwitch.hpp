#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionShaderStageSwitch : public UMaterialExpression {
public:
    FExpressionInput PixelShader; // 0x40
    FExpressionInput VertexShader; // 0x54
    static UMaterialExpressionShaderStageSwitch* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
