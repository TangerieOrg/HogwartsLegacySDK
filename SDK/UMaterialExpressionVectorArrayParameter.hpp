#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpressionVectorArray.hpp"
#pragma pack(push, 1)
class UMaterialExpressionVectorArrayParameter : public UMaterialExpressionVectorArray {
public:
    FName ParameterName; // 0x70
    FGuid ExpressionGUID; // 0x78
    FName Group; // 0x88
    static UMaterialExpressionVectorArrayParameter* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
