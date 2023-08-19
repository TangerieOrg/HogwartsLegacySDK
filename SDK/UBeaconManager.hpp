#pragma once
#include <cstdint>
#include "EBeaconState.hpp"
#include "EBeaconType.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UBeaconInfo;
class UScheduledEntity;
class AActor;
class AMarker;
#pragma pack(push, 1)
class UBeaconManager : public UObject {
public:
    char pad_28[0xb8];
    TArray<UBeaconInfo*> BeaconObjects; // 0xe0
    char pad_f0[0x50];
    TArray<UBeaconInfo*> DynamicBeaconObjects; // 0x140
    TArray<UBeaconInfo*> StaticBeaconObjectsWithWorldName; // 0x150
    TArray<UBeaconInfo*> DiscoverableObjects; // 0x160
    TArray<UBeaconInfo*> EnterExitObjects; // 0x170
    TArray<UBeaconInfo*> HudBeaconObjects; // 0x180
    TArray<UBeaconInfo*> CurrentProximityHudBeacons; // 0x190
    TArray<UBeaconInfo*> WorldTransitionProxies; // 0x1a0
    TArray<UBeaconInfo*> BroomRevelioHUDBeacons; // 0x1b0
    char pad_1c0[0x80];
    static UBeaconManager* StaticClass();
    void UpdateExpansionTentPlayer(FVector teleportPosition);
    static void UnRegisterBeaconByHandleBP(int64_t ObjectHandle);
    void SetBeaconStateByName(EBeaconType BeaconType, FString BeaconName, bool ActiveState);
    static void SetBeaconStateBP(int32_t ObjectHandle, EBeaconState BeaconState);
    void SetBeaconRangesByHandle(int32_t ObjectHandle, int32_t InActivationDist, int32_t InEnterExitDist);
    static int64_t RegisterStaticBeaconBP(EBeaconType BeaconType, FString BeaconName, FString BeaconIcon, FName& BeaconWorld, FVector BeaconPos, bool ShowOnHUD, bool ShowDistanceOnHud, FName BeaconableId);
    static void RegisterSanctuaryExit(FString SanctuaryWorldName);
    static void RegisterExpansionTent(FString tentID, FVector Position, bool bIsEntrance);
    static int64_t RegisterDynamicBeaconScheduledEntityBP(EBeaconType BeaconType, FString BeaconName, FString BeaconIcon, FName& BeaconWorld, FVector BeaconPos, UScheduledEntity* NewBeaconScheduledEntity, bool ShowOnHUD, bool ShowDistanceOnHud);
    static int64_t RegisterDynamicBeaconObjectBP(EBeaconType BeaconType, FString BeaconName, FString BeaconIcon, FName& BeaconWorld, FVector BeaconPos, AActor* NewBeaconObject, bool ShowOnHUD, bool ShowDistanceOnHud);
    static void RegisterDungeonExit(FVector Position, FName UID, bool Disable);
    static void RegisterDungeonEntrance(FString DungeonName, FVector Position, float ZRot, FVector BeaconPosition, int32_t EntranceIndex);
    void OnSaveGameLoaded();
    void OnRevelioStart(float RevelioViewMeters);
    void OnRevelioEnd();
    void OnNewGame();
    static bool IsActorBeaconComplete(AActor* InActor);
    static AMarker* GetMarkerActor(AActor* InParentActor);
    void GetDungeonReqirementsByName(FString DungeonName, TArray<void*>& RequiredSpells, TArray<void*>& CompletionSpells);
    UBeaconInfo* GetBeaconByHandleBP(int32_t ObjectHandle);
    static UBeaconManager* Get();
}; // Size: 0x240
#pragma pack(pop)
