#include "AGuideSpline.hpp"
#include "ANavigationArrow.hpp"
#include "EHogwartsNavmeshID.hpp"
#include "EMapTypes\Type.hpp"
#include "EPathTargetType.hpp"
#include "ESubLevelID.hpp"
#include "FDebugMapData.hpp"
#include "FMapIconEntry.hpp"
#include "FVector.hpp"
#include "UBeaconInfo.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMapPathData.hpp"
#include "UObject.hpp"
#include "UOverlandPathFinder.hpp"
#include "UPathCollector.hpp"
#include "UPathNavigationManager.hpp"
#include "UPathSelectHUD.hpp"
#include "UScheduledEntity.hpp"
#include "USplineComponent.hpp"
#include "UWorld.hpp"
#include "UWorldSupportWorld.hpp"
UPathNavigationManager* UPathNavigationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PathNavigationManager");
    return (UPathNavigationManager*)res;
}
bool UPathNavigationManager::GetCanPlayerTrackDestination() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetCanPlayerTrackDestination"));
    struct Params_GetCanPlayerTrackDestination {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCanPlayerTrackDestination params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPathNavigationManager::SetImportantPathName(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.SetImportantPathName"));
    struct Params_SetImportantPathName {
        FName Name; // 0x0
    }; // Size: 0x8
    Params_SetImportantPathName params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::UseAuthoredPath(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.UseAuthoredPath"));
    struct Params_UseAuthoredPath {
        FName Name; // 0x0
    }; // Size: 0x8
    Params_UseAuthoredPath params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
}
TArray<FMapIconEntry> UPathNavigationManager::GetMinimapPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetMinimapPath"));
    struct Params_GetMinimapPath {
        TArray<FMapIconEntry> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMinimapPath params{};
    ProcessEvent(func, &params);
    return (TArray<FMapIconEntry>)params.ReturnValue;
}
void UPathNavigationManager::UpdateMissionBeacons(bool bStart) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.UpdateMissionBeacons"));
    struct Params_UpdateMissionBeacons {
        bool bStart; // 0x0
    }; // Size: 0x1
    Params_UpdateMissionBeacons params{};
    params.bStart = (bool)bStart;
    ProcessEvent(func, &params);
}
FVector UPathNavigationManager::GetPathDestinationLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetPathDestinationLocation"));
    struct Params_GetPathDestinationLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPathDestinationLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UPathNavigationManager::ShowPathSelectionUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ShowPathSelectionUI"));
    struct Params_ShowPathSelectionUI {
    }; // Size: 0x0
    Params_ShowPathSelectionUI params{};
    ProcessEvent(func, &params);
}
AGuideSpline* UPathNavigationManager::SpawnGuideSplineFromPath(TArray<FVector>& InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.SpawnGuideSplineFromPath"));
    struct Params_SpawnGuideSplineFromPath {
        TArray<FVector> InPath; // 0x0
        AGuideSpline* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SpawnGuideSplineFromPath params{};
    params.InPath = (TArray<FVector>)InPath;
    ProcessEvent(func, &params);
    InPath = params.InPath;
    return (AGuideSpline*)params.ReturnValue;
}
void UPathNavigationManager::ClearImportantPathName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ClearImportantPathName"));
    struct Params_ClearImportantPathName {
    }; // Size: 0x0
    Params_ClearImportantPathName params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::SetBeaconPathTarget(int64_t NewBeaconHandle, bool bValidateOnly, FString BeaconLongName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.SetBeaconPathTarget"));
    struct Params_SetBeaconPathTarget {
        int64_t NewBeaconHandle; // 0x0
        bool bValidateOnly; // 0x8
        char pad_9[0x7];
        FString BeaconLongName; // 0x10
    }; // Size: 0x20
    Params_SetBeaconPathTarget params{};
    params.NewBeaconHandle = (int64_t)NewBeaconHandle;
    params.bValidateOnly = (bool)bValidateOnly;
    params.BeaconLongName = (FString)BeaconLongName;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::SetWaypointPathTarget(TArray<FVector> Waypoints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.SetWaypointPathTarget"));
    struct Params_SetWaypointPathTarget {
        TArray<FVector> Waypoints; // 0x0
    }; // Size: 0x10
    Params_SetWaypointPathTarget params{};
    params.Waypoints = (TArray<FVector>)Waypoints;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::SetStaticPathTarget(FVector staticTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.SetStaticPathTarget"));
    struct Params_SetStaticPathTarget {
        FVector staticTarget; // 0x0
    }; // Size: 0xc
    Params_SetStaticPathTarget params{};
    params.staticTarget = (FVector)staticTarget;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::RemoveGuideSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.RemoveGuideSpline"));
    struct Params_RemoveGuideSpline {
    }; // Size: 0x0
    Params_RemoveGuideSpline params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::ReDisplayMissionObjective() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ReDisplayMissionObjective"));
    struct Params_ReDisplayMissionObjective {
    }; // Size: 0x0
    Params_ReDisplayMissionObjective params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::ClearAuthoredPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ClearAuthoredPath"));
    struct Params_ClearAuthoredPath {
    }; // Size: 0x0
    Params_ClearAuthoredPath params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::PathNavigation_ToggleUseForcePathDestination() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.PathNavigation_ToggleUseForcePathDestination"));
    struct Params_PathNavigation_ToggleUseForcePathDestination {
    }; // Size: 0x0
    Params_PathNavigation_ToggleUseForcePathDestination params{};
    ProcessEvent(func, &params);
}
FVector UPathNavigationManager::GetMissionDestinationLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetMissionDestinationLocation"));
    struct Params_GetMissionDestinationLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetMissionDestinationLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UPathNavigationManager::PathNavigation_TogglePauseThread() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.PathNavigation_TogglePauseThread"));
    struct Params_PathNavigation_TogglePauseThread {
    }; // Size: 0x0
    Params_PathNavigation_TogglePauseThread params{};
    ProcessEvent(func, &params);
}
UPathNavigationManager* UPathNavigationManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.Get"));
    struct Params_Get {
        UPathNavigationManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPathNavigationManager*)params.ReturnValue;
}
void UPathNavigationManager::PathNavigation_SetUseForcePathDestination(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.PathNavigation_SetUseForcePathDestination"));
    struct Params_PathNavigation_SetUseForcePathDestination {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_PathNavigation_SetUseForcePathDestination params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::AddMissionBeacon(UScheduledEntity* dynamicTarget, FVector staticTarget, int64_t BeaconHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.AddMissionBeacon"));
    struct Params_AddMissionBeacon {
        UScheduledEntity* dynamicTarget; // 0x0
        FVector staticTarget; // 0x8
        char pad_14[0x4];
        int64_t BeaconHandle; // 0x18
    }; // Size: 0x20
    Params_AddMissionBeacon params{};
    params.dynamicTarget = (UScheduledEntity*)dynamicTarget;
    params.staticTarget = (FVector)staticTarget;
    params.BeaconHandle = (int64_t)BeaconHandle;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::PathNavigation_SetForcePathDestination(float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.PathNavigation_SetForcePathDestination"));
    struct Params_PathNavigation_SetForcePathDestination {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
    }; // Size: 0xc
    Params_PathNavigation_SetForcePathDestination params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::Debug_StartMap(EMapTypes::Type MapTypeIn, UWorld* WorldIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.Debug_StartMap"));
    struct Params_Debug_StartMap {
        EMapTypes::Type MapTypeIn; // 0x0
        char pad_1[0x7];
        UWorld* WorldIn; // 0x8
    }; // Size: 0x10
    Params_Debug_StartMap params{};
    params.MapTypeIn = (EMapTypes::Type)MapTypeIn;
    params.WorldIn = (UWorld*)WorldIn;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::OnCurtainLowered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.OnCurtainLowered"));
    struct Params_OnCurtainLowered {
    }; // Size: 0x0
    Params_OnCurtainLowered params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::ClearPathAndMissionTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ClearPathAndMissionTarget"));
    struct Params_ClearPathAndMissionTarget {
    }; // Size: 0x0
    Params_ClearPathAndMissionTarget params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::MarkNavmeshLoaded(ESubLevelID Sublevel, bool bLoaded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.MarkNavmeshLoaded"));
    struct Params_MarkNavmeshLoaded {
        ESubLevelID Sublevel; // 0x0
        bool bLoaded; // 0x1
    }; // Size: 0x2
    Params_MarkNavmeshLoaded params{};
    params.Sublevel = (ESubLevelID)Sublevel;
    params.bLoaded = (bool)bLoaded;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::ClearWaymarkerTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ClearWaymarkerTarget"));
    struct Params_ClearWaymarkerTarget {
    }; // Size: 0x0
    Params_ClearWaymarkerTarget params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::MarkHogwartsNavmeshLoaded(EHogwartsNavmeshID NavMesh, bool bLoaded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.MarkHogwartsNavmeshLoaded"));
    struct Params_MarkHogwartsNavmeshLoaded {
        EHogwartsNavmeshID NavMesh; // 0x0
        bool bLoaded; // 0x1
    }; // Size: 0x2
    Params_MarkHogwartsNavmeshLoaded params{};
    params.NavMesh = (EHogwartsNavmeshID)NavMesh;
    params.bLoaded = (bool)bLoaded;
    ProcessEvent(func, &params);
}
void UPathNavigationManager::ClearPathTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ClearPathTarget"));
    struct Params_ClearPathTarget {
    }; // Size: 0x0
    Params_ClearPathTarget params{};
    ProcessEvent(func, &params);
}
bool UPathNavigationManager::IsWaypointPathTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.IsWaypointPathTarget"));
    struct Params_IsWaypointPathTarget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWaypointPathTarget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPathNavigationManager::IsNavmeshLoaded(ESubLevelID Sublevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.IsNavmeshLoaded"));
    struct Params_IsNavmeshLoaded {
        ESubLevelID Sublevel; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsNavmeshLoaded params{};
    params.Sublevel = (ESubLevelID)Sublevel;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPathNavigationManager::HidePathSelectionUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.HidePathSelectionUI"));
    struct Params_HidePathSelectionUI {
    }; // Size: 0x0
    Params_HidePathSelectionUI params{};
    ProcessEvent(func, &params);
}
bool UPathNavigationManager::IsLocationInAreaBeaconArea(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.IsLocationInAreaBeaconArea"));
    struct Params_IsLocationInAreaBeaconArea {
        FVector Location; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsLocationInAreaBeaconArea params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UPathNavigationManager::GetDestinationLocationForBeacon(UBeaconInfo* Beacon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetDestinationLocationForBeacon"));
    struct Params_GetDestinationLocationForBeacon {
        UBeaconInfo* Beacon; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetDestinationLocationForBeacon params{};
    params.Beacon = (UBeaconInfo*)Beacon;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
TArray<FMapIconEntry> UPathNavigationManager::GetElevationChangePoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetElevationChangePoints"));
    struct Params_GetElevationChangePoints {
        TArray<FMapIconEntry> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetElevationChangePoints params{};
    ProcessEvent(func, &params);
    return (TArray<FMapIconEntry>)params.ReturnValue;
}
bool UPathNavigationManager::HasGuidePath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.HasGuidePath"));
    struct Params_HasGuidePath {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasGuidePath params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UPathNavigationManager::GetGuidePathEndPoint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetGuidePathEndPoint"));
    struct Params_GetGuidePathEndPoint {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetGuidePathEndPoint params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UPathNavigationManager::HasDestinationLocation(bool ShowDestinationsInAreaBeacons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.HasDestinationLocation"));
    struct Params_HasDestinationLocation {
        bool ShowDestinationsInAreaBeacons; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_HasDestinationLocation params{};
    params.ShowDestinationsInAreaBeacons = (bool)ShowDestinationsInAreaBeacons;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPathNavigationManager::GiveMeHelp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GiveMeHelp"));
    struct Params_GiveMeHelp {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GiveMeHelp params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UPathNavigationManager::GetWaymarkerDestinationLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetWaymarkerDestinationLocation"));
    struct Params_GetWaymarkerDestinationLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetWaymarkerDestinationLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
TArray<FVector> UPathNavigationManager::GetPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetPath"));
    struct Params_GetPath {
        TArray<FVector> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPath params{};
    ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
TArray<ANavigationArrow*> UPathNavigationManager::GetNagivationMarkerActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetNagivationMarkerActors"));
    struct Params_GetNagivationMarkerActors {
        TArray<ANavigationArrow*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetNagivationMarkerActors params{};
    ProcessEvent(func, &params);
    return (TArray<ANavigationArrow*>)params.ReturnValue;
}
FName UPathNavigationManager::GetImportantPathName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetImportantPathName"));
    struct Params_GetImportantPathName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetImportantPathName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
TArray<FVector> UPathNavigationManager::GetGuidePath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetGuidePath"));
    struct Params_GetGuidePath {
        TArray<FVector> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetGuidePath params{};
    ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
FName UPathNavigationManager::GetAuthoredPathName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.GetAuthoredPathName"));
    struct Params_GetAuthoredPathName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAuthoredPathName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UPathNavigationManager::FindPath(FVector& Start, FVector& End, TArray<FVector>& OutPath, bool& OutMissingHogwartsSection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.FindPath"));
    struct Params_FindPath {
        FVector Start; // 0x0
        FVector End; // 0xc
        TArray<FVector> OutPath; // 0x18
        bool OutMissingHogwartsSection; // 0x28
        bool ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_FindPath params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.OutPath = (TArray<FVector>)OutPath;
    params.OutMissingHogwartsSection = (bool)OutMissingHogwartsSection;
    ProcessEvent(func, &params);
    OutPath = params.OutPath;
    Start = params.Start;
    End = params.End;
    OutMissingHogwartsSection = params.OutMissingHogwartsSection;
    return (bool)params.ReturnValue;
}
bool UPathNavigationManager::ExecuteSave(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ExecuteSave"));
    struct Params_ExecuteSave {
        int32_t CharacterID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_ExecuteSave params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPathNavigationManager::ClearWaypointPathTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.ClearWaypointPathTarget"));
    struct Params_ClearWaypointPathTarget {
    }; // Size: 0x0
    Params_ClearWaypointPathTarget params{};
    ProcessEvent(func, &params);
}
void UPathNavigationManager::AddWaypointPathTarget(FVector Point) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNavigationManager.AddWaypointPathTarget"));
    struct Params_AddWaypointPathTarget {
        FVector Point; // 0x0
    }; // Size: 0xc
    Params_AddWaypointPathTarget params{};
    params.Point = (FVector)Point;
    ProcessEvent(func, &params);
}
