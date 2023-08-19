#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDDY : public UMaterialExpression {
public:
    FExpressionInput Value; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionDDY* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
