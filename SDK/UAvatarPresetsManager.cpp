#include "AActor.hpp"
#include "EAvatarPresetType.hpp"
#include "EGenderEnum.hpp"
#include "UAvatarPresetsManager.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UAvatarPresetsManager::SetPlayerGenderRig(EGenderEnum NewGenderRig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.SetPlayerGenderRig"));
    struct Params_SetPlayerGenderRig {
        EGenderEnum NewGenderRig; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetPlayerGenderRig params{};
    params.NewGenderRig = (EGenderEnum)NewGenderRig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAvatarPresetsManager* UAvatarPresetsManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvatarPresetsManager");
    return (UAvatarPresetsManager*)res;
}
EAvatarPresetType UAvatarPresetsManager::StringToPresetType(FString PresetType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.StringToPresetType"));
    struct Params_StringToPresetType {
        FString PresetType; // 0x0
        EAvatarPresetType ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StringToPresetType params{};
    params.PresetType = (FString)PresetType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EAvatarPresetType)params.ReturnValue;
}
void UAvatarPresetsManager::ReleaseAllAvatarPresets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.ReleaseAllAvatarPresets"));
    struct Params_ReleaseAllAvatarPresets {
    }; // Size: 0x0
    Params_ReleaseAllAvatarPresets params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvatarPresetsManager::SaveAvatarLook(FName RegistryId) {}
FString UAvatarPresetsManager::PresetTypeToString(EAvatarPresetType PresetType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.PresetTypeToString"));
    struct Params_PresetTypeToString {
        EAvatarPresetType PresetType; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_PresetTypeToString params{};
    params.PresetType = (EAvatarPresetType)PresetType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UAvatarPresetsManager::LoadPreset(UCustomizableCharacterComponent* CCC, EAvatarPresetType PresetType, FName PresetName) {}
void UAvatarPresetsManager::LoadLookFromArrays(AActor* Actor, EGenderEnum Gender, TArray<FName> AvatarPresetIDs, TArray<FName> GearAppearanceIDs, FString GearTags) {}
void UAvatarPresetsManager::LoadFullBodyPreset(UCustomizableCharacterComponent* CCC, FName PresetName) {}
void UAvatarPresetsManager::LoadAvatarPresetDefinitionsFromSaveGameDB(AActor* Actor) {}
void UAvatarPresetsManager::GetFullbodyPreset(FName FullBodyPresetName, EGenderEnum& OutGender) {}
void UAvatarPresetsManager::LoadAllAvatarPresets(UObject* InWorldContextObject) {}
TArray<FString> UAvatarPresetsManager::GetPresetTypes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.GetPresetTypes"));
    struct Params_GetPresetTypes {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPresetTypes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
TArray<FName> UAvatarPresetsManager::GetPresetsOfType(EGenderEnum Gender, EAvatarPresetType PresetType, bool bIncludeHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.GetPresetsOfType"));
    struct Params_GetPresetsOfType {
        EGenderEnum Gender; // 0x0
        EAvatarPresetType PresetType; // 0x1
        bool bIncludeHidden; // 0x2
        char pad_3[0x5];
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetPresetsOfType params{};
    params.Gender = (EGenderEnum)Gender;
    params.PresetType = (EAvatarPresetType)PresetType;
    params.bIncludeHidden = (bool)bIncludeHidden;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
EGenderEnum UAvatarPresetsManager::GetPlayerGenderRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.GetPlayerGenderRig"));
    struct Params_GetPlayerGenderRig {
        EGenderEnum ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayerGenderRig params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGenderEnum)params.ReturnValue;
}
TArray<FName> UAvatarPresetsManager::GetFullBodyPresetNames(EGenderEnum Gender, bool bIncludeHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.GetFullBodyPresetNames"));
    struct Params_GetFullBodyPresetNames {
        EGenderEnum Gender; // 0x0
        bool bIncludeHidden; // 0x1
        char pad_2[0x6];
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetFullBodyPresetNames params{};
    params.Gender = (EGenderEnum)Gender;
    params.bIncludeHidden = (bool)bIncludeHidden;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UAvatarPresetsManager::GetFullBodyAvatarPresetNames(FName FullBodyPresetName, EGenderEnum& OutGender) {}
void UAvatarPresetsManager::GetAvatarPresetNames() {}
void UAvatarPresetsManager::GetAvatarPresetName() {}
void UAvatarPresetsManager::GetAvatarPresetDefinition(FName PresetName) {}
UAvatarPresetsManager* UAvatarPresetsManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetsManager.Get"));
    struct Params_Get {
        UAvatarPresetsManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAvatarPresetsManager*)params.ReturnValue;
}
