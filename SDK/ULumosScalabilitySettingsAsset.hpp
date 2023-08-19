#pragma once
#include <cstdint>
#include "FLumosScalabilitySettingsQuality.hpp"
#include "UDataAsset.hpp"
class ULumosScalabilityOverrideBase;
class UPostProcessComponent;
struct FPostProcessSettings;
class ULumosScalabilityModifyBase;
struct FLumosScalabilitySettings;
class ULightComponent;
class AActor;
#pragma pack(push, 1)
class ULumosScalabilitySettingsAsset : public UDataAsset {
public:
    FLumosScalabilitySettingsQuality PlayerLevels; // 0x30
    FLumosScalabilitySettingsQuality NPCLevels; // 0x58
    char pad_80[0xf0];
    TArray<ULumosScalabilityOverrideBase*> SettingsOverrides; // 0x170
    TArray<ULumosScalabilityModifyBase*> Modifiers; // 0x180
    static ULumosScalabilitySettingsAsset* StaticClass();
    static void LumosScalabilitySetupPostProcessingComponent(FLumosScalabilitySettings& ScalabilitySettings, UPostProcessComponent* PostProcessComponent, bool& bEnablePostProcessing, bool bMerge);
    static void LumosScalabilitySetupPostProcessing(FLumosScalabilitySettings& ScalabilitySettings, FPostProcessSettings& PostProcessSettings, bool& bEnablePostProcessing, bool bMerge);
    static void LumosScalabilitySetupLight(FLumosScalabilitySettings& ScalabilitySettings, ULightComponent* LumosLight);
    static void LumosScalabilityLightMinDistance(FLumosScalabilitySettings& ScalabilitySettings, float InLightMinDistance, float& OutLightMinDistance);
    static void LumosScalabilityGetSettings(ULumosScalabilitySettingsAsset* ScalabilitySettingsAsset, AActor* Caster, bool bIsPlayer, FLumosScalabilitySettings& ScalabilitySettings, bool& bFound);
    static void GetLumosScalabilityChangedMessage(FName& HermesMessage);
    void Get(AActor* Caster, bool bIsPlayer, FLumosScalabilitySettings& ScalabilitySettings);
}; // Size: 0x190
#pragma pack(pop)
