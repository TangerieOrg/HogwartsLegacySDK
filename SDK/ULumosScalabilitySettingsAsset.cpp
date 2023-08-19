#include "AActor.hpp"
#include "FLumosScalabilitySettings.hpp"
#include "FLumosScalabilitySettingsQuality.hpp"
#include "FPostProcessSettings.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "ULightComponent.hpp"
#include "ULumosScalabilityModifyBase.hpp"
#include "ULumosScalabilityOverrideBase.hpp"
#include "ULumosScalabilitySettingsAsset.hpp"
#include "UPostProcessComponent.hpp"
ULumosScalabilitySettingsAsset* ULumosScalabilitySettingsAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsAsset");
    return (ULumosScalabilitySettingsAsset*)res;
}
void ULumosScalabilitySettingsAsset::LumosScalabilityGetSettings(ULumosScalabilitySettingsAsset* ScalabilitySettingsAsset, AActor* Caster, bool bIsPlayer, FLumosScalabilitySettings& ScalabilitySettings, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosScalabilitySettingsAsset.LumosScalabilityGetSettings"));
    struct Params_LumosScalabilityGetSettings {
        ULumosScalabilitySettingsAsset* ScalabilitySettingsAsset; // 0x0
        AActor* Caster; // 0x8
        bool bIsPlayer; // 0x10
        char pad_11[0x7];
        FLumosScalabilitySettings ScalabilitySettings; // 0x18
        bool bFound; // 0x60
    }; // Size: 0x61
    Params_LumosScalabilityGetSettings params{};
    params.ScalabilitySettingsAsset = (ULumosScalabilitySettingsAsset*)ScalabilitySettingsAsset;
    params.Caster = (AActor*)Caster;
    params.bIsPlayer = (bool)bIsPlayer;
    params.ScalabilitySettings = (FLumosScalabilitySettings)ScalabilitySettings;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalabilitySettings = params.ScalabilitySettings;
    bFound = params.bFound;
}
void ULumosScalabilitySettingsAsset::LumosScalabilityLightMinDistance(FLumosScalabilitySettings& ScalabilitySettings, float InLightMinDistance, float& OutLightMinDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosScalabilitySettingsAsset.LumosScalabilityLightMinDistance"));
    struct Params_LumosScalabilityLightMinDistance {
        FLumosScalabilitySettings ScalabilitySettings; // 0x0
        float InLightMinDistance; // 0x48
        float OutLightMinDistance; // 0x4c
    }; // Size: 0x50
    Params_LumosScalabilityLightMinDistance params{};
    params.ScalabilitySettings = (FLumosScalabilitySettings)ScalabilitySettings;
    params.InLightMinDistance = (float)InLightMinDistance;
    params.OutLightMinDistance = (float)OutLightMinDistance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalabilitySettings = params.ScalabilitySettings;
    OutLightMinDistance = params.OutLightMinDistance;
}
void ULumosScalabilitySettingsAsset::LumosScalabilitySetupPostProcessingComponent(FLumosScalabilitySettings& ScalabilitySettings, UPostProcessComponent* PostProcessComponent, bool& bEnablePostProcessing, bool bMerge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosScalabilitySettingsAsset.LumosScalabilitySetupPostProcessingComponent"));
    struct Params_LumosScalabilitySetupPostProcessingComponent {
        FLumosScalabilitySettings ScalabilitySettings; // 0x0
        UPostProcessComponent* PostProcessComponent; // 0x48
        bool bEnablePostProcessing; // 0x50
        bool bMerge; // 0x51
    }; // Size: 0x52
    Params_LumosScalabilitySetupPostProcessingComponent params{};
    params.ScalabilitySettings = (FLumosScalabilitySettings)ScalabilitySettings;
    params.PostProcessComponent = (UPostProcessComponent*)PostProcessComponent;
    params.bEnablePostProcessing = (bool)bEnablePostProcessing;
    params.bMerge = (bool)bMerge;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalabilitySettings = params.ScalabilitySettings;
    bEnablePostProcessing = params.bEnablePostProcessing;
}
void ULumosScalabilitySettingsAsset::LumosScalabilitySetupPostProcessing(FLumosScalabilitySettings& ScalabilitySettings, FPostProcessSettings& PostProcessSettings, bool& bEnablePostProcessing, bool bMerge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosScalabilitySettingsAsset.LumosScalabilitySetupPostProcessing"));
    struct Params_LumosScalabilitySetupPostProcessing {
        FLumosScalabilitySettings ScalabilitySettings; // 0x0
        char pad_48[0x8];
        FPostProcessSettings PostProcessSettings; // 0x50
        bool bEnablePostProcessing; // 0x640
        bool bMerge; // 0x641
    }; // Size: 0x642
    Params_LumosScalabilitySetupPostProcessing params{};
    params.ScalabilitySettings = (FLumosScalabilitySettings)ScalabilitySettings;
    params.PostProcessSettings = (FPostProcessSettings)PostProcessSettings;
    params.bEnablePostProcessing = (bool)bEnablePostProcessing;
    params.bMerge = (bool)bMerge;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalabilitySettings = params.ScalabilitySettings;
    PostProcessSettings = params.PostProcessSettings;
    bEnablePostProcessing = params.bEnablePostProcessing;
}
void ULumosScalabilitySettingsAsset::GetLumosScalabilityChangedMessage(FName& HermesMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosScalabilitySettingsAsset.GetLumosScalabilityChangedMessage"));
    struct Params_GetLumosScalabilityChangedMessage {
        FName HermesMessage; // 0x0
    }; // Size: 0x8
    Params_GetLumosScalabilityChangedMessage params{};
    params.HermesMessage = (FName)HermesMessage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HermesMessage = params.HermesMessage;
}
void ULumosScalabilitySettingsAsset::LumosScalabilitySetupLight(FLumosScalabilitySettings& ScalabilitySettings, ULightComponent* LumosLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosScalabilitySettingsAsset.LumosScalabilitySetupLight"));
    struct Params_LumosScalabilitySetupLight {
        FLumosScalabilitySettings ScalabilitySettings; // 0x0
        ULightComponent* LumosLight; // 0x48
    }; // Size: 0x50
    Params_LumosScalabilitySetupLight params{};
    params.ScalabilitySettings = (FLumosScalabilitySettings)ScalabilitySettings;
    params.LumosLight = (ULightComponent*)LumosLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalabilitySettings = params.ScalabilitySettings;
}
void ULumosScalabilitySettingsAsset::Get(AActor* Caster, bool bIsPlayer, FLumosScalabilitySettings& ScalabilitySettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosScalabilitySettingsAsset.Get"));
    struct Params_Get {
        AActor* Caster; // 0x0
        bool bIsPlayer; // 0x8
        char pad_9[0x7];
        FLumosScalabilitySettings ScalabilitySettings; // 0x10
    }; // Size: 0x58
    Params_Get params{};
    params.Caster = (AActor*)Caster;
    params.bIsPlayer = (bool)bIsPlayer;
    params.ScalabilitySettings = (FLumosScalabilitySettings)ScalabilitySettings;
    ProcessEvent(func, &params);
    ScalabilitySettings = params.ScalabilitySettings;
}
