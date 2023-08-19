#pragma once
#include <cstdint>
#include "EDepthOfFieldFunctionValue.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression {
public:
    EDepthOfFieldFunctionValue FunctionValue; // 0x40
    char pad_41[0x3];
    FExpressionInput Depth; // 0x44
    static UMaterialExpressionDepthOfFieldFunction* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
