#pragma once
#include <cstdint>
#include "ESaveType.hpp"
#include "FCharacterSaveGameInfo.hpp"
#include "FSaveGameInfo.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPersistentData : public UObject {
public:
    char pad_28[0xd78];
    static UPersistentData* StaticClass();
    static bool UpdatePlayableCharacterVoice(int32_t CharacterID, FString CharacterVoice);
    static bool UpdatePlayableCharacterPronoun(int32_t CharacterID, FString CharacterPronoun);
    static bool UpdatePlayableCharacterPresets(int32_t CharacterID, TArray<FName> CharacterPresets);
    static bool UpdatePlayableCharacterName(int32_t CharacterID, FString CharacterName);
    static bool UpdatePlayableCharacterLevel(int32_t CharacterID, int32_t CharacterLevel);
    static bool UpdatePlayableCharacterHouse(int32_t CharacterID, FString CharacterHouse);
    static bool UpdatePlayableCharacterGender(int32_t CharacterID, FString CharacterGender);
    static bool UpdatePlayableCharacterClothes(int32_t CharacterID, TArray<FName> CharacterClothes, FString AllGearTags);
    static bool SaveGameDataOfType(ESaveType SaveType, int32_t CharacterID, FString LocationName, FString MissionData, bool bCollectSaveData);
    static bool SaveGameDataInSlot(FString SlotName, ESaveType SaveType, int32_t CharacterID, FString LocationName, FString MissionData, bool bCollectSaveData, FString CloudLabel);
    static bool RemoveSaveInSlot(FString SlotName, int32_t CharacterID);
    static bool RemovePlayableCharacter(int32_t CharacterID, bool bSaveFileListAsync);
    static bool RemoveAllSavesForCharacter(int32_t CharacterID);
    static bool RemoveAllSaveData();
    void OnCrossGenSaveDataLoaded(bool Result);
    static bool LoadLastSaveOfType(ESaveType SaveType, int32_t CharacterID);
    static bool LoadGameDataInSlot(FString SlotName, int32_t CharacterID);
    static bool LoadCrossGenSaveDataInSlot(FString SlotName, FString OldSlotName);
    void LoadCrossGenSaveData(int32_t fromCharacterIndex, int32_t toCharacterIndex, bool SaveFileList);
    void LoadAllCrossGenSaveData();
    static bool HasEverLaunchedGame();
    static bool HasCreatedPlayableCharacter();
    static bool HasCompletedIntro();
    static bool GetWizardingWorldData(FString Attribute, FString& OutValue);
    static FCharacterSaveGameInfo GetPlayableCharacter(int32_t CharacterID);
    static FCharacterSaveGameInfo GetLastLoadedPlayableCharacter();
    static bool GetIsPlayableCharacterUsed(int32_t CharacterID);
    static UPersistentData* GetInstance();
    static uint8_t GetDefaultDifficulty();
    static int32_t GetCurrentPlayerID();
    static FCharacterSaveGameInfo GetCurrentPlayableCharacter();
    static FString GetCrossGenPlayableCharacterName(FCharacterSaveGameInfo& CharacterInfo);
    static TArray<FCharacterSaveGameInfo> GetCrossGenCharacterList();
    static TArray<FSaveGameInfo> GetAvailableCrossGenSaveData();
    static TArray<FCharacterSaveGameInfo> GetAllPlayableCharacters();
    void GameUserSave(int32_t CharacterID);
    void GameTestSaveGameList(int32_t CharacterID);
    void GameRemoveSaveSlot(FString SlotName, int32_t CharacterID);
    void GameRemovePlayableCharacter(int32_t CharacterID);
    void GamePurgeAllSaveData();
    void GameLogSaveGameList(int32_t CharacterID);
    void GameLogSaveDirList();
    void GameLogPlayableCharacters();
    void GameLoadLastUserSave(int32_t CharacterID);
    void GameLoadLastSave(int32_t CharacterID);
    void GameLoadLastAutoSave(int32_t CharacterID);
    void GameLoad(int32_t CharacterID, FString SaveNameOverride);
    void GameDBSave(FString SaveFileNameOverride);
    void GameDBLoad(FString SaveFileNameOverride);
    void GameCreatePlayableCharacter(FString CharacterName, FString CharacterHouse);
    void GameAutoSave(int32_t CharacterID);
    static void FlushAutoSaveCacheIfNecessary();
    static bool DoesCrossGenSaveDataExist();
    void CrossGenSaveDataLog();
    void CrossGenSaveDataLoad(int32_t fromCharacterIndex, int32_t toCharacterIndex);
    static int32_t CreatePlayableCharacter(FString CharacterName, FString CharacterHouse, FString CharacterUID, FString CharacterVoice, FString CharacterPronoun);
    static void CompletedIntro();
    static bool BP_SaveGame(FString LocationName);
    static bool BP_DoesCharacterExistYet();
    static bool BP_CreateCharacter(FString CharacterName, FString CharacterHouse);
    static bool AsyncRemovePlayableCharacter(int32_t CharacterID);
}; // Size: 0xda0
#pragma pack(pop)
