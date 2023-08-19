#pragma once
#include <cstdint>
#include "EFT_FromType.hpp"
#include "EFT_TravelType.hpp"
#include "FFastTravelLocationName.hpp"
#include "FTravelLocation.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class AFloo;
class ASceneRigActor;
class UFlooListEntry;
class AActor;
class AFastTravelLocation;
#pragma pack(push, 1)
class UFastTravelManager : public UObject {
public:
    char pad_28[0x8];
    bool bWaitEnabled; // 0x30
    char pad_31[0x7];
    AFloo* SourceFlooRef; // 0x38
    FString TargetFlooName; // 0x40
    AFloo* TargetFloo; // 0x50
    char pad_58[0x28];
    TArray<UFlooListEntry*> FlooList; // 0x80
    char pad_90[0x70];
    ASceneRigActor* WaitSceneRigActor; // 0x100
    char pad_108[0xb0];
    AActor* LastActorUsingFloo; // 0x1b8
    UFlooListEntry* FlooListEntry; // 0x1c0
    char pad_1c8[0x40];
    static UFastTravelManager* StaticClass();
    void UnlockLocationByName(FString LocationName);
    void UnlockLocationByActor(AFastTravelLocation* locationActor);
    void UnlockLocation(FString LocationID);
    void TestExec();
    void StartFastTravelWithCallbackBP(FVector ToLocation);
    void StartFastTravelUsingIDWithCallbackBP(FString LocationID);
    void StartFastTravelUsingID(FString LocationID, EFT_FromType FromType, EFT_TravelType FastTravelControlType);
    bool StartFastTravelToNamedLocation(FFastTravelLocationName LocationName, EFT_FromType FromType, EFT_TravelType FastTravelControlType);
    bool StartFastTravelToClosestUnlockedSaveLocationToPlayer();
    bool StartFastTravelToClosestUnlockedSaveLocation(FVector CheckLocation);
    void StartFastTravel(AActor* TravelActorIn, FVector ToLocation, FString EndPointActorNameIn, float Yaw, EFT_FromType FromType, EFT_TravelType FastTravelControlType);
    void SetWaitEnabled(bool Enable);
    void SetForceFastTravelLocationName(FString FastTravelID, FString StartInMap);
    void SetFastTravelDisabled(bool Disabled);
    void PlayWaitSceneRig(bool WaitAtEnd);
    void PlayerSelectedFloo(AActor* ActorUsingFloo, FString FastTravelID);
    void PlayerExitingFloo(AActor* ActorUsingFloo);
    void PlayerExitedFloo(AActor* ActorUsingFloo);
    void PlayerEnteringFloo(AActor* ActorUsingFloo);
    void PlayerEnteredFloo(AActor* ActorUsingFloo);
    void PlayerDroppedPowder(AActor* ActorUsingFloo);
    void PlayerCanceledFloo(AActor* ActorUsingFloo);
    void LockLocationByName(FString LocationName);
    void LockLocationByActor(AFastTravelLocation* locationActor);
    bool IsWaitEnabled();
    bool IsFlooLoaded(FString Name, AFloo*& TargetFlooIn);
    bool IsFastTravelUnlockedForLocation(FString LocationID);
    bool IsFastTravelTutorialActive();
    bool IsFastTravelling();
    bool IsFastTravelDisabled();
    bool IsFastTravelDebugUnlockAllActive();
    bool IsFastTravelAvailableForLocation(FString LocationID);
    bool IsFastTravelAvailable();
    bool HasHardLoadFastTravelLocation();
    float GetHardLoadFastTravelYaw();
    FVector GetHardLoadFastTravelLocaiton();
    FString GetForceFastTravelLocationName();
    void GetFastTravelLocationsByType(FString Type, TArray<FTravelLocation>& Locations);
    void GetFastTravelLocations(TArray<FString>& Names, TArray<FVector>& Locations);
    bool GetFastTravelLocationFromName(FString Name, FVector& Location);
    bool GetFastTravelLocationDataFromName(FString Name, FTravelLocation& Location);
    bool GetClosestUnlockedSaveLocationToPlayer(FTravelLocation& LocationData);
    bool GetClosestUnlockedSaveLocation(FVector CheckLocation, FTravelLocation& LocationData);
    void GetAvailableFloos(TArray<FTravelLocation>& AvailableFloos);
    static UFastTravelManager* Get();
    void FinishWait();
    bool FindFastTravelLocationData(FString LocationID, FTravelLocation& LocationData);
    bool FastTravelTutorialCompleted();
    void FastTravel_To(FString LocationID);
    void FastTravel_TeleportToXYZ(float X, float Y, float Z);
    void FastTravel_EnableWaitSR(bool tf);
    void FastTravel_DisableNextWaitSR(bool tf);
    void EnableWaitSR(bool Enabled);
    void DoWait();
    void DebugLogFastTravelInformation(FString Data1, FString Data2);
    void ClearHardLoadFastTravelLocaiton();
    void ClearForceFastTravelLocationName();
    void AddFastTravelLocationWithLockToDB(AFastTravelLocation* locationActor, FString LocationName, FVector Location, FVector BeaconLocation, float ZRot, bool isSaveLocation, bool IsBuiltNightly, bool ShowOnMap, bool Locked);
    void AddFastTravelLocationToDB(FString LocationName, FVector Location, FVector BeaconLocation, float ZRot, FString RegionId, bool isSaveLocation, bool IsBuiltNightly, bool ShowOnMap);
    bool ActorDismount(AActor* InActor);
}; // Size: 0x208
#pragma pack(pop)
