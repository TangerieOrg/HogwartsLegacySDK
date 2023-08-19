#pragma once
#include <cstdint>
#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightSkyAtmosphereComputeParams.hpp"
#include "USceneActionDayNightLightControllerSettings.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class USceneRigDayNightAtmosphereLightControllerSettings : public USceneActionDayNightLightControllerSettings {
public:
    FDayNightLightSkyAtmosphereComputeParams SkyParams; // 0x38
    UCurveFloat* Intensity; // 0xb0
    float BaseIntensityFactor; // 0xb8
    char pad_bc[0x4];
    UCurveFloat* Desaturation; // 0xc0
    EDayNightLightControllerOp ColorOp; // 0xc8
    EDayNightLightControllerOp IntensityOp; // 0xc9
    char pad_ca[0x6];
    static USceneRigDayNightAtmosphereLightControllerSettings* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
