#pragma once
#include <cstdint>
#include "EChannelMaskParameterColor\Type.hpp"
#include "UMaterialExpressionVectorParameter.hpp"
#pragma pack(push, 1)
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter {
public:
    EChannelMaskParameterColor::Type MaskChannel; // 0x70
    char pad_71[0x7];
    static UMaterialExpressionChannelMaskParameter* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
