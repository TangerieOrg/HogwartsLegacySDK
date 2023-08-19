#pragma once
#include <cstdint>
class UTexture;
#pragma pack(push, 1)
struct FRenderSettingsPPExposureAdvanced {
    uint8_t bOverride_AutoExposureLowPercent : 1; // 0x0
    uint8_t bOverride_AutoExposureHighPercent : 1; // 0x0
    uint8_t bOverride_HistogramLogMin : 1; // 0x0
    uint8_t bOverride_HistogramLogMax : 1; // 0x0
    uint8_t bOverride_AutoExposureMeterMask : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0x3];
    float AutoExposureLowPercent; // 0x4
    float AutoExposureHighPercent; // 0x8
    float HistogramLogMin; // 0xc
    float HistogramLogMax; // 0x10
    char pad_14[0x4];
    UTexture* AutoExposureMeterMask; // 0x18
}; // Size: 0x20
#pragma pack(pop)
