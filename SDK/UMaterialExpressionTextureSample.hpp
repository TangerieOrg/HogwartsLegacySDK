#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionTextureBase.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase {
public:
    FExpressionInput Coordinates; // 0x48
    char pad_5c[0x4];
    static UMaterialExpressionTextureSample* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
