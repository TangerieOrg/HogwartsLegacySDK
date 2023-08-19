#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionGIReplace : public UMaterialExpression {
public:
    FExpressionInput Default; // 0x40
    FExpressionInput StaticIndirect; // 0x54
    FExpressionInput DynamicIndirect; // 0x68
    char pad_7c[0x4];
    static UMaterialExpressionGIReplace* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
