#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpressionTextureArray.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTextureArrayParameter : public UMaterialExpressionTextureArray {
public:
    FName ParameterName; // 0x70
    FGuid ExpressionGUID; // 0x78
    FName Group; // 0x88
    static UMaterialExpressionTextureArrayParameter* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
