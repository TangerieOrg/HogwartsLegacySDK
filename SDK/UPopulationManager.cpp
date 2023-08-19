#include "AActor.hpp"
#include "ATier4_Actor.hpp"
#include "ECollisionResponse.hpp"
#include "ECollisionResponsePriority.hpp"
#include "ESEPrecacheFleshPriority.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ETier4Type.hpp"
#include "FDatabaseName.hpp"
#include "FStationQueryData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "UObject.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "UPopulationConfigData.hpp"
#include "UPopulationManager.hpp"
#include "UScheduledEntity.hpp"
#include "UStationComponent.hpp"
#include "UWorld.hpp"
void UPopulationManager::ReleaseHobo(UScheduledEntity* InScheduledEntity, bool InDestroyImmediate, bool InIgnoreVisibilityChecks, bool bInIgnoreWanderOnRelease) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.ReleaseHobo"));
    struct Params_ReleaseHobo {
        UScheduledEntity* InScheduledEntity; // 0x0
        bool InDestroyImmediate; // 0x8
        bool InIgnoreVisibilityChecks; // 0x9
        bool bInIgnoreWanderOnRelease; // 0xa
    }; // Size: 0xb
    Params_ReleaseHobo params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.InDestroyImmediate = (bool)InDestroyImmediate;
    params.InIgnoreVisibilityChecks = (bool)InIgnoreVisibilityChecks;
    params.bInIgnoreWanderOnRelease = (bool)bInIgnoreWanderOnRelease;
    ProcessEvent(func, &params);
}
UPopulationManager* UPopulationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PopulationManager");
    return (UPopulationManager*)res;
}
void UPopulationManager::TriggerUpdate(UScheduledEntity* InScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.TriggerUpdate"));
    struct Params_TriggerUpdate {
        UScheduledEntity* InScheduledEntity; // 0x0
    }; // Size: 0x8
    Params_TriggerUpdate params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    ProcessEvent(func, &params);
}
FString UPopulationManager::GetCharacterFromDatabase(FDatabaseName DatabaseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.GetCharacterFromDatabase"));
    struct Params_GetCharacterFromDatabase {
        FDatabaseName DatabaseName; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetCharacterFromDatabase params{};
    params.DatabaseName = (FDatabaseName)DatabaseName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UPopulationManager::RemoveCachedCharacter(FName InCharacterID, FName InWorldID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.RemoveCachedCharacter"));
    struct Params_RemoveCachedCharacter {
        FName InCharacterID; // 0x0
        FName InWorldID; // 0x8
    }; // Size: 0x10
    Params_RemoveCachedCharacter params{};
    params.InCharacterID = (FName)InCharacterID;
    params.InWorldID = (FName)InWorldID;
    ProcessEvent(func, &params);
}
bool UPopulationManager::ServiceStationWithNPC(FString InEntityName, UStationComponent* InStationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.ServiceStationWithNPC"));
    struct Params_ServiceStationWithNPC {
        FString InEntityName; // 0x0
        UStationComponent* InStationComponent; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ServiceStationWithNPC params{};
    params.InEntityName = (FString)InEntityName;
    params.InStationComponent = (UStationComponent*)InStationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPopulationManager::UpdateLocationSchedule(FName inScheduleKey, FName inActivityTypeID, bool inActivate, bool inHideImmediatelyOnDeactivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.UpdateLocationSchedule"));
    struct Params_UpdateLocationSchedule {
        FName inScheduleKey; // 0x0
        FName inActivityTypeID; // 0x8
        bool inActivate; // 0x10
        bool inHideImmediatelyOnDeactivate; // 0x11
        bool ReturnValue; // 0x12
    }; // Size: 0x13
    Params_UpdateLocationSchedule params{};
    params.inScheduleKey = (FName)inScheduleKey;
    params.inActivityTypeID = (FName)inActivityTypeID;
    params.inActivate = (bool)inActivate;
    params.inHideImmediatelyOnDeactivate = (bool)inHideImmediatelyOnDeactivate;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPopulationManager::StartSettingCollisionResponseOnSE(AActor* InActor, ECollisionResponse InCollisionResponse, ECollisionResponsePriority InPriority, UObject* InProvider, FName InProviderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.StartSettingCollisionResponseOnSE"));
    struct Params_StartSettingCollisionResponseOnSE {
        AActor* InActor; // 0x0
        ECollisionResponse InCollisionResponse; // 0x8
        ECollisionResponsePriority InPriority; // 0x9
        char pad_a[0x6];
        UObject* InProvider; // 0x10
        FName InProviderName; // 0x18
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_StartSettingCollisionResponseOnSE params{};
    params.InActor = (AActor*)InActor;
    params.InCollisionResponse = (ECollisionResponse)InCollisionResponse;
    params.InPriority = (ECollisionResponsePriority)InPriority;
    params.InProvider = (UObject*)InProvider;
    params.InProviderName = (FName)InProviderName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UPopulationManager::GetActorFromEntityNameBP(FString& EntityName, bool bInCanLookInCache) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.GetActorFromEntityNameBP"));
    struct Params_GetActorFromEntityNameBP {
        FString EntityName; // 0x0
        bool bInCanLookInCache; // 0x10
        char pad_11[0x7];
        AActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetActorFromEntityNameBP params{};
    params.EntityName = (FString)EntityName;
    params.bInCanLookInCache = (bool)bInCanLookInCache;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    EntityName = params.EntityName;
    return (AActor*)params.ReturnValue;
}
void UPopulationManager::RequestT4Actor(ETier4Type InT4Type, FTransform& InSpawnTransform) {}
AActor* UPopulationManager::Spawn(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod inCollisioinMethod, ULevel* InOverrideLevel, UObject* InParentContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.Spawn"));
    struct Params_Spawn {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool inIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod inCollisioinMethod; // 0x59
        char pad_5a[0x6];
        ULevel* InOverrideLevel; // 0x60
        UObject* InParentContainer; // 0x68
        AActor* ReturnValue; // 0x70
    }; // Size: 0x78
    Params_Spawn params{};
    params.InWorld = (UWorld*)InWorld;
    params.InTransform = (FTransform)InTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    params.inCollisioinMethod = (ESpawnActorCollisionHandlingMethod)inCollisioinMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    params.InParentContainer = (UObject*)InParentContainer;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
bool UPopulationManager::PerformTask_MoveToLocationActor(AActor* InActor, FVector& InLocation, float InForcedSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.PerformTask_MoveToLocationActor"));
    struct Params_PerformTask_MoveToLocationActor {
        AActor* InActor; // 0x0
        FVector InLocation; // 0x8
        float InForcedSpeed; // 0x14
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_PerformTask_MoveToLocationActor params{};
    params.InActor = (AActor*)InActor;
    params.InLocation = (FVector)InLocation;
    params.InForcedSpeed = (float)InForcedSpeed;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (bool)params.ReturnValue;
}
UScheduledEntity* UPopulationManager::RequestCustomHobo(FString HoboName, FVector& InLocation, bool InIsMale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.RequestCustomHobo"));
    struct Params_RequestCustomHobo {
        FString HoboName; // 0x0
        FVector InLocation; // 0x10
        bool InIsMale; // 0x1c
        char pad_1d[0x3];
        UScheduledEntity* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_RequestCustomHobo params{};
    params.HoboName = (FString)HoboName;
    params.InLocation = (FVector)InLocation;
    params.InIsMale = (bool)InIsMale;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (UScheduledEntity*)params.ReturnValue;
}
bool UPopulationManager::PerformTask_TeleportToLocation(FString InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.PerformTask_TeleportToLocation"));
    struct Params_PerformTask_TeleportToLocation {
        FString InName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PerformTask_TeleportToLocation params{};
    params.InName = (FString)InName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPopulationManager::RequestCachedCharacter(FName InCharacterID, FName InWorldID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.RequestCachedCharacter"));
    struct Params_RequestCachedCharacter {
        FName InCharacterID; // 0x0
        FName InWorldID; // 0x8
    }; // Size: 0x10
    Params_RequestCachedCharacter params{};
    params.InCharacterID = (FName)InCharacterID;
    params.InWorldID = (FName)InWorldID;
    ProcessEvent(func, &params);
}
bool UPopulationManager::CreateItemAsScheduledEntity(FString InItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.CreateItemAsScheduledEntity"));
    struct Params_CreateItemAsScheduledEntity {
        FString InItemID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CreateItemAsScheduledEntity params{};
    params.InItemID = (FString)InItemID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPopulationManager::ReleaseT4Actor(ATier4_Actor* InT4Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.ReleaseT4Actor"));
    struct Params_ReleaseT4Actor {
        ATier4_Actor* InT4Actor; // 0x0
    }; // Size: 0x8
    Params_ReleaseT4Actor params{};
    params.InT4Actor = (ATier4_Actor*)InT4Actor;
    ProcessEvent(func, &params);
}
void UPopulationManager::ReleaseHoboAndEndPrecaching(UScheduledEntity* InScheduledEntity, bool InDestroyImmediate, bool bInIgnoreVisibilityChecks, bool bInIgnoreWanderOnRelease, ESEPrecacheFleshPriority InPriority, UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.ReleaseHoboAndEndPrecaching"));
    struct Params_ReleaseHoboAndEndPrecaching {
        UScheduledEntity* InScheduledEntity; // 0x0
        bool InDestroyImmediate; // 0x8
        bool bInIgnoreVisibilityChecks; // 0x9
        bool bInIgnoreWanderOnRelease; // 0xa
        ESEPrecacheFleshPriority InPriority; // 0xb
        char pad_c[0x4];
        UObject* InCaller; // 0x10
    }; // Size: 0x18
    Params_ReleaseHoboAndEndPrecaching params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.InDestroyImmediate = (bool)InDestroyImmediate;
    params.bInIgnoreVisibilityChecks = (bool)bInIgnoreVisibilityChecks;
    params.bInIgnoreWanderOnRelease = (bool)bInIgnoreWanderOnRelease;
    params.InPriority = (ESEPrecacheFleshPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
bool UPopulationManager::PlaceScheduledEntityBP(FString EntityName, FTransform& InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.PlaceScheduledEntityBP"));
    struct Params_PlaceScheduledEntityBP {
        FString EntityName; // 0x0
        FTransform InTransform; // 0x10
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_PlaceScheduledEntityBP params{};
    params.EntityName = (FString)EntityName;
    params.InTransform = (FTransform)InTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (bool)params.ReturnValue;
}
bool UPopulationManager::PerformTask_WaitForPlayerActor(AActor* InActor, float InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.PerformTask_WaitForPlayerActor"));
    struct Params_PerformTask_WaitForPlayerActor {
        AActor* InActor; // 0x0
        float InLocation; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_PerformTask_WaitForPlayerActor params{};
    params.InActor = (AActor*)InActor;
    params.InLocation = (float)InLocation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPopulationManager::PerformTask_WaitForPlayer(FString InName, float InDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.PerformTask_WaitForPlayer"));
    struct Params_PerformTask_WaitForPlayer {
        FString InName; // 0x0
        float InDistance; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_PerformTask_WaitForPlayer params{};
    params.InName = (FString)InName;
    params.InDistance = (float)InDistance;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPopulationManager::PerformTask_MoveToLocation(FString InName, FVector& InLocation, float InForcedSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.PerformTask_MoveToLocation"));
    struct Params_PerformTask_MoveToLocation {
        FString InName; // 0x0
        FVector InLocation; // 0x10
        float InForcedSpeed; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_PerformTask_MoveToLocation params{};
    params.InName = (FString)InName;
    params.InLocation = (FVector)InLocation;
    params.InForcedSpeed = (float)InForcedSpeed;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (bool)params.ReturnValue;
}
void UPopulationManager::OnStartOfFirstDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.OnStartOfFirstDay"));
    struct Params_OnStartOfFirstDay {
    }; // Size: 0x0
    Params_OnStartOfFirstDay params{};
    ProcessEvent(func, &params);
}
void UPopulationManager::OnFleshDestroyed(AActor* InActor, UScheduledEntity* InScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.OnFleshDestroyed"));
    struct Params_OnFleshDestroyed {
        AActor* InActor; // 0x0
        UScheduledEntity* InScheduledEntity; // 0x8
    }; // Size: 0x10
    Params_OnFleshDestroyed params{};
    params.InActor = (AActor*)InActor;
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    ProcessEvent(func, &params);
}
void UPopulationManager::FinishSettingCollisionResponseOnSE(AActor* InActor, ECollisionResponsePriority InPriority, UObject* InProvider, FName InProviderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.FinishSettingCollisionResponseOnSE"));
    struct Params_FinishSettingCollisionResponseOnSE {
        AActor* InActor; // 0x0
        ECollisionResponsePriority InPriority; // 0x8
        char pad_9[0x7];
        UObject* InProvider; // 0x10
        FName InProviderName; // 0x18
    }; // Size: 0x20
    Params_FinishSettingCollisionResponseOnSE params{};
    params.InActor = (AActor*)InActor;
    params.InPriority = (ECollisionResponsePriority)InPriority;
    params.InProvider = (UObject*)InProvider;
    params.InProviderName = (FName)InProviderName;
    ProcessEvent(func, &params);
}
void UPopulationManager::OnFleshCreated(AActor* InActor, UScheduledEntity* InScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.OnFleshCreated"));
    struct Params_OnFleshCreated {
        AActor* InActor; // 0x0
        UScheduledEntity* InScheduledEntity; // 0x8
    }; // Size: 0x10
    Params_OnFleshCreated params{};
    params.InActor = (AActor*)InActor;
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    ProcessEvent(func, &params);
}
bool UPopulationManager::EnableDistanceBasedLOD(FString InEntityName, bool InEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.EnableDistanceBasedLOD"));
    struct Params_EnableDistanceBasedLOD {
        FString InEntityName; // 0x0
        bool InEnable; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_EnableDistanceBasedLOD params{};
    params.InEntityName = (FString)InEntityName;
    params.InEnable = (bool)InEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPopulationManager::JoinStation(UObject* InJoiningObject, FStationQueryData& StationData, float InDuration, bool OverwritePreviousGoal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.JoinStation"));
    struct Params_JoinStation {
        UObject* InJoiningObject; // 0x0
        FStationQueryData StationData; // 0x8
        float InDuration; // 0x28
        bool OverwritePreviousGoal; // 0x2c
        bool ReturnValue; // 0x2d
    }; // Size: 0x2e
    Params_JoinStation params{};
    params.InJoiningObject = (UObject*)InJoiningObject;
    params.StationData = (FStationQueryData)StationData;
    params.InDuration = (float)InDuration;
    params.OverwritePreviousGoal = (bool)OverwritePreviousGoal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    StationData = params.StationData;
    return (bool)params.ReturnValue;
}
bool UPopulationManager::IsScheduledEntityBP(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.IsScheduledEntityBP"));
    struct Params_IsScheduledEntityBP {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsScheduledEntityBP params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPopulationManager::IsAttendingActivityName(FString InName, FString InActivityName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.IsAttendingActivityName"));
    struct Params_IsAttendingActivityName {
        FString InName; // 0x0
        FString InActivityName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_IsAttendingActivityName params{};
    params.InName = (FString)InName;
    params.InActivityName = (FString)InActivityName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPopulationManager::EnableScheduling(FString InEntityName, bool InEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.EnableScheduling"));
    struct Params_EnableScheduling {
        FString InEntityName; // 0x0
        bool InEnable; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_EnableScheduling params{};
    params.InEntityName = (FString)InEntityName;
    params.InEnable = (bool)InEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPopulationManager::IsAttendingActivityActor(FString InActivityName, AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.IsAttendingActivityActor"));
    struct Params_IsAttendingActivityActor {
        FString InActivityName; // 0x0
        AActor* InActor; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsAttendingActivityActor params{};
    params.InActivityName = (FString)InActivityName;
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UScheduledEntity* UPopulationManager::GetScheduledEntityFromName(FString EntityName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.GetScheduledEntityFromName"));
    struct Params_GetScheduledEntityFromName {
        FString EntityName; // 0x0
        UScheduledEntity* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetScheduledEntityFromName params{};
    params.EntityName = (FString)EntityName;
    ProcessEvent(func, &params);
    return (UScheduledEntity*)params.ReturnValue;
}
UScheduledEntity* UPopulationManager::GetScheduledEntityFromActor(AActor* InActor, bool bAssertIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.GetScheduledEntityFromActor"));
    struct Params_GetScheduledEntityFromActor {
        AActor* InActor; // 0x0
        bool bAssertIfNotFound; // 0x8
        char pad_9[0x7];
        UScheduledEntity* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetScheduledEntityFromActor params{};
    params.InActor = (AActor*)InActor;
    params.bAssertIfNotFound = (bool)bAssertIfNotFound;
    ProcessEvent(func, &params);
    return (UScheduledEntity*)params.ReturnValue;
}
UPopulationManager* UPopulationManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.Get"));
    struct Params_Get {
        UPopulationManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPopulationManager*)params.ReturnValue;
}
void UPopulationManager::EnableSeatFillers(bool inActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.EnableSeatFillers"));
    struct Params_EnableSeatFillers {
        bool inActivate; // 0x0
    }; // Size: 0x1
    Params_EnableSeatFillers params{};
    params.inActivate = (bool)inActivate;
    ProcessEvent(func, &params);
}
bool UPopulationManager::CreateScheduleAtLocationWithKey(FVector& InLocation, FString InKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.CreateScheduleAtLocationWithKey"));
    struct Params_CreateScheduleAtLocationWithKey {
        FVector InLocation; // 0x0
        char pad_c[0x4];
        FString InKey; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_CreateScheduleAtLocationWithKey params{};
    params.InLocation = (FVector)InLocation;
    params.InKey = (FString)InKey;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (bool)params.ReturnValue;
}
bool UPopulationManager::BroadCastScheduleKey(FString InKey, bool InTemporary) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopulationManager.BroadCastScheduleKey"));
    struct Params_BroadCastScheduleKey {
        FString InKey; // 0x0
        bool InTemporary; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_BroadCastScheduleKey params{};
    params.InKey = (FString)InKey;
    params.InTemporary = (bool)InTemporary;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
