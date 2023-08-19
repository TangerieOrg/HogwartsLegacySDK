#include "AActor.hpp"
#include "AMapPawn.hpp"
#include "APawn.hpp"
#include "APhoenixPathActor.hpp"
#include "APlayerController.hpp"
#include "EAccessibilityAudioCueEventType.hpp"
#include "EBeaconState.hpp"
#include "EBeaconType.hpp"
#include "ECursorControlTypes\Type.hpp"
#include "EMapPostFadeState.hpp"
#include "EMapTransitionStyle.hpp"
#include "EMapTypes\Type.hpp"
#include "FLinearColor.hpp"
#include "FMapDungeonSaveDataBlob.hpp"
#include "FMapIconListContainer.hpp"
#include "FMapOptions.hpp"
#include "FMapWithinRegion.hpp"
#include "FVector.hpp"
#include "UBeaconInfo.hpp"
#include "UClass.hpp"
#include "UCleanNameToDisplayName.hpp"
#include "UDataTable.hpp"
#include "UDebugTextPanel.hpp"
#include "UFunction.hpp"
#include "UGameInstanceSubsystem.hpp"
#include "UMapBase.hpp"
#include "UMapDungeon.hpp"
#include "UMapFXManager.hpp"
#include "UMapHogsmeade.hpp"
#include "UMapHogwarts.hpp"
#include "UMapIcon.hpp"
#include "UMapIconInstance.hpp"
#include "UMapIconList.hpp"
#include "UMapMovementComponent.hpp"
#include "UMapNavData.hpp"
#include "UMapOverland.hpp"
#include "UMapScreenBase.hpp"
#include "UMapSubSystem.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UMinimapManager.hpp"
#include "UObject.hpp"
#include "UPackage.hpp"
#include "USharedMapData.hpp"
#include "USplineComponent.hpp"
#include "UStaticMesh.hpp"
#include "UTexture2D.hpp"
#include "UTextureUtil.hpp"
#include "UUIAccessibilityManager.hpp"
#include "UWorld.hpp"
#include "UWorldSupportWorld.hpp"
void UMapSubSystem::MiniMapSetPlayerToHogwarts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetPlayerToHogwarts"));
    struct Params_MiniMapSetPlayerToHogwarts {
    }; // Size: 0x0
    Params_MiniMapSetPlayerToHogwarts params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniResetPlayerLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniResetPlayerLocation"));
    struct Params_MiniResetPlayerLocation {
    }; // Size: 0x0
    Params_MiniResetPlayerLocation params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::SubdivideAndCreateOctreeAsync() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SubdivideAndCreateOctreeAsync"));
    struct Params_SubdivideAndCreateOctreeAsync {
    }; // Size: 0x0
    Params_SubdivideAndCreateOctreeAsync params{};
    ProcessEvent(func, &params);
}
UMapSubSystem* UMapSubSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapSubSystem");
    return (UMapSubSystem*)res;
}
void UMapSubSystem::UIReleaseTransitionLock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.UIReleaseTransitionLock"));
    struct Params_UIReleaseTransitionLock {
    }; // Size: 0x0
    Params_UIReleaseTransitionLock params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapToggleIconsNearMe() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapToggleIconsNearMe"));
    struct Params_MiniMapToggleIconsNearMe {
    }; // Size: 0x0
    Params_MiniMapToggleIconsNearMe params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetPlayerToHogsmeade() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetPlayerToHogsmeade"));
    struct Params_MiniMapSetPlayerToHogsmeade {
    }; // Size: 0x0
    Params_MiniMapSetPlayerToHogsmeade params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::ShowDebugPanel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.ShowDebugPanel"));
    struct Params_ShowDebugPanel {
    }; // Size: 0x0
    Params_ShowDebugPanel params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::UpdateDungeonFogMaskAsync(FVector PlayerPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.UpdateDungeonFogMaskAsync"));
    struct Params_UpdateDungeonFogMaskAsync {
        FVector PlayerPosition; // 0x0
    }; // Size: 0xc
    Params_UpdateDungeonFogMaskAsync params{};
    params.PlayerPosition = (FVector)PlayerPosition;
    ProcessEvent(func, &params);
}
void UMapSubSystem::OutputCanvasPanelLog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.OutputCanvasPanelLog"));
    struct Params_OutputCanvasPanelLog {
    }; // Size: 0x0
    Params_OutputCanvasPanelLog params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetNoFlyTexture(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetNoFlyTexture"));
    struct Params_MiniMapSetNoFlyTexture {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MiniMapSetNoFlyTexture params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::UpdatePlayerRegionAsync() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.UpdatePlayerRegionAsync"));
    struct Params_UpdatePlayerRegionAsync {
    }; // Size: 0x0
    Params_UpdatePlayerRegionAsync params{};
    ProcessEvent(func, &params);
}
FName UMapSubSystem::DetermineMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.DetermineMap"));
    struct Params_DetermineMap {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_DetermineMap params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UMapSubSystem::UnloadLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.UnloadLevels"));
    struct Params_UnloadLevels {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UnloadLevels params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::SetOverrideFIG01FTCheck(bool pOverrideCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetOverrideFIG01FTCheck"));
    struct Params_SetOverrideFIG01FTCheck {
        bool pOverrideCheck; // 0x0
    }; // Size: 0x1
    Params_SetOverrideFIG01FTCheck params{};
    params.pOverrideCheck = (bool)pOverrideCheck;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::UnloadFieldGuideLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.UnloadFieldGuideLevels"));
    struct Params_UnloadFieldGuideLevels {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UnloadFieldGuideLevels params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::TriggerMapScreenFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.TriggerMapScreenFadeOut"));
    struct Params_TriggerMapScreenFadeOut {
    }; // Size: 0x0
    Params_TriggerMapScreenFadeOut params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::RemoveAreaBeaconByHandle(int32_t Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.RemoveAreaBeaconByHandle"));
    struct Params_RemoveAreaBeaconByHandle {
        int32_t Handle; // 0x0
    }; // Size: 0x4
    Params_RemoveAreaBeaconByHandle params{};
    params.Handle = (int32_t)Handle;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetScale(float Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetScale"));
    struct Params_MiniMapSetScale {
        float Size; // 0x0
    }; // Size: 0x4
    Params_MiniMapSetScale params{};
    params.Size = (float)Size;
    ProcessEvent(func, &params);
}
void UMapSubSystem::TriggerMapScreenFadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.TriggerMapScreenFadeIn"));
    struct Params_TriggerMapScreenFadeIn {
    }; // Size: 0x0
    Params_TriggerMapScreenFadeIn params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::TriggerAccessibility(EAccessibilityAudioCueEventType Type, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.TriggerAccessibility"));
    struct Params_TriggerAccessibility {
        EAccessibilityAudioCueEventType Type; // 0x0
        char pad_1[0x7];
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_TriggerAccessibility params{};
    params.Type = (EAccessibilityAudioCueEventType)Type;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapExportOverlandChestInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapExportOverlandChestInfo"));
    struct Params_MapExportOverlandChestInfo {
    }; // Size: 0x0
    Params_MapExportOverlandChestInfo params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::TeleportToListIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.TeleportToListIndex"));
    struct Params_TeleportToListIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_TeleportToListIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapToggleIntrusionAlert() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapToggleIntrusionAlert"));
    struct Params_MiniMapToggleIntrusionAlert {
    }; // Size: 0x0
    Params_MiniMapToggleIntrusionAlert params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetHasIntroPlayed(bool HasPlayed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetHasIntroPlayed"));
    struct Params_SetHasIntroPlayed {
        bool HasPlayed; // 0x0
    }; // Size: 0x1
    Params_SetHasIntroPlayed params{};
    params.HasPlayed = (bool)HasPlayed;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::StopMap(bool pCleanupActors, EMapPostFadeState PostFadeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.StopMap"));
    struct Params_StopMap {
        bool pCleanupActors; // 0x0
        EMapPostFadeState PostFadeState; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_StopMap params{};
    params.pCleanupActors = (bool)pCleanupActors;
    params.PostFadeState = (EMapPostFadeState)PostFadeState;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MiniMapSetPlayerLocation(float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetPlayerLocation"));
    struct Params_MiniMapSetPlayerLocation {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
    }; // Size: 0xc
    Params_MiniMapSetPlayerLocation params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetPlayerLocationToCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetPlayerLocationToCursor"));
    struct Params_MiniMapSetPlayerLocationToCursor {
    }; // Size: 0x0
    Params_MiniMapSetPlayerLocationToCursor params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::StartTutorialOpenMap(FName TutorialName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.StartTutorialOpenMap"));
    struct Params_StartTutorialOpenMap {
        FName TutorialName; // 0x0
    }; // Size: 0x8
    Params_StartTutorialOpenMap params{};
    params.TutorialName = (FName)TutorialName;
    ProcessEvent(func, &params);
}
TArray<int32_t> UMapSubSystem::GetNewlyDiscoveredBeacons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetNewlyDiscoveredBeacons"));
    struct Params_GetNewlyDiscoveredBeacons {
        TArray<int32_t> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetNewlyDiscoveredBeacons params{};
    ProcessEvent(func, &params);
    return (TArray<int32_t>)params.ReturnValue;
}
void UMapSubSystem::StartMapExitTransition(float InDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.StartMapExitTransition"));
    struct Params_StartMapExitTransition {
        float InDuration; // 0x0
    }; // Size: 0x4
    Params_StartMapExitTransition params{};
    params.InDuration = (float)InDuration;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapToggleFogCheckForIcons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapToggleFogCheckForIcons"));
    struct Params_MapToggleFogCheckForIcons {
    }; // Size: 0x0
    Params_MapToggleFogCheckForIcons params{};
    ProcessEvent(func, &params);
}
bool UMapSubSystem::StartMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.StartMap"));
    struct Params_StartMap {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StartMap params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::OnStartNewDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.OnStartNewDay"));
    struct Params_OnStartNewDay {
    }; // Size: 0x0
    Params_OnStartNewDay params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::ShowMap(bool ShowMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.ShowMap"));
    struct Params_ShowMap {
        bool ShowMap; // 0x0
    }; // Size: 0x1
    Params_ShowMap params{};
    params.ShowMap = (bool)ShowMap;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapShowCursorPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapShowCursorPosition"));
    struct Params_MapShowCursorPosition {
    }; // Size: 0x0
    Params_MapShowCursorPosition params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetToMapFromIndexOrTab(bool InToMapFromIndexOrTab) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetToMapFromIndexOrTab"));
    struct Params_SetToMapFromIndexOrTab {
        bool InToMapFromIndexOrTab; // 0x0
    }; // Size: 0x1
    Params_SetToMapFromIndexOrTab params{};
    params.InToMapFromIndexOrTab = (bool)InToMapFromIndexOrTab;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetShouldRevealMinimapOnStart(bool RevealMinimapOnStart) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetShouldRevealMinimapOnStart"));
    struct Params_SetShouldRevealMinimapOnStart {
        bool RevealMinimapOnStart; // 0x0
    }; // Size: 0x1
    Params_SetShouldRevealMinimapOnStart params{};
    params.RevealMinimapOnStart = (bool)RevealMinimapOnStart;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetLevelName(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetLevelName"));
    struct Params_MiniMapSetLevelName {
        FString LevelName; // 0x0
    }; // Size: 0x10
    Params_MiniMapSetLevelName params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapSpawnFXChain(FName FXChainName, float X, float Y, float Z, float SX, float SY, float SZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSpawnFXChain"));
    struct Params_MapSpawnFXChain {
        FName FXChainName; // 0x0
        float X; // 0x8
        float Y; // 0xc
        float Z; // 0x10
        float SX; // 0x14
        float SY; // 0x18
        float SZ; // 0x1c
    }; // Size: 0x20
    Params_MapSpawnFXChain params{};
    params.FXChainName = (FName)FXChainName;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.SX = (float)SX;
    params.SY = (float)SY;
    params.SZ = (float)SZ;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetMiniMapManager(UMinimapManager* pMiniMapManager) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetMiniMapManager"));
    struct Params_SetMiniMapManager {
        UMinimapManager* pMiniMapManager; // 0x0
    }; // Size: 0x8
    Params_SetMiniMapManager params{};
    params.pMiniMapManager = (UMinimapManager*)pMiniMapManager;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetMapTransitionStyle(EMapTransitionStyle InStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetMapTransitionStyle"));
    struct Params_SetMapTransitionStyle {
        EMapTransitionStyle InStyle; // 0x0
    }; // Size: 0x1
    Params_SetMapTransitionStyle params{};
    params.InStyle = (EMapTransitionStyle)InStyle;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetLastActiveMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetLastActiveMap"));
    struct Params_SetLastActiveMap {
    }; // Size: 0x0
    Params_SetLastActiveMap params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetIsInVault(bool InIsInVault) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetIsInVault"));
    struct Params_SetIsInVault {
        bool InIsInVault; // 0x0
    }; // Size: 0x1
    Params_SetIsInVault params{};
    params.InIsInVault = (bool)InIsInVault;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetIsFromOverland(bool IsFromOverland) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetIsFromOverland"));
    struct Params_SetIsFromOverland {
        bool IsFromOverland; // 0x0
    }; // Size: 0x1
    Params_SetIsFromOverland params{};
    params.IsFromOverland = (bool)IsFromOverland;
    ProcessEvent(func, &params);
}
void UMapSubSystem::RecenterMapPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.RecenterMapPawn"));
    struct Params_RecenterMapPawn {
    }; // Size: 0x0
    Params_RecenterMapPawn params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapCancelLogs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapCancelLogs"));
    struct Params_MapCancelLogs {
    }; // Size: 0x0
    Params_MapCancelLogs params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTestRegionSaturation(FName Region) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTestRegionSaturation"));
    struct Params_MapTestRegionSaturation {
        FName Region; // 0x0
    }; // Size: 0x8
    Params_MapTestRegionSaturation params{};
    params.Region = (FName)Region;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetIsFromDungeon(bool IsFromDungeon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetIsFromDungeon"));
    struct Params_SetIsFromDungeon {
        bool IsFromDungeon; // 0x0
    }; // Size: 0x1
    Params_SetIsFromDungeon params{};
    params.IsFromDungeon = (bool)IsFromDungeon;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetInPauseMenu(bool InPauseMenuFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetInPauseMenu"));
    struct Params_SetInPauseMenu {
        bool InPauseMenuFlag; // 0x0
    }; // Size: 0x1
    Params_SetInPauseMenu params{};
    params.InPauseMenuFlag = (bool)InPauseMenuFlag;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetFadeToGame(bool pSetFadeToGame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetFadeToGame"));
    struct Params_SetFadeToGame {
        bool pSetFadeToGame; // 0x0
    }; // Size: 0x1
    Params_SetFadeToGame params{};
    params.pSetFadeToGame = (bool)pSetFadeToGame;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetIfFromFieldGuide(bool pIsFromFieldGuide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetIfFromFieldGuide"));
    struct Params_SetIfFromFieldGuide {
        bool pIsFromFieldGuide; // 0x0
    }; // Size: 0x1
    Params_SetIfFromFieldGuide params{};
    params.pIsFromFieldGuide = (bool)pIsFromFieldGuide;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetFieldGuideWorldToNull() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetFieldGuideWorldToNull"));
    struct Params_SetFieldGuideWorldToNull {
    }; // Size: 0x0
    Params_SetFieldGuideWorldToNull params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapShowMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapShowMap"));
    struct Params_MapShowMap {
    }; // Size: 0x0
    Params_MapShowMap params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapVerifyBeacons(int32_t LocationIndex, int32_t pTeleportType, int32_t pEndIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapVerifyBeacons"));
    struct Params_MapVerifyBeacons {
        int32_t LocationIndex; // 0x0
        int32_t pTeleportType; // 0x4
        int32_t pEndIndex; // 0x8
    }; // Size: 0xc
    Params_MapVerifyBeacons params{};
    params.LocationIndex = (int32_t)LocationIndex;
    params.pTeleportType = (int32_t)pTeleportType;
    params.pEndIndex = (int32_t)pEndIndex;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetFelixFelicisPotionRadius(float PotionRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetFelixFelicisPotionRadius"));
    struct Params_SetFelixFelicisPotionRadius {
        float PotionRadius; // 0x0
    }; // Size: 0x4
    Params_SetFelixFelicisPotionRadius params{};
    params.PotionRadius = (float)PotionRadius;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetFelixFelicisPotionActive(bool pFelixFelicisPotionActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetFelixFelicisPotionActive"));
    struct Params_SetFelixFelicisPotionActive {
        bool pFelixFelicisPotionActive; // 0x0
    }; // Size: 0x1
    Params_SetFelixFelicisPotionActive params{};
    params.pFelixFelicisPotionActive = (bool)pFelixFelicisPotionActive;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetDeveloperMenuUsed(bool pUsedDeveloperMenu) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetDeveloperMenuUsed"));
    struct Params_SetDeveloperMenuUsed {
        bool pUsedDeveloperMenu; // 0x0
    }; // Size: 0x1
    Params_SetDeveloperMenuUsed params{};
    params.pUsedDeveloperMenu = (bool)pUsedDeveloperMenu;
    ProcessEvent(func, &params);
}
void UMapSubSystem::OnStatChanged(FName StatID, int32_t Value, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.OnStatChanged"));
    struct Params_OnStatChanged {
        FName StatID; // 0x0
        int32_t Value; // 0x8
        int32_t Delta; // 0xc
    }; // Size: 0x10
    Params_OnStatChanged params{};
    params.StatID = (FName)StatID;
    params.Value = (int32_t)Value;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
void UMapSubSystem::SetCoverDisplayed(bool IsDisplayed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetCoverDisplayed"));
    struct Params_SetCoverDisplayed {
        bool IsDisplayed; // 0x0
    }; // Size: 0x1
    Params_SetCoverDisplayed params{};
    params.IsDisplayed = (bool)IsDisplayed;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::SetActiveMapByType(EMapTypes::Type& MapType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetActiveMapByType"));
    struct Params_SetActiveMapByType {
        EMapTypes::Type MapType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetActiveMapByType params{};
    params.MapType = (EMapTypes::Type)MapType;
    ProcessEvent(func, &params);
    MapType = params.MapType;
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::SetActiveMap(FName MapName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.SetActiveMap"));
    struct Params_SetActiveMap {
        FName MapName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetActiveMap params{};
    params.MapName = (FName)MapName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapToggleFogDrawMode(int32_t DrawMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapToggleFogDrawMode"));
    struct Params_MapToggleFogDrawMode {
        int32_t DrawMode; // 0x0
    }; // Size: 0x4
    Params_MapToggleFogDrawMode params{};
    params.DrawMode = (int32_t)DrawMode;
    ProcessEvent(func, &params);
}
void UMapSubSystem::RestoreMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.RestoreMap"));
    struct Params_RestoreMap {
    }; // Size: 0x0
    Params_RestoreMap params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetPerceptionOverlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetPerceptionOverlay"));
    struct Params_MiniMapSetPerceptionOverlay {
    }; // Size: 0x0
    Params_MiniMapSetPerceptionOverlay params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::LoadGameLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.LoadGameLevel"));
    struct Params_LoadGameLevel {
        FString LevelName; // 0x0
    }; // Size: 0x10
    Params_LoadGameLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
}
void UMapSubSystem::RemovePathToLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.RemovePathToLocation"));
    struct Params_RemovePathToLocation {
    }; // Size: 0x0
    Params_RemovePathToLocation params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::OutputWidgetLog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.OutputWidgetLog"));
    struct Params_OutputWidgetLog {
    }; // Size: 0x0
    Params_OutputWidgetLog params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapSendHermes(FName MessageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSendHermes"));
    struct Params_MapSendHermes {
        FName MessageName; // 0x0
    }; // Size: 0x8
    Params_MapSendHermes params{};
    params.MessageName = (FName)MessageName;
    ProcessEvent(func, &params);
}
void UMapSubSystem::OnStartPathing(UObject* i_caller, uint32_t BeaconHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.OnStartPathing"));
    struct Params_OnStartPathing {
        UObject* i_caller; // 0x0
        uint32_t BeaconHandle; // 0x8
    }; // Size: 0xc
    Params_OnStartPathing params{};
    params.i_caller = (UObject*)i_caller;
    params.BeaconHandle = (uint32_t)BeaconHandle;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetMap(FName MapName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetMap"));
    struct Params_MiniMapSetMap {
        FName MapName; // 0x0
    }; // Size: 0x8
    Params_MiniMapSetMap params{};
    params.MapName = (FName)MapName;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapToggleIcons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapToggleIcons"));
    struct Params_MiniMapToggleIcons {
    }; // Size: 0x0
    Params_MiniMapToggleIcons params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapShowIconStats() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapShowIconStats"));
    struct Params_MiniMapShowIconStats {
    }; // Size: 0x0
    Params_MiniMapShowIconStats params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetTutorialIntroLevel(FName IntroLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetTutorialIntroLevel"));
    struct Params_MiniMapSetTutorialIntroLevel {
        FName IntroLevel; // 0x0
    }; // Size: 0x8
    Params_MiniMapSetTutorialIntroLevel params{};
    params.IntroLevel = (FName)IntroLevel;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetSize(float Size, float ZoomTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetSize"));
    struct Params_MiniMapSetSize {
        float Size; // 0x0
        float ZoomTime; // 0x4
    }; // Size: 0x8
    Params_MiniMapSetSize params{};
    params.Size = (float)Size;
    params.ZoomTime = (float)ZoomTime;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::IsMapActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsMapActive"));
    struct Params_IsMapActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMapActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MiniMapSetPlayerActorPosition(float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetPlayerActorPosition"));
    struct Params_MiniMapSetPlayerActorPosition {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
    }; // Size: 0xc
    Params_MiniMapSetPlayerActorPosition params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetOptions(int32_t Size, float Opacity, int32_t PathlineOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetOptions"));
    struct Params_MiniMapSetOptions {
        int32_t Size; // 0x0
        float Opacity; // 0x4
        int32_t PathlineOn; // 0x8
    }; // Size: 0xc
    Params_MiniMapSetOptions params{};
    params.Size = (int32_t)Size;
    params.Opacity = (float)Opacity;
    params.PathlineOn = (int32_t)PathlineOn;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetLevel(int32_t LevelIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetLevel"));
    struct Params_MiniMapSetLevel {
        int32_t LevelIndex; // 0x0
    }; // Size: 0x4
    Params_MiniMapSetLevel params{};
    params.LevelIndex = (int32_t)LevelIndex;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetIconSize(float Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetIconSize"));
    struct Params_MiniMapSetIconSize {
        float Size; // 0x0
    }; // Size: 0x4
    Params_MiniMapSetIconSize params{};
    params.Size = (float)Size;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetDungeonRadius(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetDungeonRadius"));
    struct Params_MiniMapSetDungeonRadius {
        float Value; // 0x0
    }; // Size: 0x4
    Params_MiniMapSetDungeonRadius params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapSetIconScale(float IconDistanceScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapSetIconScale"));
    struct Params_MiniMapSetIconScale {
        float IconDistanceScale; // 0x0
    }; // Size: 0x4
    Params_MiniMapSetIconScale params{};
    params.IconDistanceScale = (float)IconDistanceScale;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapReveal(int32_t Reveal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapReveal"));
    struct Params_MiniMapReveal {
        int32_t Reveal; // 0x0
    }; // Size: 0x4
    Params_MiniMapReveal params{};
    params.Reveal = (int32_t)Reveal;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapHideIcons(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapHideIcons"));
    struct Params_MapHideIcons {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapHideIcons params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapQuickFade(int32_t Reveal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapQuickFade"));
    struct Params_MiniMapQuickFade {
        int32_t Reveal; // 0x0
    }; // Size: 0x4
    Params_MiniMapQuickFade params{};
    params.Reveal = (int32_t)Reveal;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTurnOnDebugCamera(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTurnOnDebugCamera"));
    struct Params_MapTurnOnDebugCamera {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapTurnOnDebugCamera params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapDungeonSetPartialTextureUpdate(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapDungeonSetPartialTextureUpdate"));
    struct Params_MiniMapDungeonSetPartialTextureUpdate {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_MiniMapDungeonSetPartialTextureUpdate params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapDungeonEnableFogOfWar(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapDungeonEnableFogOfWar"));
    struct Params_MiniMapDungeonEnableFogOfWar {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_MiniMapDungeonEnableFogOfWar params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapDungeonDebug(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapDungeonDebug"));
    struct Params_MiniMapDungeonDebug {
        float Value; // 0x0
    }; // Size: 0x4
    Params_MiniMapDungeonDebug params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapProcessFlightNav() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapProcessFlightNav"));
    struct Params_MapProcessFlightNav {
    }; // Size: 0x0
    Params_MapProcessFlightNav params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapDebugMap(FName MapName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapDebugMap"));
    struct Params_MiniMapDebugMap {
        FName MapName; // 0x0
    }; // Size: 0x8
    Params_MiniMapDebugMap params{};
    params.MapName = (FName)MapName;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapShowMapIconStats() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapShowMapIconStats"));
    struct Params_MapShowMapIconStats {
    }; // Size: 0x0
    Params_MapShowMapIconStats params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapDeactivateIntrusionArea(FName IntrusionVolumeActorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapDeactivateIntrusionArea"));
    struct Params_MiniMapDeactivateIntrusionArea {
        FName IntrusionVolumeActorName; // 0x0
    }; // Size: 0x8
    Params_MiniMapDeactivateIntrusionArea params{};
    params.IntrusionVolumeActorName = (FName)IntrusionVolumeActorName;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapAlwaysShowFastTravelIcons(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapAlwaysShowFastTravelIcons"));
    struct Params_MiniMapAlwaysShowFastTravelIcons {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MiniMapAlwaysShowFastTravelIcons params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MiniMapActivateIntrusionArea(FName IntrusionVolumeActorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MiniMapActivateIntrusionArea"));
    struct Params_MiniMapActivateIntrusionArea {
        FName IntrusionVolumeActorName; // 0x0
    }; // Size: 0x8
    Params_MiniMapActivateIntrusionArea params{};
    params.IntrusionVolumeActorName = (FName)IntrusionVolumeActorName;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTurnOnCompletionMessages(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTurnOnCompletionMessages"));
    struct Params_MapTurnOnCompletionMessages {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapTurnOnCompletionMessages params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapWriteLog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapWriteLog"));
    struct Params_MapWriteLog {
    }; // Size: 0x0
    Params_MapWriteLog params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapUnlockAllRegions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapUnlockAllRegions"));
    struct Params_MapUnlockAllRegions {
    }; // Size: 0x0
    Params_MapUnlockAllRegions params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapUnlockAllMapIcons(int32_t Type) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapUnlockAllMapIcons"));
    struct Params_MapUnlockAllMapIcons {
        int32_t Type; // 0x0
    }; // Size: 0x4
    Params_MapUnlockAllMapIcons params{};
    params.Type = (int32_t)Type;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapUnloadOverlandLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapUnloadOverlandLevels"));
    struct Params_MapUnloadOverlandLevels {
    }; // Size: 0x0
    Params_MapUnloadOverlandLevels params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTurnOnCollisionSphere(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTurnOnCollisionSphere"));
    struct Params_MapTurnOnCollisionSphere {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapTurnOnCollisionSphere params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::IsTutorial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsTutorial"));
    struct Params_IsTutorial {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTutorial params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapTurnOnAllMapLocations(FName Filter, bool pSetStateToShown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTurnOnAllMapLocations"));
    struct Params_MapTurnOnAllMapLocations {
        FName Filter; // 0x0
        bool pSetStateToShown; // 0x8
    }; // Size: 0x9
    Params_MapTurnOnAllMapLocations params{};
    params.Filter = (FName)Filter;
    params.pSetStateToShown = (bool)pSetStateToShown;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTurnOffMapLocationNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTurnOffMapLocationNames"));
    struct Params_MapTurnOffMapLocationNames {
    }; // Size: 0x0
    Params_MapTurnOffMapLocationNames params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTriggerMapScreenFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTriggerMapScreenFadeOut"));
    struct Params_MapTriggerMapScreenFadeOut {
    }; // Size: 0x0
    Params_MapTriggerMapScreenFadeOut params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTriggerMapScreenFadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTriggerMapScreenFadeIn"));
    struct Params_MapTriggerMapScreenFadeIn {
    }; // Size: 0x0
    Params_MapTriggerMapScreenFadeIn params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapToggleRegionSplineDots(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapToggleRegionSplineDots"));
    struct Params_MapToggleRegionSplineDots {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapToggleRegionSplineDots params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapReloadMapTables() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapReloadMapTables"));
    struct Params_MapReloadMapTables {
    }; // Size: 0x0
    Params_MapReloadMapTables params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTogglePushIconsAway() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTogglePushIconsAway"));
    struct Params_MapTogglePushIconsAway {
    }; // Size: 0x0
    Params_MapTogglePushIconsAway params{};
    ProcessEvent(func, &params);
}
bool UMapSubSystem::GetIsInVault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetIsInVault"));
    struct Params_GetIsInVault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsInVault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapTogglePathDots() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTogglePathDots"));
    struct Params_MapTogglePathDots {
    }; // Size: 0x0
    Params_MapTogglePathDots params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTogglePathDebug() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTogglePathDebug"));
    struct Params_MapTogglePathDebug {
    }; // Size: 0x0
    Params_MapTogglePathDebug params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapToggleMapRoads() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapToggleMapRoads"));
    struct Params_MapToggleMapRoads {
    }; // Size: 0x0
    Params_MapToggleMapRoads params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapToggleMapBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapToggleMapBounds"));
    struct Params_MapToggleMapBounds {
    }; // Size: 0x0
    Params_MapToggleMapBounds params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapToggleIconStacking(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapToggleIconStacking"));
    struct Params_MapToggleIconStacking {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapToggleIconStacking params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapToggleFog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapToggleFog"));
    struct Params_MapToggleFog {
    }; // Size: 0x0
    Params_MapToggleFog params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTestMissionIcons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTestMissionIcons"));
    struct Params_MapTestMissionIcons {
    }; // Size: 0x0
    Params_MapTestMissionIcons params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapTeleportToLocation(FString pName, int32_t pTeleportType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapTeleportToLocation"));
    struct Params_MapTeleportToLocation {
        FString pName; // 0x0
        int32_t pTeleportType; // 0x10
    }; // Size: 0x14
    Params_MapTeleportToLocation params{};
    params.pName = (FString)pName;
    params.pTeleportType = (int32_t)pTeleportType;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapStopFXChain() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapStopFXChain"));
    struct Params_MapStopFXChain {
    }; // Size: 0x0
    Params_MapStopFXChain params{};
    ProcessEvent(func, &params);
}
FLinearColor UMapSubSystem::GetIconColorByState(EBeaconState BeaconState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetIconColorByState"));
    struct Params_GetIconColorByState {
        EBeaconState BeaconState; // 0x0
        char pad_1[0x3];
        FLinearColor ReturnValue; // 0x4
    }; // Size: 0x14
    Params_GetIconColorByState params{};
    params.BeaconState = (EBeaconState)BeaconState;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UMapSubSystem::MapStopFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapStopFX"));
    struct Params_MapStopFX {
    }; // Size: 0x0
    Params_MapStopFX params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::AudioCueTrigger(int32_t DisplayType, int32_t CueType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.AudioCueTrigger"));
    struct Params_AudioCueTrigger {
        int32_t DisplayType; // 0x0
        int32_t CueType; // 0x4
    }; // Size: 0x8
    Params_AudioCueTrigger params{};
    params.DisplayType = (int32_t)DisplayType;
    params.CueType = (int32_t)CueType;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapStopFieldGuideTest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapStopFieldGuideTest"));
    struct Params_MapStopFieldGuideTest {
    }; // Size: 0x0
    Params_MapStopFieldGuideTest params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapSpawnFX(FName FXName, float X, float Y, float Z, float SX, float SY, float SZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSpawnFX"));
    struct Params_MapSpawnFX {
        FName FXName; // 0x0
        float X; // 0x8
        float Y; // 0xc
        float Z; // 0x10
        float SX; // 0x14
        float SY; // 0x18
        float SZ; // 0x1c
    }; // Size: 0x20
    Params_MapSpawnFX params{};
    params.FXName = (FName)FXName;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.SX = (float)SX;
    params.SY = (float)SY;
    params.SZ = (float)SZ;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapShowTierLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapShowTierLevel"));
    struct Params_MapShowTierLevel {
    }; // Size: 0x0
    Params_MapShowTierLevel params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapShowPathingDebug() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapShowPathingDebug"));
    struct Params_MapShowPathingDebug {
    }; // Size: 0x0
    Params_MapShowPathingDebug params{};
    ProcessEvent(func, &params);
}
bool UMapSubSystem::IsOverlandLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsOverlandLevel"));
    struct Params_IsOverlandLevel {
        FString LevelName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsOverlandLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapShowIconsWithoutRegions(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapShowIconsWithoutRegions"));
    struct Params_MapShowIconsWithoutRegions {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapShowIconsWithoutRegions params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::IsFTPointValidPreFIG01b(FString FTLocationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsFTPointValidPreFIG01b"));
    struct Params_IsFTPointValidPreFIG01b {
        FString FTLocationID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsFTPointValidPreFIG01b params{};
    params.FTLocationID = (FString)FTLocationID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapShowCollisionActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapShowCollisionActor"));
    struct Params_MapShowCollisionActor {
    }; // Size: 0x0
    Params_MapShowCollisionActor params{};
    ProcessEvent(func, &params);
}
uint32_t UMapSubSystem::MapAddAreaBeaconAtPlayerLocation(float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapAddAreaBeaconAtPlayerLocation"));
    struct Params_MapAddAreaBeaconAtPlayerLocation {
        float Radius; // 0x0
        uint32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_MapAddAreaBeaconAtPlayerLocation params{};
    params.Radius = (float)Radius;
    ProcessEvent(func, &params);
    return (uint32_t)params.ReturnValue;
}
void UMapSubSystem::MapSetSpecificIcons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSetSpecificIcons"));
    struct Params_MapSetSpecificIcons {
    }; // Size: 0x0
    Params_MapSetSpecificIcons params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapSetPlayerToCursorPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSetPlayerToCursorPosition"));
    struct Params_MapSetPlayerToCursorPosition {
    }; // Size: 0x0
    Params_MapSetPlayerToCursorPosition params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapGiveMeHelp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapGiveMeHelp"));
    struct Params_MapGiveMeHelp {
    }; // Size: 0x0
    Params_MapGiveMeHelp params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapMoveToTier(int32_t tierValue, float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapMoveToTier"));
    struct Params_MapMoveToTier {
        int32_t tierValue; // 0x0
        float Time; // 0x4
    }; // Size: 0x8
    Params_MapMoveToTier params{};
    params.tierValue = (int32_t)tierValue;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapSetIsFromFieldGuide(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSetIsFromFieldGuide"));
    struct Params_MapSetIsFromFieldGuide {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapSetIsFromFieldGuide params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapSetIconSize(float Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSetIconSize"));
    struct Params_MapSetIconSize {
        float Size; // 0x0
    }; // Size: 0x4
    Params_MapSetIconSize params{};
    params.Size = (float)Size;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapSetBeaconState(EBeaconType BeaconType, EBeaconState BeaconState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSetBeaconState"));
    struct Params_MapSetBeaconState {
        EBeaconType BeaconType; // 0x0
        EBeaconState BeaconState; // 0x1
    }; // Size: 0x2
    Params_MapSetBeaconState params{};
    params.BeaconType = (EBeaconType)BeaconType;
    params.BeaconState = (EBeaconState)BeaconState;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapSendHermesString(FName MessageName, FName Parameter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapSendHermesString"));
    struct Params_MapSendHermesString {
        FName MessageName; // 0x0
        FName Parameter; // 0x8
    }; // Size: 0x10
    Params_MapSendHermesString params{};
    params.MessageName = (FName)MessageName;
    params.Parameter = (FName)Parameter;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapRestoreIcons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapRestoreIcons"));
    struct Params_MapRestoreIcons {
    }; // Size: 0x0
    Params_MapRestoreIcons params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapRemoveDebugPane() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapRemoveDebugPane"));
    struct Params_MapRemoveDebugPane {
    }; // Size: 0x0
    Params_MapRemoveDebugPane params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapOverrideMapCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapOverrideMapCamera"));
    struct Params_MapOverrideMapCamera {
    }; // Size: 0x0
    Params_MapOverrideMapCamera params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapOpenFieldGuideTest(int32_t DoFastTravel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapOpenFieldGuideTest"));
    struct Params_MapOpenFieldGuideTest {
        int32_t DoFastTravel; // 0x0
    }; // Size: 0x4
    Params_MapOpenFieldGuideTest params{};
    params.DoFastTravel = (int32_t)DoFastTravel;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::GetCoverIsDisplayed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetCoverIsDisplayed"));
    struct Params_GetCoverIsDisplayed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCoverIsDisplayed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapLoadOverlandLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapLoadOverlandLevels"));
    struct Params_MapLoadOverlandLevels {
    }; // Size: 0x0
    Params_MapLoadOverlandLevels params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapLerpToIcon(float X, float Y, float Z, float Speed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapLerpToIcon"));
    struct Params_MapLerpToIcon {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
        float Speed; // 0xc
    }; // Size: 0x10
    Params_MapLerpToIcon params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.Speed = (float)Speed;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapIconTextureCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapIconTextureCallback"));
    struct Params_MapIconTextureCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_MapIconTextureCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapFillRegionMask() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapFillRegionMask"));
    struct Params_MapFillRegionMask {
    }; // Size: 0x0
    Params_MapFillRegionMask params{};
    ProcessEvent(func, &params);
}
UWorld* UMapSubSystem::GetGameWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetGameWorld"));
    struct Params_GetGameWorld {
        UWorld* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGameWorld params{};
    ProcessEvent(func, &params);
    return (UWorld*)params.ReturnValue;
}
void UMapSubSystem::MapDungeonTogglePPV() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapDungeonTogglePPV"));
    struct Params_MapDungeonTogglePPV {
    }; // Size: 0x0
    Params_MapDungeonTogglePPV params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapDungeonShowStats() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapDungeonShowStats"));
    struct Params_MapDungeonShowStats {
    }; // Size: 0x0
    Params_MapDungeonShowStats params{};
    ProcessEvent(func, &params);
}
UMapFXManager* UMapSubSystem::GetFXManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetFXManager"));
    struct Params_GetFXManager {
        UMapFXManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFXManager params{};
    ProcessEvent(func, &params);
    return (UMapFXManager*)params.ReturnValue;
}
void UMapSubSystem::MapDungeonShowAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapDungeonShowAll"));
    struct Params_MapDungeonShowAll {
    }; // Size: 0x0
    Params_MapDungeonShowAll params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapDumpUnmatchedBeacons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapDumpUnmatchedBeacons"));
    struct Params_MapDumpUnmatchedBeacons {
    }; // Size: 0x0
    Params_MapDumpUnmatchedBeacons params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapDumpNoRegionBeacons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapDumpNoRegionBeacons"));
    struct Params_MapDumpNoRegionBeacons {
    }; // Size: 0x0
    Params_MapDumpNoRegionBeacons params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapDumpDynamicBeacons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapDumpDynamicBeacons"));
    struct Params_MapDumpDynamicBeacons {
    }; // Size: 0x0
    Params_MapDumpDynamicBeacons params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapDumpDiscoverableBeacons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapDumpDiscoverableBeacons"));
    struct Params_MapDumpDiscoverableBeacons {
    }; // Size: 0x0
    Params_MapDumpDiscoverableBeacons params{};
    ProcessEvent(func, &params);
}
bool UMapSubSystem::IsBeaconNameInMapDB(FString BeaconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsBeaconNameInMapDB"));
    struct Params_IsBeaconNameInMapDB {
        FString BeaconName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsBeaconNameInMapDB params{};
    params.BeaconName = (FString)BeaconName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapDoKnowledgeCard(FString Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapDoKnowledgeCard"));
    struct Params_MapDoKnowledgeCard {
        FString Item; // 0x0
    }; // Size: 0x10
    Params_MapDoKnowledgeCard params{};
    params.Item = (FString)Item;
    ProcessEvent(func, &params);
}
UMapBase* UMapSubSystem::GetActiveMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetActiveMap"));
    struct Params_GetActiveMap {
        UMapBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveMap params{};
    ProcessEvent(func, &params);
    return (UMapBase*)params.ReturnValue;
}
void UMapSubSystem::MapCreateDebugPane() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapCreateDebugPane"));
    struct Params_MapCreateDebugPane {
    }; // Size: 0x0
    Params_MapCreateDebugPane params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapClearWorldStack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapClearWorldStack"));
    struct Params_MapClearWorldStack {
    }; // Size: 0x0
    Params_MapClearWorldStack params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapClearRegionMask() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapClearRegionMask"));
    struct Params_MapClearRegionMask {
    }; // Size: 0x0
    Params_MapClearRegionMask params{};
    ProcessEvent(func, &params);
}
bool UMapSubSystem::IsHogwartsLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsHogwartsLevel"));
    struct Params_IsHogwartsLevel {
        FString LevelName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsHogwartsLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapAlwaysShowMerlin(int32_t ShowMerlin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapAlwaysShowMerlin"));
    struct Params_MapAlwaysShowMerlin {
        int32_t ShowMerlin; // 0x0
    }; // Size: 0x4
    Params_MapAlwaysShowMerlin params{};
    params.ShowMerlin = (int32_t)ShowMerlin;
    ProcessEvent(func, &params);
}
void UMapSubSystem::MapAlwaysShowDemiguise(int32_t ShowDemiguise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapAlwaysShowDemiguise"));
    struct Params_MapAlwaysShowDemiguise {
        int32_t ShowDemiguise; // 0x0
    }; // Size: 0x4
    Params_MapAlwaysShowDemiguise params{};
    params.ShowDemiguise = (int32_t)ShowDemiguise;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::GetIsFromFieldGuide() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetIsFromFieldGuide"));
    struct Params_GetIsFromFieldGuide {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsFromFieldGuide params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::MapAlwaysDefaultToOverlandMap(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapAlwaysDefaultToOverlandMap"));
    struct Params_MapAlwaysDefaultToOverlandMap {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_MapAlwaysDefaultToOverlandMap params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
FLinearColor UMapSubSystem::GetTrackedMissionColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetTrackedMissionColor"));
    struct Params_GetTrackedMissionColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetTrackedMissionColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
uint32_t UMapSubSystem::MapAddDynamicBeacon(EBeaconType BeaconType, FName BeaconName, FName BeaconIcon, float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.MapAddDynamicBeacon"));
    struct Params_MapAddDynamicBeacon {
        EBeaconType BeaconType; // 0x0
        char pad_1[0x3];
        FName BeaconName; // 0x4
        FName BeaconIcon; // 0xc
        float X; // 0x14
        float Y; // 0x18
        float Z; // 0x1c
        uint32_t ReturnValue; // 0x20
    }; // Size: 0x24
    Params_MapAddDynamicBeacon params{};
    params.BeaconType = (EBeaconType)BeaconType;
    params.BeaconName = (FName)BeaconName;
    params.BeaconIcon = (FName)BeaconIcon;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ProcessEvent(func, &params);
    return (uint32_t)params.ReturnValue;
}
bool UMapSubSystem::IsTutorialLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsTutorialLevel"));
    struct Params_IsTutorialLevel {
        FString LevelName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsTutorialLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::Locate(FString ItemToLocate, FString Category, FString OnMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.Locate"));
    struct Params_Locate {
        FString ItemToLocate; // 0x0
        FString Category; // 0x10
        FString OnMap; // 0x20
    }; // Size: 0x30
    Params_Locate params{};
    params.ItemToLocate = (FString)ItemToLocate;
    params.Category = (FString)Category;
    params.OnMap = (FString)OnMap;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::LoadLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.LoadLevels"));
    struct Params_LoadLevels {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_LoadLevels params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::LoadFieldGuideLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.LoadFieldGuideLevels"));
    struct Params_LoadFieldGuideLevels {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_LoadFieldGuideLevels params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsTentLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsTentLevel"));
    struct Params_IsTentLevel {
        FString LevelName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsTentLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsTent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsTent"));
    struct Params_IsTent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::GetDeveloperMenuUsed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetDeveloperMenuUsed"));
    struct Params_GetDeveloperMenuUsed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDeveloperMenuUsed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsSanctuaryLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsSanctuaryLevel"));
    struct Params_IsSanctuaryLevel {
        FString LevelName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsSanctuaryLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsSanctuary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsSanctuary"));
    struct Params_IsSanctuary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSanctuary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsPathDisplayEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsPathDisplayEnabled"));
    struct Params_IsPathDisplayEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPathDisplayEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsOverland() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsOverland"));
    struct Params_IsOverland {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOverland params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FMapWithinRegion UMapSubSystem::GetCurrentPlayerRegionInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetCurrentPlayerRegionInfo"));
    struct Params_GetCurrentPlayerRegionInfo {
        FMapWithinRegion ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetCurrentPlayerRegionInfo params{};
    ProcessEvent(func, &params);
    return (FMapWithinRegion)params.ReturnValue;
}
bool UMapSubSystem::IsMapReadyCalled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsMapReadyCalled"));
    struct Params_IsMapReadyCalled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMapReadyCalled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMinimapManager* UMapSubSystem::GetMiniMapManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMiniMapManager"));
    struct Params_GetMiniMapManager {
        UMinimapManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMiniMapManager params{};
    ProcessEvent(func, &params);
    return (UMinimapManager*)params.ReturnValue;
}
bool UMapSubSystem::IsMapReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsMapReady"));
    struct Params_IsMapReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMapReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsHoloLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsHoloLevel"));
    struct Params_IsHoloLevel {
        FString LevelName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsHoloLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsHolo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsHolo"));
    struct Params_IsHolo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHolo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsHogwarts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsHogwarts"));
    struct Params_IsHogwarts {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHogwarts params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EMapTransitionStyle UMapSubSystem::GetMapTransitionStyle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMapTransitionStyle"));
    struct Params_GetMapTransitionStyle {
        EMapTransitionStyle ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMapTransitionStyle params{};
    ProcessEvent(func, &params);
    return (EMapTransitionStyle)params.ReturnValue;
}
bool UMapSubSystem::IsHogsmeadeLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsHogsmeadeLevel"));
    struct Params_IsHogsmeadeLevel {
        FString LevelName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsHogsmeadeLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsHogsmeade() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsHogsmeade"));
    struct Params_IsHogsmeade {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHogsmeade params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsFromOverland() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsFromOverland"));
    struct Params_IsFromOverland {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFromOverland params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsFromDungeon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsFromDungeon"));
    struct Params_IsFromDungeon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFromDungeon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsExclusiveMissionActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsExclusiveMissionActive"));
    struct Params_IsExclusiveMissionActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsExclusiveMissionActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsDungeonMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsDungeonMap"));
    struct Params_IsDungeonMap {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDungeonMap params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsDungeonLevel(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsDungeonLevel"));
    struct Params_IsDungeonLevel {
        FString LevelName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsDungeonLevel params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsDungeon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsDungeon"));
    struct Params_IsDungeon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDungeon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::IsBeaconComplete(FString BeaconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.IsBeaconComplete"));
    struct Params_IsBeaconComplete {
        FString BeaconName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsBeaconComplete params{};
    params.BeaconName = (FString)BeaconName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::HasDungeonBeenEntered(FString DungeonName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.HasDungeonBeenEntered"));
    struct Params_HasDungeonBeenEntered {
        FString DungeonName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HasDungeonBeenEntered params{};
    params.DungeonName = (FString)DungeonName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::GetUsingGamePad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetUsingGamePad"));
    struct Params_GetUsingGamePad {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUsingGamePad params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FLinearColor UMapSubSystem::GetTrackedWaypointColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetTrackedWaypointColor"));
    struct Params_GetTrackedWaypointColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetTrackedWaypointColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UMapSubSystem::GetTrackedColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetTrackedColor"));
    struct Params_GetTrackedColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetTrackedColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool UMapSubSystem::GetShouldRevealMinimapOnStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetShouldRevealMinimapOnStart"));
    struct Params_GetShouldRevealMinimapOnStart {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShouldRevealMinimapOnStart params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FMapWithinRegion UMapSubSystem::GetRegionForLocation(FVector Location, UMapBase* MapBase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetRegionForLocation"));
    struct Params_GetRegionForLocation {
        FVector Location; // 0x0
        char pad_c[0x4];
        UMapBase* MapBase; // 0x10
        FMapWithinRegion ReturnValue; // 0x18
    }; // Size: 0x48
    Params_GetRegionForLocation params{};
    params.Location = (FVector)Location;
    params.MapBase = (UMapBase*)MapBase;
    ProcessEvent(func, &params);
    return (FMapWithinRegion)params.ReturnValue;
}
void UMapSubSystem::GetPlayerLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetPlayerLocation"));
    struct Params_GetPlayerLocation {
    }; // Size: 0x0
    Params_GetPlayerLocation params{};
    ProcessEvent(func, &params);
}
void UMapSubSystem::DeactivateMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.DeactivateMap"));
    struct Params_DeactivateMap {
    }; // Size: 0x0
    Params_DeactivateMap params{};
    ProcessEvent(func, &params);
}
UMapOverland* UMapSubSystem::GetOverlandMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetOverlandMap"));
    struct Params_GetOverlandMap {
        UMapOverland* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOverlandMap params{};
    ProcessEvent(func, &params);
    return (UMapOverland*)params.ReturnValue;
}
UWorld* UMapSubSystem::GetMapWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMapWorld"));
    struct Params_GetMapWorld {
        UWorld* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapWorld params{};
    ProcessEvent(func, &params);
    return (UWorld*)params.ReturnValue;
}
ECursorControlTypes::Type UMapSubSystem::GetCursorControl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetCursorControl"));
    struct Params_GetCursorControl {
        ECursorControlTypes::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCursorControl params{};
    ProcessEvent(func, &params);
    return (ECursorControlTypes::Type)params.ReturnValue;
}
UMapScreenBase* UMapSubSystem::GetMapScreenWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMapScreenWidget"));
    struct Params_GetMapScreenWidget {
        UMapScreenBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapScreenWidget params{};
    ProcessEvent(func, &params);
    return (UMapScreenBase*)params.ReturnValue;
}
AMapPawn* UMapSubSystem::GetMapPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMapPawn"));
    struct Params_GetMapPawn {
        AMapPawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapPawn params{};
    ProcessEvent(func, &params);
    return (AMapPawn*)params.ReturnValue;
}
UMapBase* UMapSubSystem::GetMapByType(EMapTypes::Type MapType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMapByType"));
    struct Params_GetMapByType {
        EMapTypes::Type MapType; // 0x0
        char pad_1[0x7];
        UMapBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMapByType params{};
    params.MapType = (EMapTypes::Type)MapType;
    ProcessEvent(func, &params);
    return (UMapBase*)params.ReturnValue;
}
TArray<UBeaconInfo*> UMapSubSystem::GetMapBeaconsNearLocation(FVector Location, float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMapBeaconsNearLocation"));
    struct Params_GetMapBeaconsNearLocation {
        FVector Location; // 0x0
        float Radius; // 0xc
        TArray<UBeaconInfo*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetMapBeaconsNearLocation params{};
    params.Location = (FVector)Location;
    params.Radius = (float)Radius;
    ProcessEvent(func, &params);
    return (TArray<UBeaconInfo*>)params.ReturnValue;
}
UBeaconInfo* UMapSubSystem::GetMapBeaconFromName(FString BeaconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMapBeaconFromName"));
    struct Params_GetMapBeaconFromName {
        FString BeaconName; // 0x0
        UBeaconInfo* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetMapBeaconFromName params{};
    params.BeaconName = (FString)BeaconName;
    ProcessEvent(func, &params);
    return (UBeaconInfo*)params.ReturnValue;
}
bool UMapSubSystem::GetMapActivated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMapActivated"));
    struct Params_GetMapActivated {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMapActivated params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FLinearColor UMapSubSystem::GetMainLineColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetMainLineColor"));
    struct Params_GetMainLineColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMainLineColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FString UMapSubSystem::GetLocatedItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetLocatedItem"));
    struct Params_GetLocatedItem {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLocatedItem params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UMapBase* UMapSubSystem::GetLastActiveMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetLastActiveMap"));
    struct Params_GetLastActiveMap {
        UMapBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastActiveMap params{};
    ProcessEvent(func, &params);
    return (UMapBase*)params.ReturnValue;
}
bool UMapSubSystem::GetInPauseMenu() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetInPauseMenu"));
    struct Params_GetInPauseMenu {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInPauseMenu params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMapHogwarts* UMapSubSystem::GetHogwartsMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetHogwartsMap"));
    struct Params_GetHogwartsMap {
        UMapHogwarts* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHogwartsMap params{};
    ProcessEvent(func, &params);
    return (UMapHogwarts*)params.ReturnValue;
}
void UMapSubSystem::EnablePathDisplay(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.EnablePathDisplay"));
    struct Params_EnablePathDisplay {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_EnablePathDisplay params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
UMapHogsmeade* UMapSubSystem::GetHogsmeadeMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetHogsmeadeMap"));
    struct Params_GetHogsmeadeMap {
        UMapHogsmeade* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHogsmeadeMap params{};
    ProcessEvent(func, &params);
    return (UMapHogsmeade*)params.ReturnValue;
}
bool UMapSubSystem::ClearActiveMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.ClearActiveMap"));
    struct Params_ClearActiveMap {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ClearActiveMap params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::GetHasIntroPlayed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetHasIntroPlayed"));
    struct Params_GetHasIntroPlayed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetHasIntroPlayed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
APlayerController* UMapSubSystem::GetGamePlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetGamePlayerController"));
    struct Params_GetGamePlayerController {
        APlayerController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGamePlayerController params{};
    ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
APawn* UMapSubSystem::GetGamePawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetGamePawn"));
    struct Params_GetGamePawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGamePawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
FName UMapSubSystem::GetFilter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetFilter"));
    struct Params_GetFilter {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFilter params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UMapSubSystem::GetFelixFelicisPotionActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetFelixFelicisPotionActive"));
    struct Params_GetFelixFelicisPotionActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFelixFelicisPotionActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapSubSystem::GetFadeToGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetFadeToGame"));
    struct Params_GetFadeToGame {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFadeToGame params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMapDungeon* UMapSubSystem::GetDungeonMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetDungeonMap"));
    struct Params_GetDungeonMap {
        UMapDungeon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDungeonMap params{};
    ProcessEvent(func, &params);
    return (UMapDungeon*)params.ReturnValue;
}
FLinearColor UMapSubSystem::GetColorFromState(UBeaconInfo* BeaconInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetColorFromState"));
    struct Params_GetColorFromState {
        UBeaconInfo* BeaconInfo; // 0x0
        FLinearColor ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetColorFromState params{};
    params.BeaconInfo = (UBeaconInfo*)BeaconInfo;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
TArray<UBeaconInfo*> UMapSubSystem::GetChestsInVault(FString VaultName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetChestsInVault"));
    struct Params_GetChestsInVault {
        FString VaultName; // 0x0
        TArray<UBeaconInfo*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetChestsInVault params{};
    params.VaultName = (FString)VaultName;
    ProcessEvent(func, &params);
    return (TArray<UBeaconInfo*>)params.ReturnValue;
}
EBeaconState UMapSubSystem::GetBeaconState(FString BeaconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetBeaconState"));
    struct Params_GetBeaconState {
        FString BeaconName; // 0x0
        EBeaconState ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetBeaconState params{};
    params.BeaconName = (FString)BeaconName;
    ProcessEvent(func, &params);
    return (EBeaconState)params.ReturnValue;
}
int32_t UMapSubSystem::FindMap(FName MapName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.FindMap"));
    struct Params_FindMap {
        FName MapName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_FindMap params{};
    params.MapName = (FName)MapName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FLinearColor UMapSubSystem::GetAuthorityFigureColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetAuthorityFigureColor"));
    struct Params_GetAuthorityFigureColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAuthorityFigureColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
EMapTypes::Type UMapSubSystem::GetActiveMapType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetActiveMapType"));
    struct Params_GetActiveMapType {
        EMapTypes::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActiveMapType params{};
    ProcessEvent(func, &params);
    return (EMapTypes::Type)params.ReturnValue;
}
FName UMapSubSystem::GetActiveMapName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetActiveMapName"));
    struct Params_GetActiveMapName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveMapName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t UMapSubSystem::GetActiveMapIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetActiveMapIndex"));
    struct Params_GetActiveMapIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveMapIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UUIAccessibilityManager* UMapSubSystem::GetAccessibilityManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.GetAccessibilityManager"));
    struct Params_GetAccessibilityManager {
        UUIAccessibilityManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAccessibilityManager params{};
    ProcessEvent(func, &params);
    return (UUIAccessibilityManager*)params.ReturnValue;
}
int32_t UMapSubSystem::FindMapByType(EMapTypes::Type MapType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.FindMapByType"));
    struct Params_FindMapByType {
        EMapTypes::Type MapType; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_FindMapByType params{};
    params.MapType = (EMapTypes::Type)MapType;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UMapSubSystem::CreateAreaBeacon(float X, float Y, float Z, float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.CreateAreaBeacon"));
    struct Params_CreateAreaBeacon {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
        float Radius; // 0xc
    }; // Size: 0x10
    Params_CreateAreaBeacon params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.Radius = (float)Radius;
    ProcessEvent(func, &params);
}
void UMapSubSystem::CompleteBeaconOfType(EBeaconType BeaconType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.CompleteBeaconOfType"));
    struct Params_CompleteBeaconOfType {
        EBeaconType BeaconType; // 0x0
    }; // Size: 0x1
    Params_CompleteBeaconOfType params{};
    params.BeaconType = (EBeaconType)BeaconType;
    ProcessEvent(func, &params);
}
bool UMapSubSystem::AreItemsRevealed(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.AreItemsRevealed"));
    struct Params_AreItemsRevealed {
        FString ItemName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AreItemsRevealed params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapSubSystem::ActivateMapByType(EMapTypes::Type MapType, bool fromOverland, bool fromDungeon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.ActivateMapByType"));
    struct Params_ActivateMapByType {
        EMapTypes::Type MapType; // 0x0
        bool fromOverland; // 0x1
        bool fromDungeon; // 0x2
    }; // Size: 0x3
    Params_ActivateMapByType params{};
    params.MapType = (EMapTypes::Type)MapType;
    params.fromOverland = (bool)fromOverland;
    params.fromDungeon = (bool)fromDungeon;
    ProcessEvent(func, &params);
}
void UMapSubSystem::ActivateMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapSubSystem.ActivateMap"));
    struct Params_ActivateMap {
    }; // Size: 0x0
    Params_ActivateMap params{};
    ProcessEvent(func, &params);
}
