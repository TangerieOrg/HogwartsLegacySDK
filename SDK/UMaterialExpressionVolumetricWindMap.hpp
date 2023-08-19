#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionVolumetricWindMap : public UMaterialExpression {
public:
    FExpressionInput Coordinate; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionVolumetricWindMap* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
