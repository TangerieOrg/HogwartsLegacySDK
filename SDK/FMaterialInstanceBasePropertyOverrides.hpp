#pragma once
#include <cstdint>
#include "EBlendMode.hpp"
#include "EMaterialShadingModel.hpp"
#pragma pack(push, 1)
struct FMaterialInstanceBasePropertyOverrides {
    uint8_t bOverride_OpacityMaskClipValue : 1; // 0x0
    uint8_t bOverride_BlendMode : 1; // 0x0
    uint8_t bOverride_ShadingModel : 1; // 0x0
    uint8_t bOverride_DitheredLODTransition : 1; // 0x0
    uint8_t bOverride_CastDynamicShadowAsMasked : 1; // 0x0
    uint8_t bOverride_TwoSided : 1; // 0x0
    uint8_t TwoSided : 1; // 0x0
    uint8_t DitheredLODTransition : 1; // 0x0
    uint8_t bCastDynamicShadowAsMasked : 1; // 0x1
    uint8_t pad_bitfield_1_1 : 7;
    EBlendMode BlendMode; // 0x2
    EMaterialShadingModel ShadingModel; // 0x3
    float OpacityMaskClipValue; // 0x4
}; // Size: 0x8
#pragma pack(pop)
