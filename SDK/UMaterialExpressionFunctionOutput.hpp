#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionFunctionOutput : public UMaterialExpression {
public:
    FName OutputName; // 0x40
    FString Description; // 0x48
    int32_t SortPriority; // 0x58
    FExpressionInput A; // 0x5c
    uint8_t bLastPreviewed : 1; // 0x70
    uint8_t pad_bitfield_70_1 : 7;
    char pad_71[0x3];
    FGuid ID; // 0x74
    char pad_84[0x4];
    static UMaterialExpressionFunctionOutput* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
