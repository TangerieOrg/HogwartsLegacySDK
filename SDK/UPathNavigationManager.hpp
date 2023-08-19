#pragma once
#include <cstdint>
#include "EHogwartsNavmeshID.hpp"
#include "EMapTypes\Type.hpp"
#include "EPathTargetType.hpp"
#include "ESubLevelID.hpp"
#include "FDebugMapData.hpp"
#include "FMapIconEntry.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UPathSelectHUD;
class UScheduledEntity;
class UClass;
class AGuideSpline;
class UMapPathData;
class UPathCollector;
class UWorldSupportWorld;
class UOverlandPathFinder;
class ANavigationArrow;
class USplineComponent;
class UBeaconInfo;
class UWorld;
#pragma pack(push, 1)
class UPathNavigationManager : public UObject {
public:
    char pad_28[0x68];
    int64_t MapTargetBeaconHandle; // 0x90
    int64_t WayMarkerBeaconHandle; // 0x98
    int64_t MissionBeaconHandle; // 0xa0
    char pad_a8[0x8];
    FString MapTargetBeaconLongName; // 0xb0
    UScheduledEntity* MapTargetScheduledEntity; // 0xc0
    FVector MapTargetWorldLocation; // 0xc8
    char pad_d4[0x4];
    TArray<FVector> MapTargetWaypoints; // 0xd8
    EPathTargetType PathTargetType; // 0xe8
    char pad_e9[0x3];
    float MaxSpliceDistance; // 0xec
    bool ShowUnknownRoads; // 0xf0
    char pad_f1[0x7];
    TArray<FVector> HogwartExits; // 0xf8
    FVector CoastNorthLocation; // 0x108
    FVector CoastSouthLocation; // 0x114
    UClass* GuideSplineClass; // 0x120
    char pad_128[0x28];
    TArray<FVector> GuidePathPoints; // 0x150
    AGuideSpline* GuideSplineActor; // 0x160
    float WiggleIterDist; // 0x168
    float WiggleMaxDist; // 0x16c
    float WiggleInitialDist; // 0x170
    float WiggleRange; // 0x174
    float WiggleMaxAngleDegrees; // 0x178
    char pad_17c[0x4];
    UClass* PathSelectWidgetClass; // 0x180
    UPathSelectHUD* PathSelectWidget; // 0x188
    bool bShowingPathSelectUI; // 0x190
    char pad_191[0x7];
    UPathCollector* PathCollector; // 0x198
    UOverlandPathFinder* OverlandPathFinder; // 0x1a0
    FDebugMapData debugHelperData; // 0x1a8
    char pad_1f8[0x8];
    UWorldSupportWorld* FlightPathWorld; // 0x200
    UMapPathData* AllRoads; // 0x208
    TArray<ANavigationArrow*> PathMarkerActorsTS; // 0x210
    char pad_220[0xe0];
    TArray<FVector> PathTS; // 0x300
    TArray<FMapIconEntry> MinimapPathTS; // 0x310
    TArray<FMapIconEntry> ElevationChangePointsTS; // 0x320
    char pad_330[0x20];
    USplineComponent* Spline; // 0x350
    char pad_358[0x2e0];
    static UPathNavigationManager* StaticClass();
    void UseAuthoredPath(FName Name);
    void UpdateMissionBeacons(bool bStart);
    AGuideSpline* SpawnGuideSplineFromPath(TArray<FVector>& InPath);
    void ShowPathSelectionUI();
    void SetWaypointPathTarget(TArray<FVector> Waypoints);
    void SetStaticPathTarget(FVector staticTarget);
    void SetImportantPathName(FName Name);
    void SetBeaconPathTarget(int64_t NewBeaconHandle, bool bValidateOnly, FString BeaconLongName);
    void RemoveGuideSpline();
    void ReDisplayMissionObjective();
    void PathNavigation_ToggleUseForcePathDestination();
    void PathNavigation_TogglePauseThread();
    void PathNavigation_SetUseForcePathDestination(bool bNewValue);
    void PathNavigation_SetForcePathDestination(float X, float Y, float Z);
    void OnCurtainRaised();
    void OnCurtainLowered();
    void MarkNavmeshLoaded(ESubLevelID Sublevel, bool bLoaded);
    void MarkHogwartsNavmeshLoaded(EHogwartsNavmeshID NavMesh, bool bLoaded);
    bool IsWaypointPathTarget();
    bool IsNavmeshLoaded(ESubLevelID Sublevel);
    bool IsLocationInAreaBeaconArea(FVector Location);
    void HidePathSelectionUI();
    bool HasGuidePath();
    bool HasDestinationLocation(bool ShowDestinationsInAreaBeacons);
    bool GiveMeHelp();
    FVector GetWaymarkerDestinationLocation();
    FVector GetPathDestinationLocation();
    TArray<FVector> GetPath();
    TArray<ANavigationArrow*> GetNagivationMarkerActors();
    FVector GetMissionDestinationLocation();
    TArray<FMapIconEntry> GetMinimapPath();
    FName GetImportantPathName();
    FVector GetGuidePathEndPoint();
    TArray<FVector> GetGuidePath();
    TArray<FMapIconEntry> GetElevationChangePoints();
    FVector GetDestinationLocationForBeacon(UBeaconInfo* Beacon);
    bool GetCanPlayerTrackDestination();
    FName GetAuthoredPathName();
    static UPathNavigationManager* Get();
    bool FindPath(FVector& Start, FVector& End, TArray<FVector>& OutPath, bool& OutMissingHogwartsSection);
    bool ExecuteSave(int32_t CharacterID);
    void Debug_StartMap(EMapTypes::Type MapTypeIn, UWorld* WorldIn);
    void ClearWaypointPathTarget();
    void ClearWaymarkerTarget();
    void ClearPathTarget();
    void ClearPathAndMissionTarget();
    void ClearImportantPathName();
    void ClearAuthoredPath();
    void AddWaypointPathTarget(FVector Point);
    void AddMissionBeacon(UScheduledEntity* dynamicTarget, FVector staticTarget, int64_t BeaconHandle);
}; // Size: 0x638
#pragma pack(pop)
