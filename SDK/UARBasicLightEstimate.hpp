#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UARLightEstimate.hpp"
#pragma pack(push, 1)
class UARBasicLightEstimate : public UARLightEstimate {
public:
    float AmbientIntensityLumens; // 0x28
    float AmbientColorTemperatureKelvin; // 0x2c
    FLinearColor AmbientColor; // 0x30
    static UARBasicLightEstimate* StaticClass();
    float GetAmbientIntensityLumens();
    float GetAmbientColorTemperatureKelvin();
    FLinearColor GetAmbientColor();
}; // Size: 0x40
#pragma pack(pop)
