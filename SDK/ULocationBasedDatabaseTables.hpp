#pragma once
#include <cstdint>
#include "FEventLocationResult.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
struct FGameplayTagContainer;
class AMountZoneVolumeBase;
class AFastTravelLocation;
class ADynamicObjectVolume;
class AAmbientCreatureSpawnVolume;
#pragma pack(push, 1)
class ULocationBasedDatabaseTables : public UObject {
public:
    static ULocationBasedDatabaseTables* StaticClass();
    static void RecordWorldEventLocationMeta(FString Name, float StreamInRadius, float StreamOutRadius);
    static void RecordWorldEventDatabaseLocation(FString Name, FString Guid, FVector Position, float ZRot);
    static void RecordWorldEventDatabaseDescriptors(FString Name, FGameplayTagContainer& locationDescriptors, TArray<void*> Conditions);
    static void RecordVaultDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordTentDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordSphinxPuzzleDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordRuinDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordObjectAndOwner(FString Name, FString Owner);
    static void RecordMountZoneLocation(AMountZoneVolumeBase* InVolume);
    static void RecordMiscDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordKnowledgeLocationDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordKnowledgeInvestigatableDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordHamletDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordFastTravelDatabaseLocation(FString Name, FVector Position, FVector BeaconPosition, float ZRot, AFastTravelLocation* locationActor);
    static void RecordEnemyDenLocationsDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordDungeonChestDatabaseOwner(FString Name, FString Owner);
    static void RecordDungeonChestDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordDevMiscDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordDevBanditCampDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordClusterDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordChestDatabaseOwner(FString Name, FString Owner);
    static void RecordCharacterSpawnLocation(ADynamicObjectVolume* InVolume);
    static void RecordBroomTestPaths();
    static void RecordBroomRacePath(FString RaceName, FString PathName, int32_t PathIndex, TArray<FVector>& PathPoints);
    static void RecordBroomRaceGates(FString RaceName, TArray<FTransform>& RaceGateTransforms, TArray<FString>& GateTypes);
    static void RecordBeastDenDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordBanditCampDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordAncientMagicDatabaseLocation(FString Name, FVector Position, float ZRot);
    static void RecordAmbientCreatureSpawnLocation(AAmbientCreatureSpawnVolume* InVolume);
    static void GetWorldEventLocations(FGameplayTagContainer& LocationRequiredDescriptors, FGameplayTagContainer& LocationDeniedDescriptors, TArray<FEventLocationResult>& OutResults);
}; // Size: 0x28
#pragma pack(pop)
