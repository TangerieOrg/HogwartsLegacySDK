#pragma once
#include <cstdint>
#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightSkyAtmosphereComputeParams.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UDayNightLightControllerComponent.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UDayNightAtmosphereLightControllerComponent : public UDayNightLightControllerComponent {
public:
    char pad_280[0x70];
    UCurveFloat* Intensity; // 0x2f0
    float BaseIntensityFactor; // 0x2f8
    char pad_2fc[0x4];
    UCurveFloat* Desaturation; // 0x300
    EDayNightLightControllerOp ColorOp; // 0x308
    EDayNightLightControllerOp IntensityOp; // 0x309
    char pad_30a[0x1e];
    FLinearColor CachedZenithTransmission; // 0x328
    FVector AllLightsDirection; // 0x338
    bool bCheckedLightsSameDirection; // 0x344
    char pad_345[0xb];
    static UDayNightAtmosphereLightControllerComponent* StaticClass();
}; // Size: 0x350
#pragma pack(pop)
