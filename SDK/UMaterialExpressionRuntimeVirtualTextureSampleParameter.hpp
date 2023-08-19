#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpressionRuntimeVirtualTextureSample.hpp"
#pragma pack(push, 1)
class UMaterialExpressionRuntimeVirtualTextureSampleParameter : public UMaterialExpressionRuntimeVirtualTextureSample {
public:
    FName ParameterName; // 0x90
    FGuid ExpressionGUID; // 0x98
    FName Group; // 0xa8
    static UMaterialExpressionRuntimeVirtualTextureSampleParameter* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
