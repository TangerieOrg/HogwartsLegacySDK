#include "AActor.hpp"
#include "ACharacter.hpp"
#include "ALightCullingSingleton.hpp"
#include "EComponentMobility\Type.hpp"
#include "ELightCullingLightStatus.hpp"
#include "EShadowQualityLevels.hpp"
#include "FCharacterLightingFeatures.hpp"
#include "FCharacterLightingFeaturesSettings.hpp"
#include "FCharacterLightingFeaturesSettingsOverride.hpp"
#include "FLightCulling.hpp"
#include "UFunction.hpp"
#include "ULightComponent.hpp"
#include "ULightCullingSettings.hpp"
#include "ULightMobilityManager.hpp"
#include "ULocalLightComponent.hpp"
#include "UObject.hpp"
bool ALightCullingSingleton::LightCullingUnmanageLightsMobility(AActor* Actor, bool bRestoreMobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingUnmanageLightsMobility"));
    struct Params_LightCullingUnmanageLightsMobility {
        AActor* Actor; // 0x0
        bool bRestoreMobility; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_LightCullingUnmanageLightsMobility params{};
    params.Actor = (AActor*)Actor;
    params.bRestoreMobility = (bool)bRestoreMobility;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ALightCullingSingleton::SetLightShadowResolutionScale(ULocalLightComponent* Light, float ShadowResolutionScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetLightShadowResolutionScale"));
    struct Params_SetLightShadowResolutionScale {
        ULocalLightComponent* Light; // 0x0
        float ShadowResolutionScale; // 0x8
    }; // Size: 0xc
    Params_SetLightShadowResolutionScale params{};
    params.Light = (ULocalLightComponent*)Light;
    params.ShadowResolutionScale = (float)ShadowResolutionScale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ALightCullingSingleton* ALightCullingSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.LightCullingSingleton");
    return (ALightCullingSingleton*)res;
}
void ALightCullingSingleton::SetVolumetricScatteringIntensity(ULightComponent* Light, float VolumetricScatteringIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetVolumetricScatteringIntensity"));
    struct Params_SetVolumetricScatteringIntensity {
        ULightComponent* Light; // 0x0
        float VolumetricScatteringIntensity; // 0x8
    }; // Size: 0xc
    Params_SetVolumetricScatteringIntensity params{};
    params.Light = (ULightComponent*)Light;
    params.VolumetricScatteringIntensity = (float)VolumetricScatteringIntensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetOverrideCharacterLightingFeaturesLerp(UObject* WorldContextObject, UObject* OverrideOwner, float Lerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetOverrideCharacterLightingFeaturesLerp"));
    struct Params_SetOverrideCharacterLightingFeaturesLerp {
        UObject* WorldContextObject; // 0x0
        UObject* OverrideOwner; // 0x8
        float Lerp; // 0x10
    }; // Size: 0x14
    Params_SetOverrideCharacterLightingFeaturesLerp params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.OverrideOwner = (UObject*)OverrideOwner;
    params.Lerp = (float)Lerp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetLightShadowSharpen(ULocalLightComponent* Light, float ShadowSharpen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetLightShadowSharpen"));
    struct Params_SetLightShadowSharpen {
        ULocalLightComponent* Light; // 0x0
        float ShadowSharpen; // 0x8
    }; // Size: 0xc
    Params_SetLightShadowSharpen params{};
    params.Light = (ULocalLightComponent*)Light;
    params.ShadowSharpen = (float)ShadowSharpen;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::Flush(ULightComponent* Light) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.Flush"));
    struct Params_Flush {
        ULightComponent* Light; // 0x0
    }; // Size: 0x8
    Params_Flush params{};
    params.Light = (ULightComponent*)Light;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetMobility(ULightComponent* Light, EComponentMobility::Type Mobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetMobility"));
    struct Params_SetMobility {
        ULightComponent* Light; // 0x0
        EComponentMobility::Type Mobility; // 0x8
    }; // Size: 0x9
    Params_SetMobility params{};
    params.Light = (ULightComponent*)Light;
    params.Mobility = (EComponentMobility::Type)Mobility;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetMaxDrawDistance(ULightComponent* Light, float MaxDrawDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetMaxDrawDistance"));
    struct Params_SetMaxDrawDistance {
        ULightComponent* Light; // 0x0
        float MaxDrawDistance; // 0x8
    }; // Size: 0xc
    Params_SetMaxDrawDistance params{};
    params.Light = (ULightComponent*)Light;
    params.MaxDrawDistance = (float)MaxDrawDistance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetMaxDistanceFadeRange(ULightComponent* Light, float MaxDistanceFadeRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetMaxDistanceFadeRange"));
    struct Params_SetMaxDistanceFadeRange {
        ULightComponent* Light; // 0x0
        float MaxDistanceFadeRange; // 0x8
    }; // Size: 0xc
    Params_SetMaxDistanceFadeRange params{};
    params.Light = (ULightComponent*)Light;
    params.MaxDistanceFadeRange = (float)MaxDistanceFadeRange;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetLightShadowSlopeBias(ULocalLightComponent* Light, float ShadowSlopeBias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetLightShadowSlopeBias"));
    struct Params_SetLightShadowSlopeBias {
        ULocalLightComponent* Light; // 0x0
        float ShadowSlopeBias; // 0x8
    }; // Size: 0xc
    Params_SetLightShadowSlopeBias params{};
    params.Light = (ULocalLightComponent*)Light;
    params.ShadowSlopeBias = (float)ShadowSlopeBias;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetLightShadowBias(ULocalLightComponent* Light, float ShadowBias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetLightShadowBias"));
    struct Params_SetLightShadowBias {
        ULocalLightComponent* Light; // 0x0
        float ShadowBias; // 0x8
    }; // Size: 0xc
    Params_SetLightShadowBias params{};
    params.Light = (ULocalLightComponent*)Light;
    params.ShadowBias = (float)ShadowBias;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetContactShadowLength(ULightComponent* Light, float ContactShadowLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetContactShadowLength"));
    struct Params_SetContactShadowLength {
        ULightComponent* Light; // 0x0
        float ContactShadowLength; // 0x8
    }; // Size: 0xc
    Params_SetContactShadowLength params{};
    params.Light = (ULightComponent*)Light;
    params.ContactShadowLength = (float)ContactShadowLength;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetCastVolumetricShadow(ULightComponent* Light, bool bCastVolumetricShadow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetCastVolumetricShadow"));
    struct Params_SetCastVolumetricShadow {
        ULightComponent* Light; // 0x0
        bool bCastVolumetricShadow; // 0x8
    }; // Size: 0x9
    Params_SetCastVolumetricShadow params{};
    params.Light = (ULightComponent*)Light;
    params.bCastVolumetricShadow = (bool)bCastVolumetricShadow;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::DisableStart(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.DisableStart"));
    struct Params_DisableStart {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_DisableStart params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetCastShadowsThreshold(ULightComponent* Light, EShadowQualityLevels ShadowQualityLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetCastShadowsThreshold"));
    struct Params_SetCastShadowsThreshold {
        ULightComponent* Light; // 0x0
        EShadowQualityLevels ShadowQualityLevel; // 0x8
    }; // Size: 0x9
    Params_SetCastShadowsThreshold params{};
    params.Light = (ULightComponent*)Light;
    params.ShadowQualityLevel = (EShadowQualityLevels)ShadowQualityLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::SetCastDynamicShadows(ULightComponent* Light, bool bCastShadows) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.SetCastDynamicShadows"));
    struct Params_SetCastDynamicShadows {
        ULightComponent* Light; // 0x0
        bool bCastShadows; // 0x8
    }; // Size: 0x9
    Params_SetCastDynamicShadows params{};
    params.Light = (ULightComponent*)Light;
    params.bCastShadows = (bool)bCastShadows;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ALightCullingSingleton::LightCullingManageLightMobility(ULocalLightComponent* Light) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingManageLightMobility"));
    struct Params_LightCullingManageLightMobility {
        ULocalLightComponent* Light; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_LightCullingManageLightMobility params{};
    params.Light = (ULocalLightComponent*)Light;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ALightCullingSingleton::PushSettings(UObject* WorldContextObject, ULightCullingSettings* Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.PushSettings"));
    struct Params_PushSettings {
        UObject* WorldContextObject; // 0x0
        ULightCullingSettings* Settings; // 0x8
    }; // Size: 0x10
    Params_PushSettings params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Settings = (ULightCullingSettings*)Settings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::LightCullingAddIgnoreCharacter(ACharacter* Character, bool& bAdded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingAddIgnoreCharacter"));
    struct Params_LightCullingAddIgnoreCharacter {
        ACharacter* Character; // 0x0
        bool bAdded; // 0x8
    }; // Size: 0x9
    Params_LightCullingAddIgnoreCharacter params{};
    params.Character = (ACharacter*)Character;
    params.bAdded = (bool)bAdded;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bAdded = params.bAdded;
}
void ALightCullingSingleton::PopSettings(UObject* WorldContextObject, ULightCullingSettings* Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.PopSettings"));
    struct Params_PopSettings {
        UObject* WorldContextObject; // 0x0
        ULightCullingSettings* Settings; // 0x8
    }; // Size: 0x10
    Params_PopSettings params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Settings = (ULightCullingSettings*)Settings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::OverrideCharacterLightingFeatures(UObject* WorldContextObject, UObject* OverrideOwner, FCharacterLightingFeaturesSettings TargetSettings, float Lerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.OverrideCharacterLightingFeatures"));
    struct Params_OverrideCharacterLightingFeatures {
        UObject* WorldContextObject; // 0x0
        UObject* OverrideOwner; // 0x8
        FCharacterLightingFeaturesSettings TargetSettings; // 0x10
        float Lerp; // 0x50
    }; // Size: 0x54
    Params_OverrideCharacterLightingFeatures params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.OverrideOwner = (UObject*)OverrideOwner;
    params.TargetSettings = (FCharacterLightingFeaturesSettings)TargetSettings;
    params.Lerp = (float)Lerp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ALightCullingSingleton::LightCullingUnmanageLightMobility(ULocalLightComponent* Light, bool bRestoreMobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingUnmanageLightMobility"));
    struct Params_LightCullingUnmanageLightMobility {
        ULocalLightComponent* Light; // 0x0
        bool bRestoreMobility; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_LightCullingUnmanageLightMobility params{};
    params.Light = (ULocalLightComponent*)Light;
    params.bRestoreMobility = (bool)bRestoreMobility;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ALightCullingSingleton::LightCullingRemoveIgnoreCharacter(ACharacter* Character, bool& bRemoved) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingRemoveIgnoreCharacter"));
    struct Params_LightCullingRemoveIgnoreCharacter {
        ACharacter* Character; // 0x0
        bool bRemoved; // 0x8
    }; // Size: 0x9
    Params_LightCullingRemoveIgnoreCharacter params{};
    params.Character = (ACharacter*)Character;
    params.bRemoved = (bool)bRemoved;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bRemoved = params.bRemoved;
}
bool ALightCullingSingleton::LightCullingManageLightsMobility(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingManageLightsMobility"));
    struct Params_LightCullingManageLightsMobility {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_LightCullingManageLightsMobility params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ALightCullingSingleton::LightCullingIsManagingLightMobility(ULocalLightComponent* Light) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingIsManagingLightMobility"));
    struct Params_LightCullingIsManagingLightMobility {
        ULocalLightComponent* Light; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_LightCullingIsManagingLightMobility params{};
    params.Light = (ULocalLightComponent*)Light;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ALightCullingSingleton::LightCullingIsIgnoredLight(ULightComponent* Light, bool& bIsIgnoredLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingIsIgnoredLight"));
    struct Params_LightCullingIsIgnoredLight {
        ULightComponent* Light; // 0x0
        bool bIsIgnoredLight; // 0x8
    }; // Size: 0x9
    Params_LightCullingIsIgnoredLight params{};
    params.Light = (ULightComponent*)Light;
    params.bIsIgnoredLight = (bool)bIsIgnoredLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsIgnoredLight = params.bIsIgnoredLight;
}
void ALightCullingSingleton::LightCullingIgnoreLight(ULightComponent* Light, bool bIgnoreLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingIgnoreLight"));
    struct Params_LightCullingIgnoreLight {
        ULightComponent* Light; // 0x0
        bool bIgnoreLight; // 0x8
    }; // Size: 0x9
    Params_LightCullingIgnoreLight params{};
    params.Light = (ULightComponent*)Light;
    params.bIgnoreLight = (bool)bIgnoreLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::LightCullingIsIgnoreCharacter(ACharacter* Character, bool& bIsIgnoredCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingIsIgnoreCharacter"));
    struct Params_LightCullingIsIgnoreCharacter {
        ACharacter* Character; // 0x0
        bool bIsIgnoredCharacter; // 0x8
    }; // Size: 0x9
    Params_LightCullingIsIgnoreCharacter params{};
    params.Character = (ACharacter*)Character;
    params.bIsIgnoredCharacter = (bool)bIsIgnoredCharacter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsIgnoredCharacter = params.bIsIgnoredCharacter;
}
void ALightCullingSingleton::LightCullingIgnoreLights(TArray<ULightComponent*> Lights, bool bIgnoreLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.LightCullingIgnoreLights"));
    struct Params_LightCullingIgnoreLights {
        TArray<ULightComponent*> Lights; // 0x0
        bool bIgnoreLight; // 0x10
    }; // Size: 0x11
    Params_LightCullingIgnoreLights params{};
    params.Lights = (TArray<ULightComponent*>)Lights;
    params.bIgnoreLight = (bool)bIgnoreLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::GetLightStatus(ULightComponent* Light, ELightCullingLightStatus& Status) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.GetLightStatus"));
    struct Params_GetLightStatus {
        ULightComponent* Light; // 0x0
        ELightCullingLightStatus Status; // 0x8
    }; // Size: 0x9
    Params_GetLightStatus params{};
    params.Light = (ULightComponent*)Light;
    params.Status = (ELightCullingLightStatus)Status;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Status = params.Status;
}
void ALightCullingSingleton::GetEnabled(UObject* WorldContextObject, bool& Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.GetEnabled"));
    struct Params_GetEnabled {
        UObject* WorldContextObject; // 0x0
        bool Enabled; // 0x8
    }; // Size: 0x9
    Params_GetEnabled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Enabled = (bool)Enabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Enabled = params.Enabled;
}
void ALightCullingSingleton::GetCurrentSettings(UObject* WorldContextObject, ULightCullingSettings*& Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.GetCurrentSettings"));
    struct Params_GetCurrentSettings {
        UObject* WorldContextObject; // 0x0
        ULightCullingSettings* Settings; // 0x8
    }; // Size: 0x10
    Params_GetCurrentSettings params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Settings = (ULightCullingSettings*)Settings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Settings = params.Settings;
}
void ALightCullingSingleton::GetCastShadowsThreshold(ULightComponent* Light, EShadowQualityLevels& ShadowQualityLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.GetCastShadowsThreshold"));
    struct Params_GetCastShadowsThreshold {
        ULightComponent* Light; // 0x0
        EShadowQualityLevels ShadowQualityLevel; // 0x8
    }; // Size: 0x9
    Params_GetCastShadowsThreshold params{};
    params.Light = (ULightComponent*)Light;
    params.ShadowQualityLevel = (EShadowQualityLevels)ShadowQualityLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ShadowQualityLevel = params.ShadowQualityLevel;
}
void ALightCullingSingleton::GetBaseCharacterLightingFeatures(UObject* WorldContextObject, FCharacterLightingFeaturesSettings& CharacterLightingFeaturesSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.GetBaseCharacterLightingFeatures"));
    struct Params_GetBaseCharacterLightingFeatures {
        UObject* WorldContextObject; // 0x0
        FCharacterLightingFeaturesSettings CharacterLightingFeaturesSettings; // 0x8
    }; // Size: 0x48
    Params_GetBaseCharacterLightingFeatures params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CharacterLightingFeaturesSettings = (FCharacterLightingFeaturesSettings)CharacterLightingFeaturesSettings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CharacterLightingFeaturesSettings = params.CharacterLightingFeaturesSettings;
}
void ALightCullingSingleton::DisableEnd(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.DisableEnd"));
    struct Params_DisableEnd {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_DisableEnd params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALightCullingSingleton::ClearOverrideCharacterLightingFeatures(UObject* WorldContextObject, UObject* OverrideOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightCullingSingleton.ClearOverrideCharacterLightingFeatures"));
    struct Params_ClearOverrideCharacterLightingFeatures {
        UObject* WorldContextObject; // 0x0
        UObject* OverrideOwner; // 0x8
    }; // Size: 0x10
    Params_ClearOverrideCharacterLightingFeatures params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.OverrideOwner = (UObject*)OverrideOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
