#pragma once
#include <cstdint>
#include "EAvatarPresetType.hpp"
#include "EGenderEnum.hpp"
#include "UObject.hpp"
class UCustomizableCharacterComponent;
class AActor;
#pragma pack(push, 1)
class UAvatarPresetsManager : public UObject {
public:
    static UAvatarPresetsManager* StaticClass();
    static EAvatarPresetType StringToPresetType(FString PresetType);
    static bool SetPlayerGenderRig(EGenderEnum NewGenderRig);
    static void SaveAvatarLook(FName RegistryId);
    static void ReleaseAllAvatarPresets();
    static FString PresetTypeToString(EAvatarPresetType PresetType);
    static void LoadPreset(UCustomizableCharacterComponent* CCC, EAvatarPresetType PresetType, FName PresetName);
    static void LoadLookFromArrays(AActor* Actor, EGenderEnum Gender, TArray<FName> AvatarPresetIDs, TArray<FName> GearAppearanceIDs, FString GearTags);
    static void LoadFullBodyPreset(UCustomizableCharacterComponent* CCC, FName PresetName);
    static void LoadAvatarPresetDefinitionsFromSaveGameDB(AActor* Actor);
    static void LoadAllAvatarPresets(UObject* InWorldContextObject);
    static TArray<FString> GetPresetTypes();
    static TArray<FName> GetPresetsOfType(EGenderEnum Gender, EAvatarPresetType PresetType, bool bIncludeHidden);
    static EGenderEnum GetPlayerGenderRig();
    static TArray<FName> GetFullBodyPresetNames(EGenderEnum Gender, bool bIncludeHidden);
    static void GetFullbodyPreset(FName FullBodyPresetName, EGenderEnum& OutGender);
    static void GetFullBodyAvatarPresetNames(FName FullBodyPresetName, EGenderEnum& OutGender);
    static void GetAvatarPresetNames();
    static void GetAvatarPresetName();
    static void GetAvatarPresetDefinition(FName PresetName);
    static UAvatarPresetsManager* Get();
}; // Size: 0x28
#pragma pack(pop)
