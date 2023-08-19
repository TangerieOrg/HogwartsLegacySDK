#pragma once
#include <cstdint>
#include "EBloomMethod.hpp"
#include "FLinearColor.hpp"
#include "FRenderSettingsPPBloomAdvanced.hpp"
class UTexture2D;
class UTexture;
#pragma pack(push, 1)
struct FRenderSettingsPPBloom {
    uint8_t bOverride_Method : 1; // 0x0
    uint8_t bOverride_Intensity : 1; // 0x0
    uint8_t bOverride_Threshold : 1; // 0x0
    uint8_t bOverride_Cross : 1; // 0x0
    uint8_t bOverride_ConvolutionTexture : 1; // 0x0
    uint8_t bOverride_DirtMaskIntensity : 1; // 0x0
    uint8_t bOverride_DirtMaskTint : 1; // 0x0
    uint8_t bOverride_DirtMask : 1; // 0x0
    char pad_1[0x3];
    FName Name; // 0x4
    EBloomMethod Method; // 0xc
    char pad_d[0x3];
    float Intensity; // 0x10
    float Threshold; // 0x14
    float Cross; // 0x18
    char pad_1c[0x4];
    UTexture2D* ConvolutionTexture; // 0x20
    FRenderSettingsPPBloomAdvanced Advanced; // 0x28
    char pad_c4[0x4];
    UTexture* DirtMask; // 0xc8
    float DirtMaskIntensity; // 0xd0
    FLinearColor DirtMaskTint; // 0xd4
    char pad_e4[0x4];
}; // Size: 0xe8
#pragma pack(pop)
