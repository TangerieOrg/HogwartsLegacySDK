#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpressionTextureSample.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample {
public:
    FName ParameterName; // 0x60
    FGuid ExpressionGUID; // 0x68
    FName Group; // 0x78
    static UMaterialExpressionTextureSampleParameter* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
