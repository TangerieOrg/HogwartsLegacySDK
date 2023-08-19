#pragma once
#include <cstdint>
#include "EAutoExposureMethod.hpp"
class UCurveFloat;
class UTexture;
#pragma pack(push, 1)
struct FCameraExposureSettings {
    EAutoExposureMethod Method; // 0x0
    char pad_1[0x3];
    float LowPercent; // 0x4
    float HighPercent; // 0x8
    float MinBrightness; // 0xc
    float MaxBrightness; // 0x10
    float SpeedUp; // 0x14
    float SpeedDown; // 0x18
    float Bias; // 0x1c
    UCurveFloat* BiasCurve; // 0x20
    UTexture* MeterMask; // 0x28
    float HistogramLogMin; // 0x30
    float HistogramLogMax; // 0x34
    float CalibrationConstant; // 0x38
    uint8_t ApplyPhysicalCameraExposure : 1; // 0x3c
    uint8_t pad_bitfield_3c_1 : 7;
    char pad_3d[0x3];
}; // Size: 0x40
#pragma pack(pop)
