#pragma once
#include <cstdint>
#include "FMaterialParameterInfo.hpp"
#include "UMaterialExpression.hpp"
class UMaterialFunctionInterface;
#pragma pack(push, 1)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression {
public:
    UMaterialFunctionInterface* MaterialFunction; // 0x40
    FMaterialParameterInfo FunctionParameterInfo; // 0x48
    static UMaterialExpressionMaterialFunctionCall* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
