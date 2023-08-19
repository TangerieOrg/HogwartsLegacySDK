#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EComponentMobility\Type.hpp"
#include "ELightCullingLightStatus.hpp"
#include "EShadowQualityLevels.hpp"
#include "FCharacterLightingFeatures.hpp"
#include "FCharacterLightingFeaturesSettings.hpp"
#include "FCharacterLightingFeaturesSettingsOverride.hpp"
#include "FLightCulling.hpp"
class ULightCullingSettings;
class UObject;
class ACharacter;
class ULightMobilityManager;
class ULightComponent;
class ULocalLightComponent;
#pragma pack(push, 1)
class ALightCullingSingleton : public AActor {
public:
    ULightCullingSettings* BaseSettings; // 0x248
    TArray<void*> ExternalDisable; // 0x250
    bool bExternalConsoleDisable; // 0x260
    char pad_261[0x3];
    FCharacterLightingFeaturesSettingsOverride CharacterLightingFeaturesOverride; // 0x264
    ULightCullingSettings* OverrideSettings; // 0x2b0
    bool bEnabled; // 0x2b8
    char pad_2b9[0x7];
    FLightCulling LightCulling; // 0x2c0
    FCharacterLightingFeatures CharacterLightingFeatures; // 0x320
    ULightMobilityManager* MobilityManager; // 0x3d8
    bool bFirstUpdate; // 0x3e0
    char pad_3e1[0x7];
    static ALightCullingSingleton* StaticClass();
    static void SetVolumetricScatteringIntensity(ULightComponent* Light, float VolumetricScatteringIntensity);
    static void SetOverrideCharacterLightingFeaturesLerp(UObject* WorldContextObject, UObject* OverrideOwner, float Lerp);
    static void SetMobility(ULightComponent* Light, EComponentMobility::Type Mobility);
    static void SetMaxDrawDistance(ULightComponent* Light, float MaxDrawDistance);
    static void SetMaxDistanceFadeRange(ULightComponent* Light, float MaxDistanceFadeRange);
    static void SetLightShadowSlopeBias(ULocalLightComponent* Light, float ShadowSlopeBias);
    static void SetLightShadowSharpen(ULocalLightComponent* Light, float ShadowSharpen);
    static void SetLightShadowResolutionScale(ULocalLightComponent* Light, float ShadowResolutionScale);
    static void SetLightShadowBias(ULocalLightComponent* Light, float ShadowBias);
    static void SetContactShadowLength(ULightComponent* Light, float ContactShadowLength);
    static void SetCastVolumetricShadow(ULightComponent* Light, bool bCastVolumetricShadow);
    static void SetCastShadowsThreshold(ULightComponent* Light, EShadowQualityLevels ShadowQualityLevel);
    static void SetCastDynamicShadows(ULightComponent* Light, bool bCastShadows);
    static void PushSettings(UObject* WorldContextObject, ULightCullingSettings* Settings);
    static void PopSettings(UObject* WorldContextObject, ULightCullingSettings* Settings);
    static void OverrideCharacterLightingFeatures(UObject* WorldContextObject, UObject* OverrideOwner, FCharacterLightingFeaturesSettings TargetSettings, float Lerp);
    static bool LightCullingUnmanageLightsMobility(AActor* Actor, bool bRestoreMobility);
    static bool LightCullingUnmanageLightMobility(ULocalLightComponent* Light, bool bRestoreMobility);
    static void LightCullingRemoveIgnoreCharacter(ACharacter* Character, bool& bRemoved);
    static bool LightCullingManageLightsMobility(AActor* Actor);
    static bool LightCullingManageLightMobility(ULocalLightComponent* Light);
    static bool LightCullingIsManagingLightMobility(ULocalLightComponent* Light);
    static void LightCullingIsIgnoredLight(ULightComponent* Light, bool& bIsIgnoredLight);
    static void LightCullingIsIgnoreCharacter(ACharacter* Character, bool& bIsIgnoredCharacter);
    static void LightCullingIgnoreLights(TArray<ULightComponent*> Lights, bool bIgnoreLight);
    static void LightCullingIgnoreLight(ULightComponent* Light, bool bIgnoreLight);
    static void LightCullingAddIgnoreCharacter(ACharacter* Character, bool& bAdded);
    static void GetLightStatus(ULightComponent* Light, ELightCullingLightStatus& Status);
    static void GetEnabled(UObject* WorldContextObject, bool& Enabled);
    static void GetCurrentSettings(UObject* WorldContextObject, ULightCullingSettings*& Settings);
    static void GetCastShadowsThreshold(ULightComponent* Light, EShadowQualityLevels& ShadowQualityLevel);
    static void GetBaseCharacterLightingFeatures(UObject* WorldContextObject, FCharacterLightingFeaturesSettings& CharacterLightingFeaturesSettings);
    static void Flush(ULightComponent* Light);
    static void DisableStart(UObject* WorldContextObject);
    static void DisableEnd(UObject* WorldContextObject);
    static void ClearOverrideCharacterLightingFeatures(UObject* WorldContextObject, UObject* OverrideOwner);
}; // Size: 0x3e8
#pragma pack(pop)
