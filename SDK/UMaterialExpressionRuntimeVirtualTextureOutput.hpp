#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#pragma pack(push, 1)
class UMaterialExpressionRuntimeVirtualTextureOutput : public UMaterialExpressionCustomOutput {
public:
    FExpressionInput BaseColor; // 0x40
    FExpressionInput Specular; // 0x54
    FExpressionInput Roughness; // 0x68
    FExpressionInput Normal; // 0x7c
    FExpressionInput WorldHeight; // 0x90
    FExpressionInput Opacity; // 0xa4
    FExpressionInput Mask; // 0xb8
    char pad_cc[0x4];
    static UMaterialExpressionRuntimeVirtualTextureOutput* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
