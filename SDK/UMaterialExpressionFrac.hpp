#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionFrac : public UMaterialExpression {
public:
    FExpressionInput Input; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionFrac* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
