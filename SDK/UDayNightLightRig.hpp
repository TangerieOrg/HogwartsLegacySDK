#pragma once
#include <cstdint>
#include "FLightParameterSmoothingDiscontinuitySettings.hpp"
#include "UDataAsset.hpp"
class UDayLightRig;
class UNightLightRig;
class ULightSettingsLerpControl;
class UCurveFloat;
class ULightDirectionLerpControl;
class ULightSettingsModCurve;
class ULightParameterSmoothing;
class UDayNightExpHeightFogAdjustments;
#pragma pack(push, 1)
class UDayNightLightRig : public UDataAsset {
public:
    UDayLightRig* Day; // 0x30
    UNightLightRig* Night; // 0x38
    float MinimumDirectionalLightIntensity; // 0x40
    char pad_44[0x4];
    UCurveFloat* SunAltitudeInfluenceCurve; // 0x48
    UCurveFloat* MoonAltitudeInfluenceCurve; // 0x50
    TArray<ULightSettingsLerpControl*> DayNightLerp; // 0x58
    ULightDirectionLerpControl* DayNightLerpDirection; // 0x68
    int32_t BlendOps; // 0x70
    char pad_74[0x4];
    TArray<ULightSettingsModCurve*> SunAltitudeMods; // 0x78
    TArray<ULightSettingsModCurve*> NormalizedTimeMods; // 0x88
    FLightParameterSmoothingDiscontinuitySettings DiscontinuitySettings; // 0x98
    char pad_a4[0x4];
    TArray<ULightParameterSmoothing*> SmoothingMods; // 0xa8
    UDayNightExpHeightFogAdjustments* ExpHeightFogAdjustments; // 0xb8
    static UDayNightLightRig* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
