#pragma once
#include <cstdint>
#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "UDayNightLightControllerComponent.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UDayNightTemperatureCurveLightControllerComponent : public UDayNightLightControllerComponent {
public:
    float Desaturation; // 0x280
    char pad_284[0x4];
    UCurveFloat* Intensity; // 0x288
    FDayNightLightControllerDirectionalBoost DirectionalBoost; // 0x290
    bool bUseDirectionalBoost; // 0x29c
    EDayNightLightControllerOp ColorOp; // 0x29d
    EDayNightLightControllerOp IntensityOp; // 0x29e
    bool bAccurateColorTemp; // 0x29f
    static UDayNightTemperatureCurveLightControllerComponent* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
