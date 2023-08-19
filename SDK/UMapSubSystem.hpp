#pragma once
#include <cstdint>
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
#include "UGameInstanceSubsystem.hpp"
class UMapIconList;
class APhoenixPathActor;
class USplineComponent;
class UMaterialInterface;
class UCleanNameToDisplayName;
class UMapIconInstance;
class UWorldSupportWorld;
class AActor;
class UMapScreenBase;
class UTexture2D;
class UMaterialInstanceDynamic;
class UClass;
class UStaticMesh;
class UUIAccessibilityManager;
class UTextureUtil;
class UDebugTextPanel;
class UDataTable;
class UMapBase;
class UMapIcon;
class AMapPawn;
class UMapHogwarts;
class UMapMovementComponent;
class UPackage;
class UMapNavData;
class UMapFXManager;
class UBeaconInfo;
class USharedMapData;
class UMinimapManager;
class UObject;
class UMapOverland;
class UWorld;
class UMapDungeon;
class UMapHogsmeade;
class APlayerController;
class APawn;
#pragma pack(push, 1)
class UMapSubSystem : public UGameInstanceSubsystem {
public:
    char pad_30[0x8];
    TArray<FVector> CurrentMapPathMission; // 0x38
    TArray<FVector> CurrentMapPathWaymarker; // 0x48
    char pad_58[0x8];
    USplineComponent* PathSplineComponent[2]; // 0x60
    APhoenixPathActor* PathActor[2]; // 0x70
    char pad_80[0x68];
    UCleanNameToDisplayName* CleanNameToDisplayName; // 0xe8
    char pad_f0[0x40];
    TArray<UMapIconInstance*> MapIconInstancePool; // 0x130
    char pad_140[0x40c4];
    FMapOptions MapOptions; // 0x4204
    char pad_4214[0x4];
    TArray<AActor*> InWorldDirectionArrowPool; // 0x4218
    UMaterialInstanceDynamic* InWorldArrowMaterial; // 0x4228
    char pad_4230[0x8];
    UMapIconList* PathIconList; // 0x4238
    UMapIconList* RegionSplineDotList; // 0x4240
    FMapIconListContainer MapIconList[2]; // 0x4248
    TArray<UMapIconList*> MapIconListArray; // 0x4268
    char pad_4278[0x8];
    UTexture2D* RegionMaskTempTexture; // 0x4280
    char pad_4288[0x98];
    UClass* IconRenderWidgetClass; // 0x4320
    UStaticMesh* MapPlayerMarker; // 0x4328
    UClass* InGameDirectionArrowClass; // 0x4330
    AActor* InGameDirectionArrow; // 0x4338
    UMaterialInterface* IconRenderWidgetSimpleMaterial; // 0x4340
    UMaterialInterface* IconRenderWidgetPathMaterial; // 0x4348
    char pad_4350[0x50];
    UTextureUtil* RegionMaskHighlightBlitter; // 0x43a0
    UTexture2D* RegionMaskHighlightTexture; // 0x43a8
    char pad_43b0[0x1f8];
    UWorldSupportWorld* SplineWorld; // 0x45a8
    char pad_45b0[0x80];
    UDebugTextPanel* DebugTextPanel; // 0x4630
    char pad_4638[0x60];
    UDataTable* IconColorsTable; // 0x4698
    UDataTable* MiniMapIconOutlinesTable; // 0x46a0
    UDataTable* IconAnimationTable; // 0x46a8
    UDataTable* MiniMapIconBackgroundLayersTable; // 0x46b0
    UDataTable* MapFXTables; // 0x46b8
    UDataTable* MapLocTable; // 0x46c0
    UDataTable* MapDungeonSubdivisionTable; // 0x46c8
    UDataTable* IconTierTable; // 0x46d0
    UDataTable* IconCacheTable; // 0x46d8
    UDataTable* IconTierTableHogsmeade; // 0x46e0
    UDataTable* IconTierTableHogwarts; // 0x46e8
    UDataTable* IconStylesTable; // 0x46f0
    UDataTable* RegionSplineNamesTable; // 0x46f8
    char pad_4700[0x8];
    UClass* RegionSplineClass; // 0x4708
    UClass* IntrusionFullScreenFX; // 0x4710
    char pad_4718[0x210];
    TArray<UMapBase*> MapScreens; // 0x4928
    TArray<UWorldSupportWorld*> MapWorlds; // 0x4938
    UMapIcon* LastPathToHighlight; // 0x4948
    char pad_4950[0x18];
    UMapBase* ActiveMap; // 0x4968
    UMapBase* LastActiveMap; // 0x4970
    char pad_4978[0x10];
    TArray<int32_t> NewlyDiscoveredBeacons; // 0x4988
    TArray<FString> NewlyDiscoveredFastTravelLocations; // 0x4998
    TArray<FString> PreviouslySeenFastTravelLocations; // 0x49a8
    char pad_49b8[0x28];
    TArray<UMapIcon*> MapIcons; // 0x49e0
    AMapPawn* MapPawn; // 0x49f0
    char pad_49f8[0x8];
    UMapMovementComponent* MovementComponent; // 0x4a00
    AActor* PreviousViewTarget; // 0x4a08
    char pad_4a10[0x28];
    FMapDungeonSaveDataBlob DungeonFOWDataList; // 0x4a38
    char pad_4a48[0x30];
    UPackage* MapNavMeshAssetPackage; // 0x4a78
    UMapNavData* MapNavMeshData; // 0x4a80
    char pad_4a88[0x30];
    UMapFXManager* FXManager; // 0x4ab8
    char pad_4ac0[0xb0];
    TArray<UBeaconInfo*> OverlandFastTravelLocationList; // 0x4b70
    TArray<UBeaconInfo*> HogwartsFastTravelLocationList; // 0x4b80
    TArray<UBeaconInfo*> HogsmeadeFastTravelLocationList; // 0x4b90
    TArray<UBeaconInfo*> OverlandSphinxPuzzleLocationList; // 0x4ba0
    TArray<UBeaconInfo*> OverlandTreasureVaultLocationList; // 0x4bb0
    TArray<UBeaconInfo*> OverlandChestLocationList; // 0x4bc0
    TArray<UBeaconInfo*> DungeonChestLocationList; // 0x4bd0
    TArray<UBeaconInfo*> OverlandAstronomyLocationList; // 0x4be0
    TArray<UBeaconInfo*> OverlandDemiguiseLocationList; // 0x4bf0
    TArray<UBeaconInfo*> HogwartsDemiguiseLocationList; // 0x4c00
    TArray<UBeaconInfo*> HogsmeadeDemiguiseLocationList; // 0x4c10
    TArray<UBeaconInfo*> OverlandAncientMagicLocationList; // 0x4c20
    TArray<UBeaconInfo*> OverlandHamletLocationList; // 0x4c30
    TArray<UBeaconInfo*> OverlandBanditCampLocationList; // 0x4c40
    TArray<UBeaconInfo*> OverlandBeastDenLocationList; // 0x4c50
    TArray<UBeaconInfo*> OverlandEnemyDenLocationList; // 0x4c60
    TArray<UBeaconInfo*> OverlandForagablesLocationList; // 0x4c70
    TArray<UBeaconInfo*> OverlandPlantsLocationList; // 0x4c80
    TArray<UBeaconInfo*> OverlandDungeonsLocationList; // 0x4c90
    TArray<UBeaconInfo*> OverlandTentsLocationList; // 0x4ca0
    TArray<UBeaconInfo*> OverlandNamedEnemyLocationList; // 0x4cb0
    TArray<UBeaconInfo*> OverlandKnowledgeEnemyLocationList; // 0x4cc0
    TArray<UBeaconInfo*> OverlandBothyLocationList; // 0x4cd0
    TArray<UBeaconInfo*> OverlandCombatChallengesLocationList; // 0x4ce0
    TArray<UBeaconInfo*> HogsmeadeLocationList; // 0x4cf0
    TArray<UBeaconInfo*> OverlandBroomPlatformLocationList; // 0x4d00
    TArray<UBeaconInfo*> OverlandBroomRaceLocationList; // 0x4d10
    TArray<UBeaconInfo*> OverlandBroomBalloonLocationList; // 0x4d20
    TArray<UBeaconInfo*> OverlandRuinLocationList; // 0x4d30
    TArray<UBeaconInfo*> VendorsLocationList; // 0x4d40
    TArray<UBeaconInfo*> KnowledgeInvestigatablesLocationList; // 0x4d50
    char pad_4d60[0xd0];
    UTexture2D* DummyTexture; // 0x4e30
    char pad_4e38[0x20];
    UUIAccessibilityManager* AccessibilityManager; // 0x4e58
    char pad_4e60[0x8];
    UTexture2D* OverlandMapTexture; // 0x4e68
    char pad_4e70[0x50];
    USharedMapData* SharedMapData; // 0x4ec0
    TArray<UClass*> BPClasses; // 0x4ec8
    static UMapSubSystem* StaticClass();
    void UpdatePlayerRegionAsync();
    void UpdateDungeonFogMaskAsync(FVector PlayerPosition);
    bool UnloadLevels();
    bool UnloadFieldGuideLevels();
    void UIReleaseTransitionLock();
    void TriggerMapScreenFadeOut();
    void TriggerMapScreenFadeIn();
    void TriggerAccessibility(EAccessibilityAudioCueEventType Type, AActor* Actor);
    void TeleportToListIndex(int32_t Index);
    void SubdivideAndCreateOctreeAsync();
    bool StopMap(bool pCleanupActors, EMapPostFadeState PostFadeState);
    void StartTutorialOpenMap(FName TutorialName);
    void StartMapExitTransition(float InDuration);
    bool StartMap();
    void ShowMap(bool ShowMap);
    void ShowDebugPanel();
    void SetToMapFromIndexOrTab(bool InToMapFromIndexOrTab);
    void SetShouldRevealMinimapOnStart(bool RevealMinimapOnStart);
    void SetOverrideFIG01FTCheck(bool pOverrideCheck);
    void SetMiniMapManager(UMinimapManager* pMiniMapManager);
    void SetMapTransitionStyle(EMapTransitionStyle InStyle);
    void SetLastActiveMap();
    void SetIsInVault(bool InIsInVault);
    void SetIsFromOverland(bool IsFromOverland);
    void SetIsFromDungeon(bool IsFromDungeon);
    void SetInPauseMenu(bool InPauseMenuFlag);
    void SetIfFromFieldGuide(bool pIsFromFieldGuide);
    void SetHasIntroPlayed(bool HasPlayed);
    void SetFieldGuideWorldToNull();
    void SetFelixFelicisPotionRadius(float PotionRadius);
    void SetFelixFelicisPotionActive(bool pFelixFelicisPotionActive);
    void SetFadeToGame(bool pSetFadeToGame);
    void SetDeveloperMenuUsed(bool pUsedDeveloperMenu);
    void SetCoverDisplayed(bool IsDisplayed);
    bool SetActiveMapByType(EMapTypes::Type& MapType);
    bool SetActiveMap(FName MapName);
    void RestoreMap();
    void RemovePathToLocation();
    void RemoveAreaBeaconByHandle(int32_t Handle);
    void RecenterMapPawn();
    void OutputWidgetLog();
    void OutputCanvasPanelLog();
    void OnStatChanged(FName StatID, int32_t Value, int32_t Delta);
    void OnStartPathing(UObject* i_caller, uint32_t BeaconHandle);
    void OnStartNewDay();
    void MiniResetPlayerLocation();
    void MiniMapToggleIntrusionAlert();
    void MiniMapToggleIconsNearMe();
    void MiniMapToggleIcons();
    void MiniMapShowIconStats();
    void MiniMapSetTutorialIntroLevel(FName IntroLevel);
    void MiniMapSetSize(float Size, float ZoomTime);
    void MiniMapSetScale(float Size);
    void MiniMapSetPlayerToHogwarts();
    void MiniMapSetPlayerToHogsmeade();
    void MiniMapSetPlayerLocationToCursor();
    void MiniMapSetPlayerLocation(float X, float Y, float Z);
    void MiniMapSetPlayerActorPosition(float X, float Y, float Z);
    void MiniMapSetPerceptionOverlay();
    void MiniMapSetOptions(int32_t Size, float Opacity, int32_t PathlineOn);
    void MiniMapSetNoFlyTexture(int32_t Value);
    void MiniMapSetMap(FName MapName);
    void MiniMapSetLevelName(FString LevelName);
    void MiniMapSetLevel(int32_t LevelIndex);
    void MiniMapSetIconSize(float Size);
    void MiniMapSetIconScale(float IconDistanceScale);
    void MiniMapSetDungeonRadius(float Value);
    void MiniMapReveal(int32_t Reveal);
    void MiniMapQuickFade(int32_t Reveal);
    void MiniMapDungeonSetPartialTextureUpdate(bool Enable);
    void MiniMapDungeonEnableFogOfWar(bool Enable);
    void MiniMapDungeonDebug(float Value);
    void MiniMapDebugMap(FName MapName);
    void MiniMapDeactivateIntrusionArea(FName IntrusionVolumeActorName);
    void MiniMapAlwaysShowFastTravelIcons(int32_t Value);
    void MiniMapActivateIntrusionArea(FName IntrusionVolumeActorName);
    void MapWriteLog();
    void MapVerifyBeacons(int32_t LocationIndex, int32_t pTeleportType, int32_t pEndIndex);
    void MapUnlockAllRegions();
    void MapUnlockAllMapIcons(int32_t Type);
    void MapUnloadOverlandLevels();
    void MapTurnOnDebugCamera(int32_t Value);
    void MapTurnOnCompletionMessages(int32_t Value);
    void MapTurnOnCollisionSphere(int32_t Value);
    void MapTurnOnAllMapLocations(FName Filter, bool pSetStateToShown);
    void MapTurnOffMapLocationNames();
    void MapTriggerMapScreenFadeOut();
    void MapTriggerMapScreenFadeIn();
    void MapToggleRegionSplineDots(int32_t Value);
    void MapTogglePushIconsAway();
    void MapTogglePathDots();
    void MapTogglePathDebug();
    void MapToggleMapRoads();
    void MapToggleMapBounds();
    void MapToggleIconStacking(int32_t Value);
    void MapToggleFogDrawMode(int32_t DrawMode);
    void MapToggleFogCheckForIcons();
    void MapToggleFog();
    void MapTestRegionSaturation(FName Region);
    void MapTestMissionIcons();
    void MapTeleportToLocation(FString pName, int32_t pTeleportType);
    void MapStopFXChain();
    void MapStopFX();
    void MapStopFieldGuideTest();
    void MapSpawnFXChain(FName FXChainName, float X, float Y, float Z, float SX, float SY, float SZ);
    void MapSpawnFX(FName FXName, float X, float Y, float Z, float SX, float SY, float SZ);
    void MapShowTierLevel();
    void MapShowPathingDebug();
    void MapShowMapIconStats();
    void MapShowMap();
    void MapShowIconsWithoutRegions(int32_t Value);
    void MapShowCursorPosition();
    void MapShowCollisionActor();
    void MapSetSpecificIcons();
    void MapSetPlayerToCursorPosition();
    void MapSetIsFromFieldGuide(int32_t Value);
    void MapSetIconSize(float Size);
    void MapSetBeaconState(EBeaconType BeaconType, EBeaconState BeaconState);
    void MapSendHermesString(FName MessageName, FName Parameter);
    void MapSendHermes(FName MessageName);
    void MapRestoreIcons();
    void MapRemoveDebugPane();
    void MapReloadMapTables();
    static void MapProcessFlightNav();
    void MapOverrideMapCamera();
    void MapOpenFieldGuideTest(int32_t DoFastTravel);
    void MapMoveToTier(int32_t tierValue, float Time);
    void MapLoadOverlandLevels();
    void MapLerpToIcon(float X, float Y, float Z, float Speed);
    void MapIconTextureCallback(UTexture2D* Texture, UObject* Param);
    void MapHideIcons(int32_t Value);
    void MapGiveMeHelp();
    void MapFillRegionMask();
    void MapExportOverlandChestInfo();
    void MapDungeonTogglePPV();
    void MapDungeonShowStats();
    void MapDungeonShowAll();
    void MapDumpUnmatchedBeacons();
    void MapDumpNoRegionBeacons();
    void MapDumpDynamicBeacons();
    void MapDumpDiscoverableBeacons();
    void MapDoKnowledgeCard(FString Item);
    void MapCreateDebugPane();
    void MapClearWorldStack();
    void MapClearRegionMask();
    void MapCancelLogs();
    void MapAlwaysShowMerlin(int32_t ShowMerlin);
    void MapAlwaysShowDemiguise(int32_t ShowDemiguise);
    void MapAlwaysDefaultToOverlandMap(int32_t Value);
    uint32_t MapAddDynamicBeacon(EBeaconType BeaconType, FName BeaconName, FName BeaconIcon, float X, float Y, float Z);
    uint32_t MapAddAreaBeaconAtPlayerLocation(float Radius);
    void Locate(FString ItemToLocate, FString Category, FString OnMap);
    bool LoadLevels();
    void LoadGameLevel(FString LevelName);
    bool LoadFieldGuideLevels();
    bool IsTutorialLevel(FString LevelName);
    bool IsTutorial();
    bool IsTentLevel(FString LevelName);
    bool IsTent();
    bool IsSanctuaryLevel(FString LevelName);
    bool IsSanctuary();
    bool IsPathDisplayEnabled();
    bool IsOverlandLevel(FString LevelName);
    bool IsOverland();
    bool IsMapReadyCalled();
    bool IsMapReady();
    bool IsMapActive();
    bool IsHoloLevel(FString LevelName);
    bool IsHolo();
    bool IsHogwartsLevel(FString LevelName);
    bool IsHogwarts();
    bool IsHogsmeadeLevel(FString LevelName);
    bool IsHogsmeade();
    bool IsFTPointValidPreFIG01b(FString FTLocationID);
    bool IsFromOverland();
    bool IsFromDungeon();
    bool IsExclusiveMissionActive();
    bool IsDungeonMap();
    bool IsDungeonLevel(FString LevelName);
    bool IsDungeon();
    bool IsBeaconNameInMapDB(FString BeaconName);
    bool IsBeaconComplete(FString BeaconName);
    bool HasDungeonBeenEntered(FString DungeonName);
    bool GetUsingGamePad();
    FLinearColor GetTrackedWaypointColor();
    FLinearColor GetTrackedMissionColor();
    FLinearColor GetTrackedColor();
    bool GetShouldRevealMinimapOnStart();
    FMapWithinRegion GetRegionForLocation(FVector Location, UMapBase* MapBase);
    void GetPlayerLocation();
    UMapOverland* GetOverlandMap();
    TArray<int32_t> GetNewlyDiscoveredBeacons();
    UMinimapManager* GetMiniMapManager();
    UWorld* GetMapWorld();
    EMapTransitionStyle GetMapTransitionStyle();
    UMapScreenBase* GetMapScreenWidget();
    AMapPawn* GetMapPawn();
    UMapBase* GetMapByType(EMapTypes::Type MapType);
    TArray<UBeaconInfo*> GetMapBeaconsNearLocation(FVector Location, float Radius);
    UBeaconInfo* GetMapBeaconFromName(FString BeaconName);
    bool GetMapActivated();
    FLinearColor GetMainLineColor();
    FString GetLocatedItem();
    UMapBase* GetLastActiveMap();
    bool GetIsInVault();
    bool GetIsFromFieldGuide();
    bool GetInPauseMenu();
    FLinearColor GetIconColorByState(EBeaconState BeaconState);
    UMapHogwarts* GetHogwartsMap();
    UMapHogsmeade* GetHogsmeadeMap();
    bool GetHasIntroPlayed();
    UWorld* GetGameWorld();
    APlayerController* GetGamePlayerController();
    APawn* GetGamePawn();
    UMapFXManager* GetFXManager();
    FName GetFilter();
    bool GetFelixFelicisPotionActive();
    bool GetFadeToGame();
    UMapDungeon* GetDungeonMap();
    bool GetDeveloperMenuUsed();
    ECursorControlTypes::Type GetCursorControl();
    FMapWithinRegion GetCurrentPlayerRegionInfo();
    bool GetCoverIsDisplayed();
    FLinearColor GetColorFromState(UBeaconInfo* BeaconInfo);
    TArray<UBeaconInfo*> GetChestsInVault(FString VaultName);
    EBeaconState GetBeaconState(FString BeaconName);
    FLinearColor GetAuthorityFigureColor();
    EMapTypes::Type GetActiveMapType();
    FName GetActiveMapName();
    int32_t GetActiveMapIndex();
    UMapBase* GetActiveMap();
    UUIAccessibilityManager* GetAccessibilityManager();
    int32_t FindMapByType(EMapTypes::Type MapType);
    int32_t FindMap(FName MapName);
    void EnablePathDisplay(bool Enable);
    FName DetermineMap();
    void DeactivateMap();
    void CreateAreaBeacon(float X, float Y, float Z, float Radius);
    void CompleteBeaconOfType(EBeaconType BeaconType);
    bool ClearActiveMap();
    void AudioCueTrigger(int32_t DisplayType, int32_t CueType);
    bool AreItemsRevealed(FString ItemName);
    void ActivateMapByType(EMapTypes::Type MapType, bool fromOverland, bool fromDungeon);
    void ActivateMap();
}; // Size: 0x4ed8
#pragma pack(pop)
