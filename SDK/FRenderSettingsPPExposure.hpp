#pragma once
#include <cstdint>
#include "EAutoExposureMethod.hpp"
#include "FRenderSettingsPPExposureAdvanced.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPPExposure {
    uint8_t bOverride_AutoExposureMethod : 1; // 0x0
    uint8_t bOverride_AutoExposureMinBrightness : 1; // 0x0
    uint8_t bOverride_AutoExposureMaxBrightness : 1; // 0x0
    uint8_t bOverride_AutoExposureSpeedUp : 1; // 0x0
    uint8_t bOverride_AutoExposureSpeedDown : 1; // 0x0
    uint8_t bOverride_AutoExposureBias : 1; // 0x0
    uint8_t pad_bitfield_0_6 : 2;
    char pad_1[0x3];
    FName Name; // 0x4
    EAutoExposureMethod AutoExposureMethod; // 0xc
    char pad_d[0x3];
    float AutoExposureMinBrightness; // 0x10
    float AutoExposureMaxBrightness; // 0x14
    float AutoExposureSpeedUp; // 0x18
    float AutoExposureSpeedDown; // 0x1c
    float AutoExposureBias; // 0x20
    char pad_24[0x4];
    FRenderSettingsPPExposureAdvanced Advanced; // 0x28
}; // Size: 0x48
#pragma pack(pop)
