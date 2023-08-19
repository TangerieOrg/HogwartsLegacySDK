#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRenderSettingsPPColorCorrection.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPPColorGrading {
    uint8_t bOverride_WhiteTemp : 1; // 0x0
    uint8_t bOverride_WhiteTint : 1; // 0x0
    uint8_t bOverride_ColorCorrectionShadowsMax : 1; // 0x0
    uint8_t bOverride_ColorCorrectionHighlightsMin : 1; // 0x0
    uint8_t bOverride_SceneColorTint : 1; // 0x0
    uint8_t bOverride_BlueCorrection : 1; // 0x0
    uint8_t bOverride_ExpandGamut : 1; // 0x0
    uint8_t pad_bitfield_0_7 : 1;
    char pad_1[0x3];
    FName Name; // 0x4
    float WhiteTemp; // 0xc
    float WhiteTint; // 0x10
    char pad_14[0xc];
    FRenderSettingsPPColorCorrection ColorGradingGlobal; // 0x20
    FRenderSettingsPPColorCorrection ColorGradingShadows; // 0x80
    float ColorCorrectionShadowsMax; // 0xe0
    char pad_e4[0xc];
    FRenderSettingsPPColorCorrection ColorGradingMidtones; // 0xf0
    FRenderSettingsPPColorCorrection ColorGradingHighlights; // 0x150
    float ColorCorrectionHighlightsMin; // 0x1b0
    FLinearColor SceneColorTint; // 0x1b4
    float BlueCorrection; // 0x1c4
    float ExpandGamut; // 0x1c8
    char pad_1cc[0x4];
}; // Size: 0x1d0
#pragma pack(pop)
