#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionConstant : public UMaterialExpression {
public:
    float R; // 0x40
    char pad_44[0x4];
    static UMaterialExpressionConstant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
