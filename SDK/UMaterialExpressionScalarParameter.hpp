#pragma once
#include <cstdint>
#include "UMaterialExpressionParameter.hpp"
#pragma pack(push, 1)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter {
public:
    float DefaultValue; // 0x58
    bool bUseCustomPrimitiveData; // 0x5c
    uint8_t PrimitiveDataIndex; // 0x5d
    char pad_5e[0x2];
    static UMaterialExpressionScalarParameter* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
