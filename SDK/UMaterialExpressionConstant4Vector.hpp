#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionConstant4Vector : public UMaterialExpression {
public:
    FLinearColor Constant; // 0x40
    static UMaterialExpressionConstant4Vector* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
