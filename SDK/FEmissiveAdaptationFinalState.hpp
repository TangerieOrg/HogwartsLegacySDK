#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEmissiveAdaptationFinalState {
    float MinExposureEV100; // 0x0
    float MaxExposureEV100; // 0x4
    float BiasPow2; // 0x8
    float MinExposure; // 0xc
    float MaxExposure; // 0x10
    float Bias; // 0x14
    float InverseBias; // 0x18
    float LastFrameAverageLuminanceEV100; // 0x1c
    float LastFrameAutoExposureEV100; // 0x20
    float LastFrameAverageLuminanceFilteredEV100; // 0x24
    float LastFrameAutoExposureFilteredEV100; // 0x28
    float LastFrameAverageLuminance; // 0x2c
    float LastFrameAutoExposure; // 0x30
    float LastFrameAverageLuminanceFiltered; // 0x34
    float LastFrameAutoExposureFiltered; // 0x38
    float BloomTargetEV100; // 0x3c
    float BloomFinalMultiplier; // 0x40
    float BloomFinalMultiplierOutdoorsDaytime; // 0x44
    float BloomUncorrectedMultiplier; // 0x48
    float BloomMultiplierMin; // 0x4c
    float BloomMultiplierMax; // 0x50
    float BloomCorrectionFactor; // 0x54
    float AutoFinalMultiplier; // 0x58
    float AutoFinalMultiplierOutdoorsDaytime; // 0x5c
    float LuminanceFinalMultiplier; // 0x60
    float LuminanceFinalMultiplierFiltered; // 0x64
    float LuminanceMultiplierMin; // 0x68
    float LuminanceMultiplierMax; // 0x6c
    float Indoors; // 0x70
    float FilteredIndoors; // 0x74
    float OutdoorsDayTime; // 0x78
    float OutdoorsDayTimeBoostEV; // 0x7c
    float OutdoorsDayTimeBoostFactor; // 0x80
    bool bEnabled; // 0x84
    char pad_85[0x3];
}; // Size: 0x88
#pragma pack(pop)
