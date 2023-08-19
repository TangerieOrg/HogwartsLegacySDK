#pragma once
#include <cstdint>
#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UDayNightLightControllerComponent.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class UDayNightBasicLightControllerComponent : public UDayNightLightControllerComponent {
public:
    char pad_280[0x8];
    FLinearColor NightColorMod; // 0x288
    UCurveLinearColor* Night0Day1ColorMod; // 0x298
    float SunLightDesaturation; // 0x2a0
    float DayIntensityMod; // 0x2a4
    float NightIntensityMod; // 0x2a8
    FVector2D SunLightMinMaxInensityFactor; // 0x2ac
    FDayNightLightControllerDirectionalBoost SunDirectionalBoost; // 0x2b4
    float StartNightSunAngle; // 0x2c0
    float FullNightSunAngle; // 0x2c4
    uint8_t bModulateColor : 1; // 0x2c8
    uint8_t bModulateIntensity : 1; // 0x2c8
    uint8_t bUseSunDirectionalBoost : 1; // 0x2c8
    uint8_t bUseSunLightColor : 1; // 0x2c8
    uint8_t bAttenuateDayIntensityWithSunIntensity : 1; // 0x2c8
    uint8_t bUseModColorCurve : 1; // 0x2c8
    uint8_t pad_bitfield_2c8_6 : 2;
    char pad_2c9[0x7];
    static UDayNightBasicLightControllerComponent* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
