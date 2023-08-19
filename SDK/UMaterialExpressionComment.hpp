#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionComment : public UMaterialExpression {
public:
    int32_t SizeX; // 0x40
    int32_t SizeY; // 0x44
    FString Text; // 0x48
    FLinearColor CommentColor; // 0x58
    int32_t FontSize; // 0x68
    char pad_6c[0x4];
    static UMaterialExpressionComment* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
