#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionRuntimeVirtualTextureReplace : public UMaterialExpression {
public:
    FExpressionInput Default; // 0x40
    FExpressionInput VirtualTextureOutput; // 0x54
    static UMaterialExpressionRuntimeVirtualTextureReplace* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
