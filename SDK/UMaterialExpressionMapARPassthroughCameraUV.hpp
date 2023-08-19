#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionMapARPassthroughCameraUV : public UMaterialExpression {
public:
    FExpressionInput Coordinates; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionMapARPassthroughCameraUV* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
