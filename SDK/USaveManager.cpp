#include "EAutoSaveReason.hpp"
#include "EDifficulty.hpp"
#include "ESaveBlockReason.hpp"
#include "ESaveType.hpp"
#include "FSaveGameInfo.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USaveManager.hpp"
USaveManager* USaveManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SaveManager");
    return (USaveManager*)res;
}
void USaveManager::SetPrimaryUserIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.SetPrimaryUserIndex"));
    struct Params_SetPrimaryUserIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_SetPrimaryUserIndex params{};
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool USaveManager::UserSaveGameData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.UserSaveGameData"));
    struct Params_UserSaveGameData {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UserSaveGameData params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USaveManager::BP_DoesCharacterExistYet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.BP_DoesCharacterExistYet"));
    struct Params_BP_DoesCharacterExistYet {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_BP_DoesCharacterExistYet params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USaveManager::UnblockSaveGames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.UnblockSaveGames"));
    struct Params_UnblockSaveGames {
    }; // Size: 0x0
    Params_UnblockSaveGames params{};
    ProcessEvent(func, &params);
}
bool USaveManager::UpdateActiveCharacterProfilePresets(TArray<FName> CharacterPresets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.UpdateActiveCharacterProfilePresets"));
    struct Params_UpdateActiveCharacterProfilePresets {
        TArray<FName> CharacterPresets; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_UpdateActiveCharacterProfilePresets params{};
    params.CharacterPresets = (TArray<FName>)CharacterPresets;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USaveManager::SetCurrentVoicePitch(int32_t VoicePitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.SetCurrentVoicePitch"));
    struct Params_SetCurrentVoicePitch {
        int32_t VoicePitch; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetCurrentVoicePitch params{};
    params.VoicePitch = (int32_t)VoicePitch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USaveManager::BlockSaveGames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.BlockSaveGames"));
    struct Params_BlockSaveGames {
    }; // Size: 0x0
    Params_BlockSaveGames params{};
    ProcessEvent(func, &params);
}
bool USaveManager::UpdateActiveCharacterProfileClothes(TArray<FName> CharacterClothes, FString AllGearTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.UpdateActiveCharacterProfileClothes"));
    struct Params_UpdateActiveCharacterProfileClothes {
        TArray<FName> CharacterClothes; // 0x0
        FString AllGearTags; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_UpdateActiveCharacterProfileClothes params{};
    params.CharacterClothes = (TArray<FName>)CharacterClothes;
    params.AllGearTags = (FString)AllGearTags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USaveManager::SetCurrentRigGender(FString RigGender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.SetCurrentRigGender"));
    struct Params_SetCurrentRigGender {
        FString RigGender; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetCurrentRigGender params{};
    params.RigGender = (FString)RigGender;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USaveManager::SetCurrentGameDifficulty(EDifficulty Difficulty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.SetCurrentGameDifficulty"));
    struct Params_SetCurrentGameDifficulty {
        EDifficulty Difficulty; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetCurrentGameDifficulty params{};
    params.Difficulty = (EDifficulty)Difficulty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FSaveGameInfo> USaveManager::GetAllSavesOfType_Unsorted_IncludeEmptyUserSaves(ESaveType SaveType, int32_t PlayerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.GetAllSavesOfType_Unsorted_IncludeEmptyUserSaves"));
    struct Params_GetAllSavesOfType_Unsorted_IncludeEmptyUserSaves {
        ESaveType SaveType; // 0x0
        char pad_1[0x3];
        int32_t PlayerId; // 0x4
        TArray<FSaveGameInfo> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllSavesOfType_Unsorted_IncludeEmptyUserSaves params{};
    params.SaveType = (ESaveType)SaveType;
    params.PlayerId = (int32_t)PlayerId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSaveGameInfo>)params.ReturnValue;
}
bool USaveManager::SaveCurrentVoicePitch(int32_t VoicePitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.SaveCurrentVoicePitch"));
    struct Params_SaveCurrentVoicePitch {
        int32_t VoicePitch; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SaveCurrentVoicePitch params{};
    params.VoicePitch = (int32_t)VoicePitch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USaveManager::ResetCurrentGameDifficulty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.ResetCurrentGameDifficulty"));
    struct Params_ResetCurrentGameDifficulty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ResetCurrentGameDifficulty params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USaveManager::RemoveBlockRequest(ESaveBlockReason Reason, bool bRemoveAll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.RemoveBlockRequest"));
    struct Params_RemoveBlockRequest {
        ESaveBlockReason Reason; // 0x0
        bool bRemoveAll; // 0x1
    }; // Size: 0x2
    Params_RemoveBlockRequest params{};
    params.Reason = (ESaveBlockReason)Reason;
    params.bRemoveAll = (bool)bRemoveAll;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool USaveManager::IsSaveGameBlocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.IsSaveGameBlocked"));
    struct Params_IsSaveGameBlocked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSaveGameBlocked params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USaveManager::IsAutoSaveGameBlocked(EAutoSaveReason Reason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.IsAutoSaveGameBlocked"));
    struct Params_IsAutoSaveGameBlocked {
        EAutoSaveReason Reason; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsAutoSaveGameBlocked params{};
    params.Reason = (EAutoSaveReason)Reason;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USaveManager::AddBlockRequest(ESaveBlockReason Reason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.AddBlockRequest"));
    struct Params_AddBlockRequest {
        ESaveBlockReason Reason; // 0x0
    }; // Size: 0x1
    Params_AddBlockRequest params{};
    params.Reason = (ESaveBlockReason)Reason;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t USaveManager::GetPrimaryUserIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.GetPrimaryUserIndex"));
    struct Params_GetPrimaryUserIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPrimaryUserIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USaveManager::DumpSaveGameBlocks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.DumpSaveGameBlocks"));
    struct Params_DumpSaveGameBlocks {
    }; // Size: 0x0
    Params_DumpSaveGameBlocks params{};
    ProcessEvent(func, &params);
}
int32_t USaveManager::GetCurrentVoicePitch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.GetCurrentVoicePitch"));
    struct Params_GetCurrentVoicePitch {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentVoicePitch params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USaveManager::ExecutePreGameSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.ExecutePreGameSave"));
    struct Params_ExecutePreGameSave {
    }; // Size: 0x0
    Params_ExecutePreGameSave params{};
    ProcessEvent(func, &params);
}
bool USaveManager::GetCurrentGameDifficulty(EDifficulty& Difficulty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.GetCurrentGameDifficulty"));
    struct Params_GetCurrentGameDifficulty {
        EDifficulty Difficulty; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetCurrentGameDifficulty params{};
    params.Difficulty = (EDifficulty)Difficulty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Difficulty = params.Difficulty;
    return (bool)params.ReturnValue;
}
TArray<FSaveGameInfo> USaveManager::GetAllUserEntries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.GetAllUserEntries"));
    struct Params_GetAllUserEntries {
        TArray<FSaveGameInfo> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllUserEntries params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSaveGameInfo>)params.ReturnValue;
}
TArray<FSaveGameInfo> USaveManager::GetAllSavesOfType(ESaveType SaveType, int32_t PlayerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.GetAllSavesOfType"));
    struct Params_GetAllSavesOfType {
        ESaveType SaveType; // 0x0
        char pad_1[0x3];
        int32_t PlayerId; // 0x4
        TArray<FSaveGameInfo> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllSavesOfType params{};
    params.SaveType = (ESaveType)SaveType;
    params.PlayerId = (int32_t)PlayerId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSaveGameInfo>)params.ReturnValue;
}
TArray<FSaveGameInfo> USaveManager::GetAllAutoEntries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.GetAllAutoEntries"));
    struct Params_GetAllAutoEntries {
        TArray<FSaveGameInfo> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllAutoEntries params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSaveGameInfo>)params.ReturnValue;
}
bool USaveManager::AutoSaveFlush(bool bAsynchronous) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.AutoSaveFlush"));
    struct Params_AutoSaveFlush {
        bool bAsynchronous; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_AutoSaveFlush params{};
    params.bAsynchronous = (bool)bAsynchronous;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USaveManager::ExecutePreGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.ExecutePreGameLoad"));
    struct Params_ExecutePreGameLoad {
    }; // Size: 0x0
    Params_ExecutePreGameLoad params{};
    ProcessEvent(func, &params);
}
USaveManager* USaveManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.Get"));
    struct Params_Get {
        USaveManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USaveManager*)params.ReturnValue;
}
void USaveManager::BP_ContinuePrevSessionClock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.BP_ContinuePrevSessionClock"));
    struct Params_BP_ContinuePrevSessionClock {
    }; // Size: 0x0
    Params_BP_ContinuePrevSessionClock params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USaveManager::ExecutePostGameSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.ExecutePostGameSave"));
    struct Params_ExecutePostGameSave {
    }; // Size: 0x0
    Params_ExecutePostGameSave params{};
    ProcessEvent(func, &params);
}
void USaveManager::ExecutePostGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.ExecutePostGameLoad"));
    struct Params_ExecutePostGameLoad {
    }; // Size: 0x0
    Params_ExecutePostGameLoad params{};
    ProcessEvent(func, &params);
}
void USaveManager::ExecuteCombatBegins() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.ExecuteCombatBegins"));
    struct Params_ExecuteCombatBegins {
    }; // Size: 0x0
    Params_ExecuteCombatBegins params{};
    ProcessEvent(func, &params);
}
void USaveManager::ExecuteCombatEnds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.ExecuteCombatEnds"));
    struct Params_ExecuteCombatEnds {
    }; // Size: 0x0
    Params_ExecuteCombatEnds params{};
    ProcessEvent(func, &params);
}
void USaveManager::ClearSaveGameBlocks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.ClearSaveGameBlocks"));
    struct Params_ClearSaveGameBlocks {
    }; // Size: 0x0
    Params_ClearSaveGameBlocks params{};
    ProcessEvent(func, &params);
}
bool USaveManager::BP_CreateCharacter(FString CharacterName, FString CharacterHouse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.BP_CreateCharacter"));
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
bool USaveManager::BP_AutoSaveGame(EAutoSaveReason Reason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.BP_AutoSaveGame"));
    struct Params_BP_AutoSaveGame {
        EAutoSaveReason Reason; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_BP_AutoSaveGame params{};
    params.Reason = (EAutoSaveReason)Reason;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USaveManager::AutoSaveGameData(EAutoSaveReason Type, bool bCollectSaveData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveManager.AutoSaveGameData"));
    struct Params_AutoSaveGameData {
        EAutoSaveReason Type; // 0x0
        bool bCollectSaveData; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_AutoSaveGameData params{};
    params.Type = (EAutoSaveReason)Type;
    params.bCollectSaveData = (bool)bCollectSaveData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
