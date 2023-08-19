#pragma once
#include <cstdint>
#include "ESeasonEnum.hpp"
#include "EWeatherSurfaceStormType.hpp"
#include "FBlendDomain.hpp"
#include "FWeatherActionContext.hpp"
#include "FWeatherDefinitionName.hpp"
#include "FWeatherEnvironmentalGlobalsExtras.hpp"
#include "FWeatherOverrideStack.hpp"
#include "FWeatherSequenceOrigin.hpp"
#include "FWorldWeatherDecalTrackers.hpp"
#include "UActorComponent.hpp"
class ULiveWeatherSequenceInfo;
class UWeatherStorm;
class UGlobalLightingBlendableWeatherClouds;
class UWorldWeatherDecalDefinitions;
class UGlobalLightingBlendableWeatherFog;
class UGlobalLightingBlendable;
class UWeatherSequencePendingLoad;
class USceneComponent;
class AActor;
class UObject;
struct FWeatherOverrideStackEntry;
struct FWindParametersInstant;
#pragma pack(push, 1)
class UWeatherMasterComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    ULiveWeatherSequenceInfo* CurrentWeatherSequence; // 0xd0
    FWeatherActionContext ActionContext; // 0xd8
    FWeatherEnvironmentalGlobalsExtras EnvironmentalGlobalsExtras; // 0x9b8
    UWeatherStorm* CurrentStorm; // 0xa48
    FWeatherDefinitionName DefaultWeather; // 0xa50
    FWeatherSequenceOrigin OverrideWeather; // 0xa60
    FWeatherSequenceOrigin ConsoleWeather; // 0xa80
    UWorldWeatherDecalDefinitions* WorldDecals; // 0xaa0
    FWorldWeatherDecalTrackers WorldDecalTrackers; // 0xaa8
    float CloudsBlendablePriority; // 0xaf8
    char pad_afc[0x4];
    FBlendDomain FogBlendDomain; // 0xb00
    float FogBlendablePriority; // 0xb38
    char pad_b3c[0x4];
    UGlobalLightingBlendable* OverrideOvercastBlendable; // 0xb40
    FBlendDomain OvercastBlendDomain; // 0xb48
    float OvercastBlendablePriority; // 0xb80
    bool bDisableCloudsBlendable; // 0xb84
    bool bDisableFogBlendable; // 0xb85
    bool bDisableOvercastBlendable; // 0xb86
    char pad_b87[0x1];
    FWeatherOverrideStack WeatherOverrideStack; // 0xb88
    FName CurrentLocalSequence; // 0xb98
    USceneComponent* FXRoot; // 0xba0
    UGlobalLightingBlendableWeatherFog* FogBlendable; // 0xba8
    UGlobalLightingBlendableWeatherClouds* CloudsBlendable; // 0xbb0
    TArray<UWeatherSequencePendingLoad*> PendingLoadQueue; // 0xbb8
    uint32_t CurrentPlayingID; // 0xbc8
    char pad_bcc[0xa4];
    bool bWeatherIsRunning; // 0xc70
    ESeasonEnum CurrentSeason; // 0xc71
    char pad_c72[0x6];
    static UWeatherMasterComponent* StaticClass();
    static void WeatherFXRemoveFromExtraSwaps(AActor* Actor);
    static void WeatherFXIsInExtraSwaps(AActor* Actor, bool& bIsInList);
    static void WeatherFXAddToExtraSwaps(AActor* Actor, float OverrideSwapDistanceMeters, bool bAlwaysSwap);
    static void SetOverrideWeather(UObject* WorldContextObject, FName NewOverrideWeather, bool bInstantChange);
    static void SetDefaultWeather(UObject* WorldContextObject, FName NewDefaultWeather);
    static void PushWeatherOverride(UObject* WorldContextObject, FWeatherOverrideStackEntry& Entry, bool& bSuccess);
    static void PopWeatherOverride(UObject* WorldContextObject, UObject* Owner);
    void NextSequence();
    static void IsSnowing(UObject* WorldContextObject, bool& bIsSnowStorm, EWeatherSurfaceStormType& SnowStormType, float& SnowIntensity, float& SnowCoverage, bool bMaskWithIndoors);
    static void IsRaining(UObject* WorldContextObject, bool& bIsRainStorm, EWeatherSurfaceStormType& RainStormType, float& RainIntensity, float& RainCoverage, bool bMaskWithIndoors);
    static void GetWeatherWind(UObject* WorldContextObject, FWindParametersInstant& WindParameters, bool& bHaveWeather);
    static void GetWeatherMaster(UObject* WorldContextObject, UWeatherMasterComponent*& WeatherMaster);
    static void GetWeatherFXRoot(UObject* WorldContextObject, USceneComponent*& FXRootComponent);
    static void GetValidWeatherPresets(UObject* WorldContextObject, TArray<FName>& WeatherPresets);
    static void GetOverrideWeather(UObject* WorldContextObject, FName& CurrentOverrideWeather);
    static void GetOvercast(UObject* WorldContextObject, float& Overcast);
    static void GetDefaultWeather(UObject* WorldContextObject, FName& CurrentDefaultWeather);
    static void GetCurrentWeather(UObject* WorldContextObject, FName& TheCurrentWeather);
}; // Size: 0xc78
#pragma pack(pop)
