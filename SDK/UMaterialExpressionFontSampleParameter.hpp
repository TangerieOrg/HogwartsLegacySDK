#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpressionFontSample.hpp"
#pragma pack(push, 1)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample {
public:
    FName ParameterName; // 0x50
    FGuid ExpressionGUID; // 0x58
    FName Group; // 0x68
    static UMaterialExpressionFontSampleParameter* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
