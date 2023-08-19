#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UDayNightLightControllerComponent.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class UDayNightLocalLightControllerComponent : public UDayNightLightControllerComponent {
public:
    char pad_280[0x8];
    FLinearColor NightColorMod; // 0x288
    UCurveLinearColor* Night0Day1ColorMod; // 0x298
    float DayIntensityMod; // 0x2a0
    float NightIntensityMod; // 0x2a4
    float StartNightSunAngle; // 0x2a8
    float FullNightSunAngle; // 0x2ac
    uint8_t bModulateColor : 1; // 0x2b0
    uint8_t bModulateIntensity : 1; // 0x2b0
    uint8_t bUseModColorCurve : 1; // 0x2b0
    uint8_t pad_bitfield_2b0_3 : 5;
    char pad_2b1[0xf];
    static UDayNightLocalLightControllerComponent* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
