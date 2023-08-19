#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpressionScalarArray.hpp"
#pragma pack(push, 1)
class UMaterialExpressionScalarArrayParameter : public UMaterialExpressionScalarArray {
public:
    FName ParameterName; // 0x70
    FGuid ExpressionGUID; // 0x78
    FName Group; // 0x88
    static UMaterialExpressionScalarArrayParameter* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
