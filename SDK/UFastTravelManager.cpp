#include "AActor.hpp"
#include "AFastTravelLocation.hpp"
#include "AFloo.hpp"
#include "ASceneRigActor.hpp"
#include "EFT_FromType.hpp"
#include "EFT_TravelType.hpp"
#include "FFastTravelLocationName.hpp"
#include "FTravelLocation.hpp"
#include "FVector.hpp"
#include "UFastTravelManager.hpp"
#include "UFlooListEntry.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
float UFastTravelManager::GetHardLoadFastTravelYaw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetHardLoadFastTravelYaw"));
    struct Params_GetHardLoadFastTravelYaw {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHardLoadFastTravelYaw params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UFastTravelManager::StartFastTravelUsingIDWithCallbackBP(FString LocationID) {}
void UFastTravelManager::SetForceFastTravelLocationName(FString FastTravelID, FString StartInMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.SetForceFastTravelLocationName"));
    struct Params_SetForceFastTravelLocationName {
        FString FastTravelID; // 0x0
        FString StartInMap; // 0x10
    }; // Size: 0x20
    Params_SetForceFastTravelLocationName params{};
    params.FastTravelID = (FString)FastTravelID;
    params.StartInMap = (FString)StartInMap;
    ProcessEvent(func, &params);
}
UFastTravelManager* UFastTravelManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FastTravelManager");
    return (UFastTravelManager*)res;
}
bool UFastTravelManager::HasHardLoadFastTravelLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.HasHardLoadFastTravelLocation"));
    struct Params_HasHardLoadFastTravelLocation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasHardLoadFastTravelLocation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::IsFastTravelTutorialActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsFastTravelTutorialActive"));
    struct Params_IsFastTravelTutorialActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFastTravelTutorialActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFastTravelManager::UnlockLocationByName(FString LocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.UnlockLocationByName"));
    struct Params_UnlockLocationByName {
        FString LocationName; // 0x0
    }; // Size: 0x10
    Params_UnlockLocationByName params{};
    params.LocationName = (FString)LocationName;
    ProcessEvent(func, &params);
}
void UFastTravelManager::PlayerSelectedFloo(AActor* ActorUsingFloo, FString FastTravelID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.PlayerSelectedFloo"));
    struct Params_PlayerSelectedFloo {
        AActor* ActorUsingFloo; // 0x0
        FString FastTravelID; // 0x8
    }; // Size: 0x18
    Params_PlayerSelectedFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    params.FastTravelID = (FString)FastTravelID;
    ProcessEvent(func, &params);
}
void UFastTravelManager::StartFastTravelWithCallbackBP(FVector ToLocation) {}
bool UFastTravelManager::IsFlooLoaded(FString Name, AFloo*& TargetFlooIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsFlooLoaded"));
    struct Params_IsFlooLoaded {
        FString Name; // 0x0
        AFloo* TargetFlooIn; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsFlooLoaded params{};
    params.Name = (FString)Name;
    params.TargetFlooIn = (AFloo*)TargetFlooIn;
    ProcessEvent(func, &params);
    TargetFlooIn = params.TargetFlooIn;
    return (bool)params.ReturnValue;
}
void UFastTravelManager::UnlockLocationByActor(AFastTravelLocation* locationActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.UnlockLocationByActor"));
    struct Params_UnlockLocationByActor {
        AFastTravelLocation* locationActor; // 0x0
    }; // Size: 0x8
    Params_UnlockLocationByActor params{};
    params.locationActor = (AFastTravelLocation*)locationActor;
    ProcessEvent(func, &params);
}
bool UFastTravelManager::StartFastTravelToClosestUnlockedSaveLocationToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.StartFastTravelToClosestUnlockedSaveLocationToPlayer"));
    struct Params_StartFastTravelToClosestUnlockedSaveLocationToPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StartFastTravelToClosestUnlockedSaveLocationToPlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFastTravelManager::UnlockLocation(FString LocationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.UnlockLocation"));
    struct Params_UnlockLocation {
        FString LocationID; // 0x0
    }; // Size: 0x10
    Params_UnlockLocation params{};
    params.LocationID = (FString)LocationID;
    ProcessEvent(func, &params);
}
void UFastTravelManager::GetFastTravelLocationsByType(FString Type, TArray<FTravelLocation>& Locations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetFastTravelLocationsByType"));
    struct Params_GetFastTravelLocationsByType {
        FString Type; // 0x0
        TArray<FTravelLocation> Locations; // 0x10
    }; // Size: 0x20
    Params_GetFastTravelLocationsByType params{};
    params.Type = (FString)Type;
    params.Locations = (TArray<FTravelLocation>)Locations;
    ProcessEvent(func, &params);
    Locations = params.Locations;
}
void UFastTravelManager::StartFastTravelUsingID(FString LocationID, EFT_FromType FromType, EFT_TravelType FastTravelControlType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.StartFastTravelUsingID"));
    struct Params_StartFastTravelUsingID {
        FString LocationID; // 0x0
        EFT_FromType FromType; // 0x10
        EFT_TravelType FastTravelControlType; // 0x11
    }; // Size: 0x12
    Params_StartFastTravelUsingID params{};
    params.LocationID = (FString)LocationID;
    params.FromType = (EFT_FromType)FromType;
    params.FastTravelControlType = (EFT_TravelType)FastTravelControlType;
    ProcessEvent(func, &params);
}
void UFastTravelManager::TestExec() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.TestExec"));
    struct Params_TestExec {
    }; // Size: 0x0
    Params_TestExec params{};
    ProcessEvent(func, &params);
}
bool UFastTravelManager::StartFastTravelToNamedLocation(FFastTravelLocationName LocationName, EFT_FromType FromType, EFT_TravelType FastTravelControlType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.StartFastTravelToNamedLocation"));
    struct Params_StartFastTravelToNamedLocation {
        FFastTravelLocationName LocationName; // 0x0
        EFT_FromType FromType; // 0x8
        EFT_TravelType FastTravelControlType; // 0x9
        bool ReturnValue; // 0xa
    }; // Size: 0xb
    Params_StartFastTravelToNamedLocation params{};
    params.LocationName = (FFastTravelLocationName)LocationName;
    params.FromType = (EFT_FromType)FromType;
    params.FastTravelControlType = (EFT_TravelType)FastTravelControlType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::StartFastTravelToClosestUnlockedSaveLocation(FVector CheckLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.StartFastTravelToClosestUnlockedSaveLocation"));
    struct Params_StartFastTravelToClosestUnlockedSaveLocation {
        FVector CheckLocation; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_StartFastTravelToClosestUnlockedSaveLocation params{};
    params.CheckLocation = (FVector)CheckLocation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFastTravelManager::StartFastTravel(AActor* TravelActorIn, FVector ToLocation, FString EndPointActorNameIn, float Yaw, EFT_FromType FromType, EFT_TravelType FastTravelControlType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.StartFastTravel"));
    struct Params_StartFastTravel {
        AActor* TravelActorIn; // 0x0
        FVector ToLocation; // 0x8
        char pad_14[0x4];
        FString EndPointActorNameIn; // 0x18
        float Yaw; // 0x28
        EFT_FromType FromType; // 0x2c
        EFT_TravelType FastTravelControlType; // 0x2d
    }; // Size: 0x2e
    Params_StartFastTravel params{};
    params.TravelActorIn = (AActor*)TravelActorIn;
    params.ToLocation = (FVector)ToLocation;
    params.EndPointActorNameIn = (FString)EndPointActorNameIn;
    params.Yaw = (float)Yaw;
    params.FromType = (EFT_FromType)FromType;
    params.FastTravelControlType = (EFT_TravelType)FastTravelControlType;
    ProcessEvent(func, &params);
}
void UFastTravelManager::FastTravel_To(FString LocationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.FastTravel_To"));
    struct Params_FastTravel_To {
        FString LocationID; // 0x0
    }; // Size: 0x10
    Params_FastTravel_To params{};
    params.LocationID = (FString)LocationID;
    ProcessEvent(func, &params);
}
void UFastTravelManager::SetWaitEnabled(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.SetWaitEnabled"));
    struct Params_SetWaitEnabled {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetWaitEnabled params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
FVector UFastTravelManager::GetHardLoadFastTravelLocaiton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetHardLoadFastTravelLocaiton"));
    struct Params_GetHardLoadFastTravelLocaiton {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetHardLoadFastTravelLocaiton params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UFastTravelManager::SetFastTravelDisabled(bool Disabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.SetFastTravelDisabled"));
    struct Params_SetFastTravelDisabled {
        bool Disabled; // 0x0
    }; // Size: 0x1
    Params_SetFastTravelDisabled params{};
    params.Disabled = (bool)Disabled;
    ProcessEvent(func, &params);
}
void UFastTravelManager::PlayWaitSceneRig(bool WaitAtEnd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.PlayWaitSceneRig"));
    struct Params_PlayWaitSceneRig {
        bool WaitAtEnd; // 0x0
    }; // Size: 0x1
    Params_PlayWaitSceneRig params{};
    params.WaitAtEnd = (bool)WaitAtEnd;
    ProcessEvent(func, &params);
}
void UFastTravelManager::PlayerExitingFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.PlayerExitingFloo"));
    struct Params_PlayerExitingFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerExitingFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void UFastTravelManager::EnableWaitSR(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.EnableWaitSR"));
    struct Params_EnableWaitSR {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_EnableWaitSR params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
void UFastTravelManager::PlayerDroppedPowder(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.PlayerDroppedPowder"));
    struct Params_PlayerDroppedPowder {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerDroppedPowder params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void UFastTravelManager::PlayerExitedFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.PlayerExitedFloo"));
    struct Params_PlayerExitedFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerExitedFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void UFastTravelManager::PlayerEnteringFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.PlayerEnteringFloo"));
    struct Params_PlayerEnteringFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerEnteringFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void UFastTravelManager::PlayerEnteredFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.PlayerEnteredFloo"));
    struct Params_PlayerEnteredFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerEnteredFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void UFastTravelManager::AddFastTravelLocationToDB(FString LocationName, FVector Location, FVector BeaconLocation, float ZRot, FString RegionId, bool isSaveLocation, bool IsBuiltNightly, bool ShowOnMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.AddFastTravelLocationToDB"));
    struct Params_AddFastTravelLocationToDB {
        FString LocationName; // 0x0
        FVector Location; // 0x10
        FVector BeaconLocation; // 0x1c
        float ZRot; // 0x28
        char pad_2c[0x4];
        FString RegionId; // 0x30
        bool isSaveLocation; // 0x40
        bool IsBuiltNightly; // 0x41
        bool ShowOnMap; // 0x42
    }; // Size: 0x43
    Params_AddFastTravelLocationToDB params{};
    params.LocationName = (FString)LocationName;
    params.Location = (FVector)Location;
    params.BeaconLocation = (FVector)BeaconLocation;
    params.ZRot = (float)ZRot;
    params.RegionId = (FString)RegionId;
    params.isSaveLocation = (bool)isSaveLocation;
    params.IsBuiltNightly = (bool)IsBuiltNightly;
    params.ShowOnMap = (bool)ShowOnMap;
    ProcessEvent(func, &params);
}
void UFastTravelManager::PlayerCanceledFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.PlayerCanceledFloo"));
    struct Params_PlayerCanceledFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerCanceledFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void UFastTravelManager::ClearForceFastTravelLocationName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.ClearForceFastTravelLocationName"));
    struct Params_ClearForceFastTravelLocationName {
    }; // Size: 0x0
    Params_ClearForceFastTravelLocationName params{};
    ProcessEvent(func, &params);
}
void UFastTravelManager::LockLocationByName(FString LocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.LockLocationByName"));
    struct Params_LockLocationByName {
        FString LocationName; // 0x0
    }; // Size: 0x10
    Params_LockLocationByName params{};
    params.LocationName = (FString)LocationName;
    ProcessEvent(func, &params);
}
void UFastTravelManager::LockLocationByActor(AFastTravelLocation* locationActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.LockLocationByActor"));
    struct Params_LockLocationByActor {
        AFastTravelLocation* locationActor; // 0x0
    }; // Size: 0x8
    Params_LockLocationByActor params{};
    params.locationActor = (AFastTravelLocation*)locationActor;
    ProcessEvent(func, &params);
}
bool UFastTravelManager::IsWaitEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsWaitEnabled"));
    struct Params_IsWaitEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWaitEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFastTravelManager::FastTravel_EnableWaitSR(bool tf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.FastTravel_EnableWaitSR"));
    struct Params_FastTravel_EnableWaitSR {
        bool tf; // 0x0
    }; // Size: 0x1
    Params_FastTravel_EnableWaitSR params{};
    params.tf = (bool)tf;
    ProcessEvent(func, &params);
}
bool UFastTravelManager::IsFastTravelUnlockedForLocation(FString LocationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsFastTravelUnlockedForLocation"));
    struct Params_IsFastTravelUnlockedForLocation {
        FString LocationID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsFastTravelUnlockedForLocation params{};
    params.LocationID = (FString)LocationID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::IsFastTravelling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsFastTravelling"));
    struct Params_IsFastTravelling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFastTravelling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::IsFastTravelDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsFastTravelDisabled"));
    struct Params_IsFastTravelDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFastTravelDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::IsFastTravelDebugUnlockAllActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsFastTravelDebugUnlockAllActive"));
    struct Params_IsFastTravelDebugUnlockAllActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFastTravelDebugUnlockAllActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::IsFastTravelAvailableForLocation(FString LocationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsFastTravelAvailableForLocation"));
    struct Params_IsFastTravelAvailableForLocation {
        FString LocationID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsFastTravelAvailableForLocation params{};
    params.LocationID = (FString)LocationID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::ActorDismount(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.ActorDismount"));
    struct Params_ActorDismount {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActorDismount params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::IsFastTravelAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.IsFastTravelAvailable"));
    struct Params_IsFastTravelAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFastTravelAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFastTravelManager::DebugLogFastTravelInformation(FString Data1, FString Data2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.DebugLogFastTravelInformation"));
    struct Params_DebugLogFastTravelInformation {
        FString Data1; // 0x0
        FString Data2; // 0x10
    }; // Size: 0x20
    Params_DebugLogFastTravelInformation params{};
    params.Data1 = (FString)Data1;
    params.Data2 = (FString)Data2;
    ProcessEvent(func, &params);
}
FString UFastTravelManager::GetForceFastTravelLocationName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetForceFastTravelLocationName"));
    struct Params_GetForceFastTravelLocationName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetForceFastTravelLocationName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UFastTravelManager::GetFastTravelLocations(TArray<FString>& Names, TArray<FVector>& Locations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetFastTravelLocations"));
    struct Params_GetFastTravelLocations {
        TArray<FString> Names; // 0x0
        TArray<FVector> Locations; // 0x10
    }; // Size: 0x20
    Params_GetFastTravelLocations params{};
    params.Names = (TArray<FString>)Names;
    params.Locations = (TArray<FVector>)Locations;
    ProcessEvent(func, &params);
    Names = params.Names;
    Locations = params.Locations;
}
bool UFastTravelManager::GetFastTravelLocationFromName(FString Name, FVector& Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetFastTravelLocationFromName"));
    struct Params_GetFastTravelLocationFromName {
        FString Name; // 0x0
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_GetFastTravelLocationFromName params{};
    params.Name = (FString)Name;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    Location = params.Location;
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::GetFastTravelLocationDataFromName(FString Name, FTravelLocation& Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetFastTravelLocationDataFromName"));
    struct Params_GetFastTravelLocationDataFromName {
        FString Name; // 0x0
        FTravelLocation Location; // 0x10
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_GetFastTravelLocationDataFromName params{};
    params.Name = (FString)Name;
    params.Location = (FTravelLocation)Location;
    ProcessEvent(func, &params);
    Location = params.Location;
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::GetClosestUnlockedSaveLocationToPlayer(FTravelLocation& LocationData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetClosestUnlockedSaveLocationToPlayer"));
    struct Params_GetClosestUnlockedSaveLocationToPlayer {
        FTravelLocation LocationData; // 0x0
        bool ReturnValue; // 0x48
    }; // Size: 0x49
    Params_GetClosestUnlockedSaveLocationToPlayer params{};
    params.LocationData = (FTravelLocation)LocationData;
    ProcessEvent(func, &params);
    LocationData = params.LocationData;
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::GetClosestUnlockedSaveLocation(FVector CheckLocation, FTravelLocation& LocationData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetClosestUnlockedSaveLocation"));
    struct Params_GetClosestUnlockedSaveLocation {
        FVector CheckLocation; // 0x0
        char pad_c[0x4];
        FTravelLocation LocationData; // 0x10
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_GetClosestUnlockedSaveLocation params{};
    params.CheckLocation = (FVector)CheckLocation;
    params.LocationData = (FTravelLocation)LocationData;
    ProcessEvent(func, &params);
    LocationData = params.LocationData;
    return (bool)params.ReturnValue;
}
void UFastTravelManager::GetAvailableFloos(TArray<FTravelLocation>& AvailableFloos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.GetAvailableFloos"));
    struct Params_GetAvailableFloos {
        TArray<FTravelLocation> AvailableFloos; // 0x0
    }; // Size: 0x10
    Params_GetAvailableFloos params{};
    params.AvailableFloos = (TArray<FTravelLocation>)AvailableFloos;
    ProcessEvent(func, &params);
    AvailableFloos = params.AvailableFloos;
}
UFastTravelManager* UFastTravelManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.Get"));
    struct Params_Get {
        UFastTravelManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UFastTravelManager*)params.ReturnValue;
}
void UFastTravelManager::FinishWait() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.FinishWait"));
    struct Params_FinishWait {
    }; // Size: 0x0
    Params_FinishWait params{};
    ProcessEvent(func, &params);
}
bool UFastTravelManager::FindFastTravelLocationData(FString LocationID, FTravelLocation& LocationData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.FindFastTravelLocationData"));
    struct Params_FindFastTravelLocationData {
        FString LocationID; // 0x0
        FTravelLocation LocationData; // 0x10
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_FindFastTravelLocationData params{};
    params.LocationID = (FString)LocationID;
    params.LocationData = (FTravelLocation)LocationData;
    ProcessEvent(func, &params);
    LocationData = params.LocationData;
    return (bool)params.ReturnValue;
}
bool UFastTravelManager::FastTravelTutorialCompleted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.FastTravelTutorialCompleted"));
    struct Params_FastTravelTutorialCompleted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_FastTravelTutorialCompleted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFastTravelManager::FastTravel_TeleportToXYZ(float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.FastTravel_TeleportToXYZ"));
    struct Params_FastTravel_TeleportToXYZ {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
    }; // Size: 0xc
    Params_FastTravel_TeleportToXYZ params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ProcessEvent(func, &params);
}
void UFastTravelManager::AddFastTravelLocationWithLockToDB(AFastTravelLocation* locationActor, FString LocationName, FVector Location, FVector BeaconLocation, float ZRot, bool isSaveLocation, bool IsBuiltNightly, bool ShowOnMap, bool Locked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.AddFastTravelLocationWithLockToDB"));
    struct Params_AddFastTravelLocationWithLockToDB {
        AFastTravelLocation* locationActor; // 0x0
        FString LocationName; // 0x8
        FVector Location; // 0x18
        FVector BeaconLocation; // 0x24
        float ZRot; // 0x30
        bool isSaveLocation; // 0x34
        bool IsBuiltNightly; // 0x35
        bool ShowOnMap; // 0x36
        bool Locked; // 0x37
    }; // Size: 0x38
    Params_AddFastTravelLocationWithLockToDB params{};
    params.locationActor = (AFastTravelLocation*)locationActor;
    params.LocationName = (FString)LocationName;
    params.Location = (FVector)Location;
    params.BeaconLocation = (FVector)BeaconLocation;
    params.ZRot = (float)ZRot;
    params.isSaveLocation = (bool)isSaveLocation;
    params.IsBuiltNightly = (bool)IsBuiltNightly;
    params.ShowOnMap = (bool)ShowOnMap;
    params.Locked = (bool)Locked;
    ProcessEvent(func, &params);
}
void UFastTravelManager::FastTravel_DisableNextWaitSR(bool tf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.FastTravel_DisableNextWaitSR"));
    struct Params_FastTravel_DisableNextWaitSR {
        bool tf; // 0x0
    }; // Size: 0x1
    Params_FastTravel_DisableNextWaitSR params{};
    params.tf = (bool)tf;
    ProcessEvent(func, &params);
}
void UFastTravelManager::DoWait() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.DoWait"));
    struct Params_DoWait {
    }; // Size: 0x0
    Params_DoWait params{};
    ProcessEvent(func, &params);
}
void UFastTravelManager::ClearHardLoadFastTravelLocaiton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelManager.ClearHardLoadFastTravelLocaiton"));
    struct Params_ClearHardLoadFastTravelLocaiton {
    }; // Size: 0x0
    Params_ClearHardLoadFastTravelLocaiton params{};
    ProcessEvent(func, &params);
}
