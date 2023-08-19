#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionShadingPathSwitch : public UMaterialExpression {
public:
    FExpressionInput Default; // 0x40
    FExpressionInput Inputs[3]; // 0x54
    static UMaterialExpressionShadingPathSwitch* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
