#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FExpHeightFogParameters.hpp"
#include "FGlobalLightingDirectionalLightState.hpp"
#include "FProbeLightingParameters.hpp"
#include "FSkyAtmosphereParameters.hpp"
#include "FSkyLightLightingParameters.hpp"
#include "FVolumetricCloudsLightingParameters.hpp"
#include "FVolumetricCloudsPresetParameters.hpp"
#include "FVolumetricCloudsWindParameters.hpp"
class UGlobalLightingDefaults;
class UGlobalLightingBlendable;
class UPostProcessComponent;
class USkyAtmosphereComponent;
class UObject;
class UDirectionalLightComponent;
class USkyLightComponent;
class USkyOnlyComponent;
class UExponentialHeightFogComponent;
#pragma pack(push, 1)
class AGlobalLightingMaster : public AActor {
public:
    UGlobalLightingDefaults* Defaults; // 0x248
    TArray<UGlobalLightingBlendable*> OverrideDefaults; // 0x250
    FGlobalLightingDirectionalLightState CurrentDirectionalLight; // 0x260
    FGlobalLightingDirectionalLightState CurrentSecondaryDirectionalLight; // 0x370
    FSkyLightLightingParameters CurrentSkyLight; // 0x480
    FSkyAtmosphereParameters CurrentSkyAtmosphere; // 0x528
    FExpHeightFogParameters CurrentExpHeightFog; // 0x670
    FProbeLightingParameters CurrentProbeLighting; // 0x848
    FVolumetricCloudsLightingParameters CurrentCloudsLighting; // 0x878
    FVolumetricCloudsPresetParameters CurrentCloudsPreset; // 0x8f8
    FVolumetricCloudsWindParameters CurrentCloudsWind; // 0xa08
    char pad_a44[0x92c];
    float SkyAtmosphereHeightOffsetMeters; // 0x1370
    int32_t UseExternalLightingComponents; // 0x1374
    int32_t ControlLightingComponents; // 0x1378
    int32_t HideExtraLightingComponents; // 0x137c
    int32_t ControlFeatures; // 0x1380
    float SkyLightZOffsetMeters; // 0x1384
    float SkyLightMoveThresholdMeters; // 0x1388
    float SkyLightUpdateThresholdSeconds; // 0x138c
    float SkyLightAge; // 0x1390
    float Priority; // 0x1394
    bool bBounded; // 0x1398
    bool bIsMaster; // 0x1399
    char pad_139a[0x6];
    UDirectionalLightComponent* DirectionalLightComponent; // 0x13a0
    UDirectionalLightComponent* SecondaryDirectionalLightComponent; // 0x13a8
    USkyLightComponent* SkyLightComponent; // 0x13b0
    UExponentialHeightFogComponent* ExpHeightFogComponent; // 0x13b8
    USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x13c0
    USkyOnlyComponent* SkyAtmosphereSkyOnlyComponent; // 0x13c8
    char pad_13d0[0x30];
    UPostProcessComponent* PostProcessComponent; // 0x1400
    char pad_1408[0x8];
    static AGlobalLightingMaster* StaticClass();
    static void SetCinematicDefaults(UObject* WorldContextObject, UGlobalLightingDefaults* CinematicDefaults);
    static void GetGlobalLightingMaster(UObject* WorldContextObject, AGlobalLightingMaster*& GlobalLightingMaster);
    static void GetCinematicDefaults(UObject* WorldContextObject, UGlobalLightingDefaults*& CinematicDefaults);
    static void ClearCinematicDefaults(UObject* WorldContextObject);
    void CheckWorld();
    void CaptureSkyLight();
}; // Size: 0x1410
#pragma pack(pop)
