#include "APawn.hpp"
#include "APlayerStart.hpp"
#include "EAutoSaveReason.hpp"
#include "ELoadingScreenLocation.hpp"
#include "ERespawnReason.hpp"
#include "ESeasonEnum.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UArchitectGameInstance.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "UObject.hpp"
#include "UPhoenixGameInstance.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
void UPhoenixGameInstance::OnDBVersionCheck(int32_t SaveVersion, int32_t SaveChangeList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.OnDBVersionCheck"));
    struct Params_OnDBVersionCheck {
        int32_t SaveVersion; // 0x0
        int32_t SaveChangeList; // 0x4
    }; // Size: 0x8
    Params_OnDBVersionCheck params{};
    params.SaveVersion = (int32_t)SaveVersion;
    params.SaveChangeList = (int32_t)SaveChangeList;
    ProcessEvent(func, &params);
}
UPhoenixGameInstance* UPhoenixGameInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixGameInstance");
    return (UPhoenixGameInstance*)res;
}
bool UPhoenixGameInstance::GetPlayingDemoBuild() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPlayingDemoBuild"));
    struct Params_GetPlayingDemoBuild {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayingDemoBuild params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::SetPlayingFromDeveloperMenu(bool bDeveloperMenu) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.SetPlayingFromDeveloperMenu"));
    struct Params_SetPlayingFromDeveloperMenu {
        bool bDeveloperMenu; // 0x0
    }; // Size: 0x1
    Params_SetPlayingFromDeveloperMenu params{};
    params.bDeveloperMenu = (bool)bDeveloperMenu;
    ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::GetPlayingDeveloperOverland() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPlayingDeveloperOverland"));
    struct Params_GetPlayingDeveloperOverland {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayingDeveloperOverland params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::UpdateSaveSpawnLocationEx(FVector PlayerPostion, FRotator PlayerOrientation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.UpdateSaveSpawnLocationEx"));
    struct Params_UpdateSaveSpawnLocationEx {
        FVector PlayerPostion; // 0x0
        FRotator PlayerOrientation; // 0xc
    }; // Size: 0x18
    Params_UpdateSaveSpawnLocationEx params{};
    params.PlayerPostion = (FVector)PlayerPostion;
    params.PlayerOrientation = (FRotator)PlayerOrientation;
    ProcessEvent(func, &params);
}
UPhoenixGameInstance* UPhoenixGameInstance::GetPhoenixGameInstancePure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPhoenixGameInstancePure"));
    struct Params_GetPhoenixGameInstancePure {
        UPhoenixGameInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhoenixGameInstancePure params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPhoenixGameInstance*)params.ReturnValue;
}
void UPhoenixGameInstance::UpdateSaveSpawnLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.UpdateSaveSpawnLocation"));
    struct Params_UpdateSaveSpawnLocation {
    }; // Size: 0x0
    Params_UpdateSaveSpawnLocation params{};
    ProcessEvent(func, &params);
}
FString UPhoenixGameInstance::GetCurrentWorldName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetCurrentWorldName"));
    struct Params_GetCurrentWorldName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentWorldName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UPhoenixGameInstance::OnAcceptEULA(bool Update) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.OnAcceptEULA"));
    struct Params_OnAcceptEULA {
        bool Update; // 0x0
    }; // Size: 0x1
    Params_OnAcceptEULA params{};
    params.Update = (bool)Update;
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::UpdateChallengeSpawnLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.UpdateChallengeSpawnLocation"));
    struct Params_UpdateChallengeSpawnLocation {
    }; // Size: 0x0
    Params_UpdateChallengeSpawnLocation params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::StartNewGame(bool bInIsIntro) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.StartNewGame"));
    struct Params_StartNewGame {
        bool bInIsIntro; // 0x0
    }; // Size: 0x1
    Params_StartNewGame params{};
    params.bInIsIntro = (bool)bInIsIntro;
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::FadeOutToColor(FColor inFadeColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.FadeOutToColor"));
    struct Params_FadeOutToColor {
        FColor inFadeColor; // 0x0
    }; // Size: 0x4
    Params_FadeOutToColor params{};
    params.inFadeColor = (FColor)inFadeColor;
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::SetSaveSpawnLocationToPlayerStart(APlayerStart* InPlayerStart) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.SetSaveSpawnLocationToPlayerStart"));
    struct Params_SetSaveSpawnLocationToPlayerStart {
        APlayerStart* InPlayerStart; // 0x0
    }; // Size: 0x8
    Params_SetSaveSpawnLocationToPlayerStart params{};
    params.InPlayerStart = (APlayerStart*)InPlayerStart;
    ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::SaveGameOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.SaveGameOptions"));
    struct Params_SaveGameOptions {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SaveGameOptions params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::SetPlayingFromFrontend() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.SetPlayingFromFrontend"));
    struct Params_SetPlayingFromFrontend {
    }; // Size: 0x0
    Params_SetPlayingFromFrontend params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::SetPlayingDeveloperOverland(bool DeveloperOverland) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.SetPlayingDeveloperOverland"));
    struct Params_SetPlayingDeveloperOverland {
        bool DeveloperOverland; // 0x0
    }; // Size: 0x1
    Params_SetPlayingDeveloperOverland params{};
    params.DeveloperOverland = (bool)DeveloperOverland;
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::PhoenixOpenLevelBySoftObjectPtr(UObject* WorldContextObject) {}
void UPhoenixGameInstance::SetPlayingDemoBuild() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.SetPlayingDemoBuild"));
    struct Params_SetPlayingDemoBuild {
    }; // Size: 0x0
    Params_SetPlayingDemoBuild params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::SetCurrentLoadingScreenLocationByLevelName(FName LevelName, FString PlayerStartTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.SetCurrentLoadingScreenLocationByLevelName"));
    struct Params_SetCurrentLoadingScreenLocationByLevelName {
        FName LevelName; // 0x0
        FString PlayerStartTag; // 0x8
    }; // Size: 0x18
    Params_SetCurrentLoadingScreenLocationByLevelName params{};
    params.LevelName = (FName)LevelName;
    params.PlayerStartTag = (FString)PlayerStartTag;
    ProcessEvent(func, &params);
}
FRotator UPhoenixGameInstance::GetSaveRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetSaveRotation"));
    struct Params_GetSaveRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSaveRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void UPhoenixGameInstance::SetCurrentLoadingScreenLocation(ELoadingScreenLocation Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.SetCurrentLoadingScreenLocation"));
    struct Params_SetCurrentLoadingScreenLocation {
        ELoadingScreenLocation Location; // 0x0
    }; // Size: 0x1
    Params_SetCurrentLoadingScreenLocation params{};
    params.Location = (ELoadingScreenLocation)Location;
    ProcessEvent(func, &params);
}
FVector UPhoenixGameInstance::GetPlayerPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPlayerPosition"));
    struct Params_GetPlayerPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPlayerPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FString UPhoenixGameInstance::GetSaveGameWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetSaveGameWorld"));
    struct Params_GetSaveGameWorld {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSaveGameWorld params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UPhoenixGameInstance::PlayOverland() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.PlayOverland"));
    struct Params_PlayOverland {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PlayOverland params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::PhoenixOpenLevel(UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString OPTIONS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.PhoenixOpenLevel"));
    struct Params_PhoenixOpenLevel {
        UObject* WorldContextObject; // 0x0
        FName LevelName; // 0x8
        bool bAbsolute; // 0x10
        char pad_11[0x7];
        FString OPTIONS; // 0x18
    }; // Size: 0x28
    Params_PhoenixOpenLevel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LevelName = (FName)LevelName;
    params.bAbsolute = (bool)bAbsolute;
    params.OPTIONS = (FString)OPTIONS;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::NewGame(bool bInIsIntro) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.NewGame"));
    struct Params_NewGame {
        bool bInIsIntro; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_NewGame params{};
    params.bInIsIntro = (bool)bInIsIntro;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::OnAboutToSaveGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.OnAboutToSaveGame"));
    struct Params_OnAboutToSaveGame {
    }; // Size: 0x0
    Params_OnAboutToSaveGame params{};
    ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::LoadGameOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.LoadGameOptions"));
    struct Params_LoadGameOptions {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_LoadGameOptions params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::ForceSeasonUpdate(ESeasonEnum NewSeason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.ForceSeasonUpdate"));
    struct Params_ForceSeasonUpdate {
        ESeasonEnum NewSeason; // 0x0
    }; // Size: 0x1
    Params_ForceSeasonUpdate params{};
    params.NewSeason = (ESeasonEnum)NewSeason;
    ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::LoadGame(FString SlotName, int32_t SlotIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.LoadGame"));
    struct Params_LoadGame {
        FString SlotName; // 0x0
        int32_t SlotIndex; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_LoadGame params{};
    params.SlotName = (FString)SlotName;
    params.SlotIndex = (int32_t)SlotIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::LevelShutdown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.LevelShutdown"));
    struct Params_LevelShutdown {
    }; // Size: 0x0
    Params_LevelShutdown params{};
    ProcessEvent(func, &params);
}
UPhoenixGameInstance* UPhoenixGameInstance::GetPhoenixGameInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPhoenixGameInstance"));
    struct Params_GetPhoenixGameInstance {
        UPhoenixGameInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhoenixGameInstance params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPhoenixGameInstance*)params.ReturnValue;
}
void UPhoenixGameInstance::HoldPlayerUntilColliding(bool bFromHoverDrone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.HoldPlayerUntilColliding"));
    struct Params_HoldPlayerUntilColliding {
        bool bFromHoverDrone; // 0x0
    }; // Size: 0x1
    Params_HoldPlayerUntilColliding params{};
    params.bFromHoverDrone = (bool)bFromHoverDrone;
    ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::HasLoadSaveData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.HasLoadSaveData"));
    struct Params_HasLoadSaveData {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasLoadSaveData params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UPhoenixGameInstance::GetSavePosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetSavePosition"));
    struct Params_GetSavePosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSavePosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UPhoenixGameInstance::GetSafePlayerPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetSafePlayerPosition"));
    struct Params_GetSafePlayerPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSafePlayerPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UPhoenixGameInstance::GetPlayingFromFrontend() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPlayingFromFrontend"));
    struct Params_GetPlayingFromFrontend {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayingFromFrontend params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::GameSaveHorcrux(FString SaveLabel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GameSaveHorcrux"));
    struct Params_GameSaveHorcrux {
        FString SaveLabel; // 0x0
    }; // Size: 0x10
    Params_GameSaveHorcrux params{};
    params.SaveLabel = (FString)SaveLabel;
    ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::GetPlayingFromDeveloperMenu() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPlayingFromDeveloperMenu"));
    struct Params_GetPlayingFromDeveloperMenu {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayingFromDeveloperMenu params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
APawn* UPhoenixGameInstance::GetPlayerPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPlayerPawn"));
    struct Params_GetPlayerPawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlayerPawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
FRotator UPhoenixGameInstance::GetPlayerOrientation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetPlayerOrientation"));
    struct Params_GetPlayerOrientation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPlayerOrientation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
ELoadingScreenLocation UPhoenixGameInstance::GetCurrentLoadingScreenLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GetCurrentLoadingScreenLocation"));
    struct Params_GetCurrentLoadingScreenLocation {
        ELoadingScreenLocation ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentLoadingScreenLocation params{};
    ProcessEvent(func, &params);
    return (ELoadingScreenLocation)params.ReturnValue;
}
void UPhoenixGameInstance::GameLoadHorcrux(FString SaveLabel, float DestCharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GameLoadHorcrux"));
    struct Params_GameLoadHorcrux {
        FString SaveLabel; // 0x0
        float DestCharacterID; // 0x10
    }; // Size: 0x14
    Params_GameLoadHorcrux params{};
    params.SaveLabel = (FString)SaveLabel;
    params.DestCharacterID = (float)DestCharacterID;
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::GameLoadCloudSave(FString SlotName, bool bNewCharacter, int32_t DestCharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.GameLoadCloudSave"));
    struct Params_GameLoadCloudSave {
        FString SlotName; // 0x0
        bool bNewCharacter; // 0x10
        char pad_11[0x3];
        int32_t DestCharacterID; // 0x14
    }; // Size: 0x18
    Params_GameLoadCloudSave params{};
    params.SlotName = (FString)SlotName;
    params.bNewCharacter = (bool)bNewCharacter;
    params.DestCharacterID = (int32_t)DestCharacterID;
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::FadeReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.FadeReset"));
    struct Params_FadeReset {
    }; // Size: 0x0
    Params_FadeReset params{};
    ProcessEvent(func, &params);
}
ULevel* UPhoenixGameInstance::DetectLevelBelowCamera(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.DetectLevelBelowCamera"));
    struct Params_DetectLevelBelowCamera {
        UObject* WorldContextObject; // 0x0
        ULevel* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_DetectLevelBelowCamera params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevel*)params.ReturnValue;
}
void UPhoenixGameInstance::FadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.FadeOut"));
    struct Params_FadeOut {
    }; // Size: 0x0
    Params_FadeOut params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::FadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.FadeIn"));
    struct Params_FadeIn {
    }; // Size: 0x0
    Params_FadeIn params{};
    ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::ContinueGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.ContinueGame"));
    struct Params_ContinueGame {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ContinueGame params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixGameInstance::ClearPlayerHold() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.ClearPlayerHold"));
    struct Params_ClearPlayerHold {
    }; // Size: 0x0
    Params_ClearPlayerHold params{};
    ProcessEvent(func, &params);
}
void UPhoenixGameInstance::ClearChallengeSpawnLocationFlag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.ClearChallengeSpawnLocationFlag"));
    struct Params_ClearChallengeSpawnLocationFlag {
    }; // Size: 0x0
    Params_ClearChallengeSpawnLocationFlag params{};
    ProcessEvent(func, &params);
}
bool UPhoenixGameInstance::AutoSaveGameData(EAutoSaveReason Type) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameInstance.AutoSaveGameData"));
    struct Params_AutoSaveGameData {
        EAutoSaveReason Type; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_AutoSaveGameData params{};
    params.Type = (EAutoSaveReason)Type;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
