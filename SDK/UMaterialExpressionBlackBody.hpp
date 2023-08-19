#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionBlackBody : public UMaterialExpression {
public:
    FExpressionInput Temp; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionBlackBody* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
