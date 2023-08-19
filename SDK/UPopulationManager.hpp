#pragma once
#include <cstdint>
#include "ECollisionResponse.hpp"
#include "ECollisionResponsePriority.hpp"
#include "ESEPrecacheFleshPriority.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ETier4Type.hpp"
#include "FDatabaseName.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
class UClass;
struct FTransform;
class UPopulationConfigData;
class UObject;
class UScheduledEntity;
class AActor;
class ULevel;
class UWorld;
class UStationComponent;
struct FVector;
class ATier4_Actor;
struct FStationQueryData;
#pragma pack(push, 1)
class UPopulationManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x890];
    UClass* PreloadedSocialReasoningClass; // 0x938
    UPopulationConfigData* ApparateAbilityMapping; // 0x940
    char pad_948[0x8];
    static UPopulationManager* StaticClass();
    bool UpdateLocationSchedule(FName inScheduleKey, FName inActivityTypeID, bool inActivate, bool inHideImmediatelyOnDeactivate);
    void TriggerUpdate(UScheduledEntity* InScheduledEntity);
    bool StartSettingCollisionResponseOnSE(AActor* InActor, ECollisionResponse InCollisionResponse, ECollisionResponsePriority InPriority, UObject* InProvider, FName InProviderName);
    AActor* Spawn(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod inCollisioinMethod, ULevel* InOverrideLevel, UObject* InParentContainer);
    static bool ServiceStationWithNPC(FString InEntityName, UStationComponent* InStationComponent);
    void RequestT4Actor(ETier4Type InT4Type, FTransform& InSpawnTransform);
    UScheduledEntity* RequestCustomHobo(FString HoboName, FVector& InLocation, bool InIsMale);
    void RequestCachedCharacter(FName InCharacterID, FName InWorldID);
    void RemoveCachedCharacter(FName InCharacterID, FName InWorldID);
    void ReleaseT4Actor(ATier4_Actor* InT4Actor);
    void ReleaseHoboAndEndPrecaching(UScheduledEntity* InScheduledEntity, bool InDestroyImmediate, bool bInIgnoreVisibilityChecks, bool bInIgnoreWanderOnRelease, ESEPrecacheFleshPriority InPriority, UObject* InCaller);
    void ReleaseHobo(UScheduledEntity* InScheduledEntity, bool InDestroyImmediate, bool InIgnoreVisibilityChecks, bool bInIgnoreWanderOnRelease);
    static bool PlaceScheduledEntityBP(FString EntityName, FTransform& InTransform);
    bool PerformTask_WaitForPlayerActor(AActor* InActor, float InLocation);
    bool PerformTask_WaitForPlayer(FString InName, float InDistance);
    bool PerformTask_TeleportToLocation(FString InName);
    bool PerformTask_MoveToLocationActor(AActor* InActor, FVector& InLocation, float InForcedSpeed);
    bool PerformTask_MoveToLocation(FString InName, FVector& InLocation, float InForcedSpeed);
    void OnStartOfFirstDay();
    void OnFleshDestroyed(AActor* InActor, UScheduledEntity* InScheduledEntity);
    void OnFleshCreated(AActor* InActor, UScheduledEntity* InScheduledEntity);
    static bool JoinStation(UObject* InJoiningObject, FStationQueryData& StationData, float InDuration, bool OverwritePreviousGoal);
    static bool IsScheduledEntityBP(AActor* InActor);
    bool IsAttendingActivityName(FString InName, FString InActivityName);
    bool IsAttendingActivityActor(FString InActivityName, AActor* InActor);
    UScheduledEntity* GetScheduledEntityFromName(FString EntityName);
    UScheduledEntity* GetScheduledEntityFromActor(AActor* InActor, bool bAssertIfNotFound);
    static FString GetCharacterFromDatabase(FDatabaseName DatabaseName);
    static AActor* GetActorFromEntityNameBP(FString& EntityName, bool bInCanLookInCache);
    static UPopulationManager* Get();
    void FinishSettingCollisionResponseOnSE(AActor* InActor, ECollisionResponsePriority InPriority, UObject* InProvider, FName InProviderName);
    void EnableSeatFillers(bool inActivate);
    static bool EnableScheduling(FString InEntityName, bool InEnable);
    static bool EnableDistanceBasedLOD(FString InEntityName, bool InEnable);
    bool CreateScheduleAtLocationWithKey(FVector& InLocation, FString InKey);
    bool CreateItemAsScheduledEntity(FString InItemID);
    bool BroadCastScheduleKey(FString InKey, bool InTemporary);
}; // Size: 0x950
#pragma pack(pop)
