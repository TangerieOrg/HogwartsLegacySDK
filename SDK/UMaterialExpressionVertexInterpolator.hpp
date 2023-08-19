#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#pragma pack(push, 1)
class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput {
public:
    FExpressionInput Input; // 0x40
    char pad_54[0xc];
    static UMaterialExpressionVertexInterpolator* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
