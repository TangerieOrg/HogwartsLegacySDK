#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionScalarArray : public UMaterialExpression {
public:
    char pad_40[0x18];
    TArray<float> Values; // 0x58
    bool bHideIndexedPins; // 0x68
    char pad_69[0x7];
    static UMaterialExpressionScalarArray* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
