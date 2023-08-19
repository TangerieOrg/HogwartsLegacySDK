#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionDynamicParameter : public UMaterialExpression {
public:
    TArray<FString> ParamNames; // 0x40
    FLinearColor DefaultValue; // 0x50
    uint32_t ParameterIndex; // 0x60
    char pad_64[0x4];
    static UMaterialExpressionDynamicParameter* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
