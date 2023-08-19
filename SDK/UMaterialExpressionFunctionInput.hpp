#pragma once
#include <cstdint>
#include "EFunctionInputType.hpp"
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "FVector4.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionFunctionInput : public UMaterialExpression {
public:
    FExpressionInput Preview; // 0x40
    FName InputName; // 0x54
    char pad_5c[0x4];
    FString Description; // 0x60
    FGuid ID; // 0x70
    EFunctionInputType InputType; // 0x80
    char pad_81[0xf];
    FVector4 PreviewValue; // 0x90
    uint8_t bUsePreviewValueAsDefault : 1; // 0xa0
    uint8_t pad_bitfield_a0_1 : 7;
    char pad_a1[0x3];
    int32_t SortPriority; // 0xa4
    uint8_t bCompilingFunctionPreview : 1; // 0xa8
    uint8_t pad_bitfield_a8_1 : 7;
    char pad_a9[0x17];
    static UMaterialExpressionFunctionInput* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
