#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDayNightCSVReportOptions {
    int32_t GeneralOptions; // 0x0
    int32_t DayNightOptions; // 0x4
    int32_t LightRigOptions; // 0x8
    int32_t LightingOptions; // 0xc
    int32_t AtmosphereOptions; // 0x10
    int32_t FogOptions; // 0x14
    int32_t ExposureOptions; // 0x18
    int32_t EmissiveAdaptationOptions; // 0x1c
    bool bEverything; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
