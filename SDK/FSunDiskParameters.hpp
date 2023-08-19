#pragma once
#include <cstdint>
class UCurveFloat;
class UCurveLinearColor;
#pragma pack(push, 1)
struct FSunDiskParameters {
    bool bAreaBasedEmissive; // 0x0
    char pad_1[0x3];
    float BaseSizeEmissive; // 0x4
    float MinEmissive; // 0x8
    float MaxEmissive; // 0xc
    float EmissiveFactor; // 0x10
    char pad_14[0x4];
    UCurveFloat* DiskOnlyBrightnessModCurve; // 0x18
    UCurveFloat* BrightnessModCurve; // 0x20
    UCurveFloat* ColorTempCurve; // 0x28
    UCurveLinearColor* ColorCurve; // 0x30
    bool bManualColoration; // 0x38
    bool bBlackBodyColorTemp; // 0x39
    bool bNormalizeUnrealColorTemp; // 0x3a
    bool bUseColorTemp; // 0x3b
    bool bUseBrightnessMod; // 0x3c
    char pad_3d[0x3];
    float Size; // 0x40
    float Distance; // 0x44
}; // Size: 0x48
#pragma pack(pop)
