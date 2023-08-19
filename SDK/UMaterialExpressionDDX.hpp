#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDDX : public UMaterialExpression {
public:
    FExpressionInput Value; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionDDX* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
