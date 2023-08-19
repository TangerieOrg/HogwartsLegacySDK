#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionParameter : public UMaterialExpression {
public:
    FName ParameterName; // 0x40
    FGuid ExpressionGUID; // 0x48
    static UMaterialExpressionParameter* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
