#pragma once
#include <cstdint>
#include "UMaterialExpressionTextureSampleParameter.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter {
public:
    static UMaterialExpressionTextureObjectParameter* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
