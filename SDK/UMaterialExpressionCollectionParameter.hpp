#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
class UMaterialParameterCollection;
#pragma pack(push, 1)
class UMaterialExpressionCollectionParameter : public UMaterialExpression {
public:
    UMaterialParameterCollection* Collection; // 0x40
    FName ParameterName; // 0x48
    FGuid ParameterId; // 0x50
    static UMaterialExpressionCollectionParameter* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
