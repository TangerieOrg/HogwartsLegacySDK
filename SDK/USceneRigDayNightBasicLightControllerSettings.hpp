#pragma once
#include <cstdint>
#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "USceneActionDayNightLightControllerSettings.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class USceneRigDayNightBasicLightControllerSettings : public USceneActionDayNightLightControllerSettings {
public:
    FLinearColor DayColorMod; // 0x38
    FLinearColor NightColorMod; // 0x48
    UCurveLinearColor* Night0Day1ColorMod; // 0x58
    float SunLightDesaturation; // 0x60
    float DayIntensityMod; // 0x64
    float NightIntensityMod; // 0x68
    FVector2D SunLightMinMaxInensityFactor; // 0x6c
    FDayNightLightControllerDirectionalBoost SunDirectionalBoost; // 0x74
    float StartNightSunAngle; // 0x80
    float FullNightSunAngle; // 0x84
    uint8_t bModulateColor : 1; // 0x88
    uint8_t bModulateIntensity : 1; // 0x88
    uint8_t bUseSunDirectionalBoost : 1; // 0x88
    uint8_t bUseSunLightColor : 1; // 0x88
    uint8_t bAttenuateDayIntensityWithSunIntensity : 1; // 0x88
    uint8_t bUseModColorCurve : 1; // 0x88
    uint8_t pad_bitfield_88_6 : 2;
    char pad_89[0x7];
    static USceneRigDayNightBasicLightControllerSettings* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
