#pragma once
#include <cstdint>
#include "EFontImportCharacterSet.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FFontImportOptionsData {
    FString FontName; // 0x0
    float Height; // 0x10
    uint8_t bEnableAntialiasing : 1; // 0x14
    uint8_t bEnableBold : 1; // 0x14
    uint8_t bEnableItalic : 1; // 0x14
    uint8_t bEnableUnderline : 1; // 0x14
    uint8_t bAlphaOnly : 1; // 0x14
    uint8_t pad_bitfield_14_5 : 3;
    char pad_15[0x3];
    EFontImportCharacterSet CharacterSet; // 0x18
    char pad_19[0x7];
    FString Chars; // 0x20
    FString UnicodeRange; // 0x30
    FString CharsFilePath; // 0x40
    FString CharsFileWildcard; // 0x50
    uint8_t bCreatePrintableOnly : 1; // 0x60
    uint8_t bIncludeASCIIRange : 1; // 0x60
    uint8_t pad_bitfield_60_2 : 6;
    char pad_61[0x3];
    FLinearColor ForegroundColor; // 0x64
    uint8_t bEnableDropShadow : 1; // 0x74
    uint8_t pad_bitfield_74_1 : 7;
    char pad_75[0x3];
    int32_t TexturePageWidth; // 0x78
    int32_t TexturePageMaxHeight; // 0x7c
    int32_t XPadding; // 0x80
    int32_t YPadding; // 0x84
    int32_t ExtendBoxTop; // 0x88
    int32_t ExtendBoxBottom; // 0x8c
    int32_t ExtendBoxRight; // 0x90
    int32_t ExtendBoxLeft; // 0x94
    uint8_t bEnableLegacyMode : 1; // 0x98
    uint8_t pad_bitfield_98_1 : 7;
    char pad_99[0x3];
    int32_t Kerning; // 0x9c
    uint8_t bUseDistanceFieldAlpha : 1; // 0xa0
    uint8_t pad_bitfield_a0_1 : 7;
    char pad_a1[0x3];
    int32_t DistanceFieldScaleFactor; // 0xa4
    float DistanceFieldScanRadiusScale; // 0xa8
    char pad_ac[0x4];
}; // Size: 0xb0
#pragma pack(pop)
