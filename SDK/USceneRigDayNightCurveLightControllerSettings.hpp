#pragma once
#include <cstdint>
#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "USceneActionDayNightLightControllerSettings.hpp"
class UCurveLinearColor;
class UCurveFloat;
#pragma pack(push, 1)
class USceneRigDayNightCurveLightControllerSettings : public USceneActionDayNightLightControllerSettings {
public:
    UCurveLinearColor* Color; // 0x38
    float Desaturation; // 0x40
    char pad_44[0x4];
    UCurveFloat* Intensity; // 0x48
    FDayNightLightControllerDirectionalBoost DirectionalBoost; // 0x50
    bool bUseDirectionalBoost; // 0x5c
    EDayNightLightControllerOp ColorOp; // 0x5d
    EDayNightLightControllerOp IntensityOp; // 0x5e
    char pad_5f[0x1];
    static USceneRigDayNightCurveLightControllerSettings* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
