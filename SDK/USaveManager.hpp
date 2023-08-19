#pragma once
#include <cstdint>
#include "EAutoSaveReason.hpp"
#include "EDifficulty.hpp"
#include "ESaveBlockReason.hpp"
#include "ESaveType.hpp"
#include "FSaveGameInfo.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USaveManager : public UObject {
public:
    char pad_28[0x100];
    static USaveManager* StaticClass();
    static bool UserSaveGameData();
    static bool UpdateActiveCharacterProfilePresets(TArray<FName> CharacterPresets);
    static bool UpdateActiveCharacterProfileClothes(TArray<FName> CharacterClothes, FString AllGearTags);
    void UnblockSaveGames();
    static void SetPrimaryUserIndex(int32_t Index);
    static bool SetCurrentVoicePitch(int32_t VoicePitch);
    static bool SetCurrentRigGender(FString RigGender);
    static bool SetCurrentGameDifficulty(EDifficulty Difficulty);
    static bool SaveCurrentVoicePitch(int32_t VoicePitch);
    static bool ResetCurrentGameDifficulty();
    static void RemoveBlockRequest(ESaveBlockReason Reason, bool bRemoveAll);
    static bool IsSaveGameBlocked();
    static bool IsAutoSaveGameBlocked(EAutoSaveReason Reason);
    static int32_t GetPrimaryUserIndex();
    static int32_t GetCurrentVoicePitch();
    static bool GetCurrentGameDifficulty(EDifficulty& Difficulty);
    static TArray<FSaveGameInfo> GetAllUserEntries();
    static TArray<FSaveGameInfo> GetAllSavesOfType_Unsorted_IncludeEmptyUserSaves(ESaveType SaveType, int32_t PlayerId);
    static TArray<FSaveGameInfo> GetAllSavesOfType(ESaveType SaveType, int32_t PlayerId);
    static TArray<FSaveGameInfo> GetAllAutoEntries();
    static USaveManager* Get();
    void ExecutePreGameSave();
    void ExecutePreGameLoad();
    void ExecutePostGameSave();
    void ExecutePostGameLoad();
    void ExecuteCombatEnds();
    void ExecuteCombatBegins();
    void DumpSaveGameBlocks();
    void ClearSaveGameBlocks();
    static bool BP_DoesCharacterExistYet();
    static bool BP_CreateCharacter(FString CharacterName, FString CharacterHouse);
    static void BP_ContinuePrevSessionClock();
    static bool BP_AutoSaveGame(EAutoSaveReason Reason);
    void BlockSaveGames();
    static bool AutoSaveGameData(EAutoSaveReason Type, bool bCollectSaveData);
    static bool AutoSaveFlush(bool bAsynchronous);
    static void AddBlockRequest(ESaveBlockReason Reason);
}; // Size: 0x128
#pragma pack(pop)
