#pragma once
#include <cstdint>
#include "ELandscapeLayerBlendType.hpp"
#include "FExpressionInput.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLayerBlendInput {
    FName LayerName; // 0x0
    ELandscapeLayerBlendType BlendType; // 0x8
    char pad_9[0x3];
    FExpressionInput LayerInput; // 0xc
    FExpressionInput HeightInput; // 0x20
    float PreviewWeight; // 0x34
    FVector ConstLayerInput; // 0x38
    float ConstHeightInput; // 0x44
}; // Size: 0x48
#pragma pack(pop)
