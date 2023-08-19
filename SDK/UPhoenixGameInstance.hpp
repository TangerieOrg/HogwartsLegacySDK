#pragma once
#include <cstdint>
#include "EAutoSaveReason.hpp"
#include "ELoadingScreenLocation.hpp"
#include "ERespawnReason.hpp"
#include "ESeasonEnum.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UArchitectGameInstance.hpp"
class UClass;
class UObject;
class UPhxDbRegistryTypeManager;
class APlayerStart;
class APawn;
class ULevel;
#pragma pack(push, 1)
class UPhoenixGameInstance : public UArchitectGameInstance {
public:
    char pad_230[0x40];
    ERespawnReason RespawnReason; // 0x270
    char pad_271[0x27];
    UClass* FastTravelManagerClass; // 0x298
    bool bAllowHoldPlayerUntilColliding; // 0x2a0
    char pad_2a1[0x57];
    TArray<UObject*> PersistentAssets; // 0x2f8
    char pad_308[0x120];
    TArray<UPhxDbRegistryTypeManager*> mRegistryTypeManagers; // 0x428
    static UPhoenixGameInstance* StaticClass();
    void UpdateSaveSpawnLocationEx(FVector PlayerPostion, FRotator PlayerOrientation);
    void UpdateSaveSpawnLocation();
    void UpdateChallengeSpawnLocation();
    void StartNewGame(bool bInIsIntro);
    void SetSaveSpawnLocationToPlayerStart(APlayerStart* InPlayerStart);
    void SetPlayingFromFrontend();
    void SetPlayingFromDeveloperMenu(bool bDeveloperMenu);
    void SetPlayingDeveloperOverland(bool DeveloperOverland);
    void SetPlayingDemoBuild();
    void SetCurrentLoadingScreenLocationByLevelName(FName LevelName, FString PlayerStartTag);
    void SetCurrentLoadingScreenLocation(ELoadingScreenLocation Location);
    bool SaveGameOptions();
    bool PlayOverland();
    static void PhoenixOpenLevelBySoftObjectPtr(UObject* WorldContextObject);
    static void PhoenixOpenLevel(UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString OPTIONS);
    void OnSaveGameLoaded();
    void OnDBVersionCheck(int32_t SaveVersion, int32_t SaveChangeList);
    void OnAcceptEULA(bool Update);
    void OnAboutToSaveGame();
    bool NewGame(bool bInIsIntro);
    bool LoadGameOptions();
    bool LoadGame(FString SlotName, int32_t SlotIndex);
    void LevelShutdown();
    void HoldPlayerUntilColliding(bool bFromHoverDrone);
    bool HasLoadSaveData();
    FRotator GetSaveRotation();
    FVector GetSavePosition();
    FString GetSaveGameWorld();
    FVector GetSafePlayerPosition();
    bool GetPlayingFromFrontend();
    bool GetPlayingFromDeveloperMenu();
    bool GetPlayingDeveloperOverland();
    bool GetPlayingDemoBuild();
    FVector GetPlayerPosition();
    APawn* GetPlayerPawn();
    FRotator GetPlayerOrientation();
    static UPhoenixGameInstance* GetPhoenixGameInstancePure();
    static UPhoenixGameInstance* GetPhoenixGameInstance();
    FString GetCurrentWorldName();
    ELoadingScreenLocation GetCurrentLoadingScreenLocation();
    void GameSaveHorcrux(FString SaveLabel);
    void GameLoadHorcrux(FString SaveLabel, float DestCharacterID);
    void GameLoadCloudSave(FString SlotName, bool bNewCharacter, int32_t DestCharacterID);
    void ForceSeasonUpdate(ESeasonEnum NewSeason);
    void FadeReset();
    void FadeOutToColor(FColor inFadeColor);
    void FadeOut();
    void FadeIn();
    static ULevel* DetectLevelBelowCamera(UObject* WorldContextObject);
    bool ContinueGame();
    void ClearPlayerHold();
    void ClearChallengeSpawnLocationFlag();
    static bool AutoSaveGameData(EAutoSaveReason Type);
}; // Size: 0x438
#pragma pack(pop)
