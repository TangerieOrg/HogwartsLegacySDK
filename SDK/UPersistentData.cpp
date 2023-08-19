#include "ESaveType.hpp"
#include "FCharacterSaveGameInfo.hpp"
#include "FSaveGameInfo.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPersistentData.hpp"
bool UPersistentData::HasCreatedPlayableCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.HasCreatedPlayableCharacter"));
    struct Params_HasCreatedPlayableCharacter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasCreatedPlayableCharacter params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::UpdatePlayableCharacterLevel(int32_t CharacterID, int32_t CharacterLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.UpdatePlayableCharacterLevel"));
    struct Params_UpdatePlayableCharacterLevel {
        int32_t CharacterID; // 0x0
        int32_t CharacterLevel; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_UpdatePlayableCharacterLevel params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CharacterLevel = (int32_t)CharacterLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::RemovePlayableCharacter(int32_t CharacterID, bool bSaveFileListAsync) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.RemovePlayableCharacter"));
    struct Params_RemovePlayableCharacter {
        int32_t CharacterID; // 0x0
        bool bSaveFileListAsync; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_RemovePlayableCharacter params{};
    params.CharacterID = (int32_t)CharacterID;
    params.bSaveFileListAsync = (bool)bSaveFileListAsync;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPersistentData* UPersistentData::StaticClass() {
    static auto res = find_uobject("Class /Script/PersistentData.PersistentData");
    return (UPersistentData*)res;
}
void UPersistentData::GameDBSave(FString SaveFileNameOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameDBSave"));
    struct Params_GameDBSave {
        FString SaveFileNameOverride; // 0x0
    }; // Size: 0x10
    Params_GameDBSave params{};
    params.SaveFileNameOverride = (FString)SaveFileNameOverride;
    ProcessEvent(func, &params);
}
bool UPersistentData::UpdatePlayableCharacterName(int32_t CharacterID, FString CharacterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.UpdatePlayableCharacterName"));
    struct Params_UpdatePlayableCharacterName {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        FString CharacterName; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UpdatePlayableCharacterName params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CharacterName = (FString)CharacterName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPersistentData::LoadAllCrossGenSaveData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.LoadAllCrossGenSaveData"));
    struct Params_LoadAllCrossGenSaveData {
    }; // Size: 0x0
    Params_LoadAllCrossGenSaveData params{};
    ProcessEvent(func, &params);
}
bool UPersistentData::UpdatePlayableCharacterVoice(int32_t CharacterID, FString CharacterVoice) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.UpdatePlayableCharacterVoice"));
    struct Params_UpdatePlayableCharacterVoice {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        FString CharacterVoice; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UpdatePlayableCharacterVoice params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CharacterVoice = (FString)CharacterVoice;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPersistentData::CrossGenSaveDataLoad(int32_t fromCharacterIndex, int32_t toCharacterIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.CrossGenSaveDataLoad"));
    struct Params_CrossGenSaveDataLoad {
        int32_t fromCharacterIndex; // 0x0
        int32_t toCharacterIndex; // 0x4
    }; // Size: 0x8
    Params_CrossGenSaveDataLoad params{};
    params.fromCharacterIndex = (int32_t)fromCharacterIndex;
    params.toCharacterIndex = (int32_t)toCharacterIndex;
    ProcessEvent(func, &params);
}
bool UPersistentData::DoesCrossGenSaveDataExist() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.DoesCrossGenSaveDataExist"));
    struct Params_DoesCrossGenSaveDataExist {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DoesCrossGenSaveDataExist params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::UpdatePlayableCharacterGender(int32_t CharacterID, FString CharacterGender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.UpdatePlayableCharacterGender"));
    struct Params_UpdatePlayableCharacterGender {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        FString CharacterGender; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UpdatePlayableCharacterGender params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CharacterGender = (FString)CharacterGender;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::BP_SaveGame(FString LocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.BP_SaveGame"));
    struct Params_BP_SaveGame {
        FString LocationName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_BP_SaveGame params{};
    params.LocationName = (FString)LocationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::UpdatePlayableCharacterPronoun(int32_t CharacterID, FString CharacterPronoun) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.UpdatePlayableCharacterPronoun"));
    struct Params_UpdatePlayableCharacterPronoun {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        FString CharacterPronoun; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UpdatePlayableCharacterPronoun params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CharacterPronoun = (FString)CharacterPronoun;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::SaveGameDataOfType(ESaveType SaveType, int32_t CharacterID, FString LocationName, FString MissionData, bool bCollectSaveData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.SaveGameDataOfType"));
    struct Params_SaveGameDataOfType {
        ESaveType SaveType; // 0x0
        char pad_1[0x3];
        int32_t CharacterID; // 0x4
        FString LocationName; // 0x8
        FString MissionData; // 0x18
        bool bCollectSaveData; // 0x28
        bool ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_SaveGameDataOfType params{};
    params.SaveType = (ESaveType)SaveType;
    params.CharacterID = (int32_t)CharacterID;
    params.LocationName = (FString)LocationName;
    params.MissionData = (FString)MissionData;
    params.bCollectSaveData = (bool)bCollectSaveData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::UpdatePlayableCharacterPresets(int32_t CharacterID, TArray<FName> CharacterPresets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.UpdatePlayableCharacterPresets"));
    struct Params_UpdatePlayableCharacterPresets {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        TArray<FName> CharacterPresets; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UpdatePlayableCharacterPresets params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CharacterPresets = (TArray<FName>)CharacterPresets;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPersistentData::GameLogPlayableCharacters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameLogPlayableCharacters"));
    struct Params_GameLogPlayableCharacters {
    }; // Size: 0x0
    Params_GameLogPlayableCharacters params{};
    ProcessEvent(func, &params);
}
bool UPersistentData::UpdatePlayableCharacterHouse(int32_t CharacterID, FString CharacterHouse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.UpdatePlayableCharacterHouse"));
    struct Params_UpdatePlayableCharacterHouse {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        FString CharacterHouse; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UpdatePlayableCharacterHouse params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CharacterHouse = (FString)CharacterHouse;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::UpdatePlayableCharacterClothes(int32_t CharacterID, TArray<FName> CharacterClothes, FString AllGearTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.UpdatePlayableCharacterClothes"));
    struct Params_UpdatePlayableCharacterClothes {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        TArray<FName> CharacterClothes; // 0x8
        FString AllGearTags; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_UpdatePlayableCharacterClothes params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CharacterClothes = (TArray<FName>)CharacterClothes;
    params.AllGearTags = (FString)AllGearTags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::SaveGameDataInSlot(FString SlotName, ESaveType SaveType, int32_t CharacterID, FString LocationName, FString MissionData, bool bCollectSaveData, FString CloudLabel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.SaveGameDataInSlot"));
    struct Params_SaveGameDataInSlot {
        FString SlotName; // 0x0
        ESaveType SaveType; // 0x10
        char pad_11[0x3];
        int32_t CharacterID; // 0x14
        FString LocationName; // 0x18
        FString MissionData; // 0x28
        bool bCollectSaveData; // 0x38
        char pad_39[0x7];
        FString CloudLabel; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_SaveGameDataInSlot params{};
    params.SlotName = (FString)SlotName;
    params.SaveType = (ESaveType)SaveType;
    params.CharacterID = (int32_t)CharacterID;
    params.LocationName = (FString)LocationName;
    params.MissionData = (FString)MissionData;
    params.bCollectSaveData = (bool)bCollectSaveData;
    params.CloudLabel = (FString)CloudLabel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::BP_DoesCharacterExistYet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.BP_DoesCharacterExistYet"));
    struct Params_BP_DoesCharacterExistYet {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_BP_DoesCharacterExistYet params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::RemoveSaveInSlot(FString SlotName, int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.RemoveSaveInSlot"));
    struct Params_RemoveSaveInSlot {
        FString SlotName; // 0x0
        int32_t CharacterID; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_RemoveSaveInSlot params{};
    params.SlotName = (FString)SlotName;
    params.CharacterID = (int32_t)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::RemoveAllSavesForCharacter(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.RemoveAllSavesForCharacter"));
    struct Params_RemoveAllSavesForCharacter {
        int32_t CharacterID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_RemoveAllSavesForCharacter params{};
    params.CharacterID = (int32_t)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPersistentData::GameDBLoad(FString SaveFileNameOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameDBLoad"));
    struct Params_GameDBLoad {
        FString SaveFileNameOverride; // 0x0
    }; // Size: 0x10
    Params_GameDBLoad params{};
    params.SaveFileNameOverride = (FString)SaveFileNameOverride;
    ProcessEvent(func, &params);
}
FCharacterSaveGameInfo UPersistentData::GetLastLoadedPlayableCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetLastLoadedPlayableCharacter"));
    struct Params_GetLastLoadedPlayableCharacter {
        FCharacterSaveGameInfo ReturnValue; // 0x0
    }; // Size: 0x350
    Params_GetLastLoadedPlayableCharacter params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FCharacterSaveGameInfo)params.ReturnValue;
}
bool UPersistentData::RemoveAllSaveData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.RemoveAllSaveData"));
    struct Params_RemoveAllSaveData {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RemoveAllSaveData params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPersistentData::OnCrossGenSaveDataLoaded(bool Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.OnCrossGenSaveDataLoaded"));
    struct Params_OnCrossGenSaveDataLoaded {
        bool Result; // 0x0
    }; // Size: 0x1
    Params_OnCrossGenSaveDataLoaded params{};
    params.Result = (bool)Result;
    ProcessEvent(func, &params);
}
bool UPersistentData::LoadLastSaveOfType(ESaveType SaveType, int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.LoadLastSaveOfType"));
    struct Params_LoadLastSaveOfType {
        ESaveType SaveType; // 0x0
        char pad_1[0x3];
        int32_t CharacterID; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_LoadLastSaveOfType params{};
    params.SaveType = (ESaveType)SaveType;
    params.CharacterID = (int32_t)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::LoadGameDataInSlot(FString SlotName, int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.LoadGameDataInSlot"));
    struct Params_LoadGameDataInSlot {
        FString SlotName; // 0x0
        int32_t CharacterID; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_LoadGameDataInSlot params{};
    params.SlotName = (FString)SlotName;
    params.CharacterID = (int32_t)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::LoadCrossGenSaveDataInSlot(FString SlotName, FString OldSlotName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.LoadCrossGenSaveDataInSlot"));
    struct Params_LoadCrossGenSaveDataInSlot {
        FString SlotName; // 0x0
        FString OldSlotName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_LoadCrossGenSaveDataInSlot params{};
    params.SlotName = (FString)SlotName;
    params.OldSlotName = (FString)OldSlotName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPersistentData::LoadCrossGenSaveData(int32_t fromCharacterIndex, int32_t toCharacterIndex, bool SaveFileList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.LoadCrossGenSaveData"));
    struct Params_LoadCrossGenSaveData {
        int32_t fromCharacterIndex; // 0x0
        int32_t toCharacterIndex; // 0x4
        bool SaveFileList; // 0x8
    }; // Size: 0x9
    Params_LoadCrossGenSaveData params{};
    params.fromCharacterIndex = (int32_t)fromCharacterIndex;
    params.toCharacterIndex = (int32_t)toCharacterIndex;
    params.SaveFileList = (bool)SaveFileList;
    ProcessEvent(func, &params);
}
void UPersistentData::GamePurgeAllSaveData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GamePurgeAllSaveData"));
    struct Params_GamePurgeAllSaveData {
    }; // Size: 0x0
    Params_GamePurgeAllSaveData params{};
    ProcessEvent(func, &params);
}
bool UPersistentData::HasEverLaunchedGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.HasEverLaunchedGame"));
    struct Params_HasEverLaunchedGame {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasEverLaunchedGame params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::HasCompletedIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.HasCompletedIntro"));
    struct Params_HasCompletedIntro {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasCompletedIntro params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPersistentData::GetWizardingWorldData(FString Attribute, FString& OutValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetWizardingWorldData"));
    struct Params_GetWizardingWorldData {
        FString Attribute; // 0x0
        FString OutValue; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetWizardingWorldData params{};
    params.Attribute = (FString)Attribute;
    params.OutValue = (FString)OutValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
FCharacterSaveGameInfo UPersistentData::GetPlayableCharacter(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetPlayableCharacter"));
    struct Params_GetPlayableCharacter {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        FCharacterSaveGameInfo ReturnValue; // 0x8
    }; // Size: 0x358
    Params_GetPlayableCharacter params{};
    params.CharacterID = (int32_t)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FCharacterSaveGameInfo)params.ReturnValue;
}
bool UPersistentData::GetIsPlayableCharacterUsed(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetIsPlayableCharacterUsed"));
    struct Params_GetIsPlayableCharacterUsed {
        int32_t CharacterID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetIsPlayableCharacterUsed params{};
    params.CharacterID = (int32_t)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FCharacterSaveGameInfo> UPersistentData::GetCrossGenCharacterList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetCrossGenCharacterList"));
    struct Params_GetCrossGenCharacterList {
        TArray<FCharacterSaveGameInfo> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCrossGenCharacterList params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FCharacterSaveGameInfo>)params.ReturnValue;
}
UPersistentData* UPersistentData::GetInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetInstance"));
    struct Params_GetInstance {
        UPersistentData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInstance params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPersistentData*)params.ReturnValue;
}
uint8_t UPersistentData::GetDefaultDifficulty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetDefaultDifficulty"));
    struct Params_GetDefaultDifficulty {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultDifficulty params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void UPersistentData::GameLoadLastSave(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameLoadLastSave"));
    struct Params_GameLoadLastSave {
        int32_t CharacterID; // 0x0
    }; // Size: 0x4
    Params_GameLoadLastSave params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
int32_t UPersistentData::GetCurrentPlayerID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetCurrentPlayerID"));
    struct Params_GetCurrentPlayerID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentPlayerID params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPersistentData::GameAutoSave(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameAutoSave"));
    struct Params_GameAutoSave {
        int32_t CharacterID; // 0x0
    }; // Size: 0x4
    Params_GameAutoSave params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
FCharacterSaveGameInfo UPersistentData::GetCurrentPlayableCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetCurrentPlayableCharacter"));
    struct Params_GetCurrentPlayableCharacter {
        FCharacterSaveGameInfo ReturnValue; // 0x0
    }; // Size: 0x350
    Params_GetCurrentPlayableCharacter params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FCharacterSaveGameInfo)params.ReturnValue;
}
FString UPersistentData::GetCrossGenPlayableCharacterName(FCharacterSaveGameInfo& CharacterInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetCrossGenPlayableCharacterName"));
    struct Params_GetCrossGenPlayableCharacterName {
        FCharacterSaveGameInfo CharacterInfo; // 0x0
        FString ReturnValue; // 0x350
    }; // Size: 0x360
    Params_GetCrossGenPlayableCharacterName params{};
    params.CharacterInfo = (FCharacterSaveGameInfo)CharacterInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CharacterInfo = params.CharacterInfo;
    return (FString)params.ReturnValue;
}
void UPersistentData::GameLoad(int32_t CharacterID, FString SaveNameOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameLoad"));
    struct Params_GameLoad {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        FString SaveNameOverride; // 0x8
    }; // Size: 0x18
    Params_GameLoad params{};
    params.CharacterID = (int32_t)CharacterID;
    params.SaveNameOverride = (FString)SaveNameOverride;
    ProcessEvent(func, &params);
}
TArray<FSaveGameInfo> UPersistentData::GetAvailableCrossGenSaveData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetAvailableCrossGenSaveData"));
    struct Params_GetAvailableCrossGenSaveData {
        TArray<FSaveGameInfo> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableCrossGenSaveData params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSaveGameInfo>)params.ReturnValue;
}
TArray<FCharacterSaveGameInfo> UPersistentData::GetAllPlayableCharacters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GetAllPlayableCharacters"));
    struct Params_GetAllPlayableCharacters {
        TArray<FCharacterSaveGameInfo> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllPlayableCharacters params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FCharacterSaveGameInfo>)params.ReturnValue;
}
void UPersistentData::GameTestSaveGameList(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameTestSaveGameList"));
    struct Params_GameTestSaveGameList {
        int32_t CharacterID; // 0x0
    }; // Size: 0x4
    Params_GameTestSaveGameList params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
void UPersistentData::GameUserSave(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameUserSave"));
    struct Params_GameUserSave {
        int32_t CharacterID; // 0x0
    }; // Size: 0x4
    Params_GameUserSave params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
bool UPersistentData::BP_CreateCharacter(FString CharacterName, FString CharacterHouse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.BP_CreateCharacter"));
    struct Params_BP_CreateCharacter {
        FString CharacterName; // 0x0
        FString CharacterHouse; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_BP_CreateCharacter params{};
    params.CharacterName = (FString)CharacterName;
    params.CharacterHouse = (FString)CharacterHouse;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPersistentData::GameRemoveSaveSlot(FString SlotName, int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameRemoveSaveSlot"));
    struct Params_GameRemoveSaveSlot {
        FString SlotName; // 0x0
        int32_t CharacterID; // 0x10
    }; // Size: 0x14
    Params_GameRemoveSaveSlot params{};
    params.SlotName = (FString)SlotName;
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
bool UPersistentData::AsyncRemovePlayableCharacter(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.AsyncRemovePlayableCharacter"));
    struct Params_AsyncRemovePlayableCharacter {
        int32_t CharacterID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_AsyncRemovePlayableCharacter params{};
    params.CharacterID = (int32_t)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPersistentData::GameRemovePlayableCharacter(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameRemovePlayableCharacter"));
    struct Params_GameRemovePlayableCharacter {
        int32_t CharacterID; // 0x0
    }; // Size: 0x4
    Params_GameRemovePlayableCharacter params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
int32_t UPersistentData::CreatePlayableCharacter(FString CharacterName, FString CharacterHouse, FString CharacterUID, FString CharacterVoice, FString CharacterPronoun) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.CreatePlayableCharacter"));
    struct Params_CreatePlayableCharacter {
        FString CharacterName; // 0x0
        FString CharacterHouse; // 0x10
        FString CharacterUID; // 0x20
        FString CharacterVoice; // 0x30
        FString CharacterPronoun; // 0x40
        int32_t ReturnValue; // 0x50
    }; // Size: 0x54
    Params_CreatePlayableCharacter params{};
    params.CharacterName = (FString)CharacterName;
    params.CharacterHouse = (FString)CharacterHouse;
    params.CharacterUID = (FString)CharacterUID;
    params.CharacterVoice = (FString)CharacterVoice;
    params.CharacterPronoun = (FString)CharacterPronoun;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPersistentData::GameLogSaveGameList(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameLogSaveGameList"));
    struct Params_GameLogSaveGameList {
        int32_t CharacterID; // 0x0
    }; // Size: 0x4
    Params_GameLogSaveGameList params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
void UPersistentData::GameLogSaveDirList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameLogSaveDirList"));
    struct Params_GameLogSaveDirList {
    }; // Size: 0x0
    Params_GameLogSaveDirList params{};
    ProcessEvent(func, &params);
}
void UPersistentData::GameCreatePlayableCharacter(FString CharacterName, FString CharacterHouse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameCreatePlayableCharacter"));
    struct Params_GameCreatePlayableCharacter {
        FString CharacterName; // 0x0
        FString CharacterHouse; // 0x10
    }; // Size: 0x20
    Params_GameCreatePlayableCharacter params{};
    params.CharacterName = (FString)CharacterName;
    params.CharacterHouse = (FString)CharacterHouse;
    ProcessEvent(func, &params);
}
void UPersistentData::GameLoadLastUserSave(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameLoadLastUserSave"));
    struct Params_GameLoadLastUserSave {
        int32_t CharacterID; // 0x0
    }; // Size: 0x4
    Params_GameLoadLastUserSave params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
void UPersistentData::GameLoadLastAutoSave(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.GameLoadLastAutoSave"));
    struct Params_GameLoadLastAutoSave {
        int32_t CharacterID; // 0x0
    }; // Size: 0x4
    Params_GameLoadLastAutoSave params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
void UPersistentData::FlushAutoSaveCacheIfNecessary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.FlushAutoSaveCacheIfNecessary"));
    struct Params_FlushAutoSaveCacheIfNecessary {
    }; // Size: 0x0
    Params_FlushAutoSaveCacheIfNecessary params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPersistentData::CrossGenSaveDataLog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.CrossGenSaveDataLog"));
    struct Params_CrossGenSaveDataLog {
    }; // Size: 0x0
    Params_CrossGenSaveDataLog params{};
    ProcessEvent(func, &params);
}
void UPersistentData::CompletedIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PersistentData.PersistentData.CompletedIntro"));
    struct Params_CompletedIntro {
    }; // Size: 0x0
    Params_CompletedIntro params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
