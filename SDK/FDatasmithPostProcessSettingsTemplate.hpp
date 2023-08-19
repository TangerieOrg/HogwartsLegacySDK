#pragma once
#include <cstdint>
#include "EAutoExposureMethod.hpp"
#include "FLinearColor.hpp"
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FDatasmithPostProcessSettingsTemplate {
    uint8_t bOverride_WhiteTemp : 1; // 0x0
    uint8_t bOverride_ColorSaturation : 1; // 0x0
    uint8_t bOverride_VignetteIntensity : 1; // 0x0
    uint8_t bOverride_FilmWhitePoint : 1; // 0x0
    uint8_t bOverride_AutoExposureMethod : 1; // 0x0
    uint8_t bOverride_CameraISO : 1; // 0x0
    uint8_t bOverride_CameraShutterSpeed : 1; // 0x0
    uint8_t pad_bitfield_0_7 : 1;
    char pad_1[0x3];
    uint8_t bOverride_DepthOfFieldFstop : 1; // 0x4
    uint8_t pad_bitfield_4_1 : 7;
    char pad_5[0x3];
    float WhiteTemp; // 0x8
    float VignetteIntensity; // 0xc
    FLinearColor FilmWhitePoint; // 0x10
    FVector4 ColorSaturation; // 0x20
    EAutoExposureMethod AutoExposureMethod; // 0x30
    char pad_31[0x3];
    float CameraISO; // 0x34
    float CameraShutterSpeed; // 0x38
    float DepthOfFieldFstop; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
