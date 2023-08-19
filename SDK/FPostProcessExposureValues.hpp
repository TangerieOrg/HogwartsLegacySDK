#pragma once
#include <cstdint>
class UCurveFloat;
class UTexture;
#pragma pack(push, 1)
struct FPostProcessExposureValues {
    char pad_0[0x8];
    float AutoExposureMinBrightness; // 0x8
    float AutoExposureMaxBrightness; // 0xc
    float AutoExposureBiasBase; // 0x10
    float AutoExposureBiasVFX; // 0x14
    UCurveFloat* AutoExposureBiasCurve; // 0x18
    float AutoExposureSpeedUp; // 0x20
    float AutoExposureSpeedDown; // 0x24
    float HistogramLogMin; // 0x28
    float HistogramLogMax; // 0x2c
    float BloomIntensity; // 0x30
    float BloomThreshold; // 0x34
    UTexture* AutoExposureMeterMask; // 0x38
}; // Size: 0x40
#pragma pack(pop)
