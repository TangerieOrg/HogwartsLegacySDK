#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UMaterialExpressionParameter.hpp"
#pragma pack(push, 1)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter {
public:
    FLinearColor DefaultValue; // 0x58
    bool bUseCustomPrimitiveData; // 0x68
    uint8_t PrimitiveDataIndex; // 0x69
    char pad_6a[0x6];
    static UMaterialExpressionVectorParameter* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
