#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCharacterLightRigAdjustments {
    FName Name; // 0x0
    float IntensityMod; // 0x8
    float TemperatureMod; // 0xc
    float DayNightLerp; // 0x10
    bool bIntensityMod; // 0x14
    bool bOverrideTemperatureMod; // 0x15
    bool bOverrideDayNightLerp; // 0x16
    char pad_17[0x1];
}; // Size: 0x18
#pragma pack(pop)
