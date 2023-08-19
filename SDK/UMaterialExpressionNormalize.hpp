#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionNormalize : public UMaterialExpression {
public:
    FExpressionInput VectorInput; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionNormalize* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
