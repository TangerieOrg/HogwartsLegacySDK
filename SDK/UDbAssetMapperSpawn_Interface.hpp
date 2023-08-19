#pragma once
#include <cstdint>
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "ESpawnRestrictionResponse.hpp"
#include "FNPC_DbObjectInstanceData.hpp"
#include "UInterface.hpp"
class AActor;
class ULevel;
class UWorld;
struct FTransform;
struct FSQLiteQueryResultMap;
class UObject;
struct FSoftObjectPath;
class UClass;
struct FRestrictionInfo;
#pragma pack(push, 1)
class UDbAssetMapperSpawn_Interface : public UInterface {
public:
    static UDbAssetMapperSpawn_Interface* StaticClass();
    bool UnregisterSpawnWhenDestroyed(AActor* InAssetPtr);
    AActor* SpawnShell(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel);
    AActor* SpawnSEAsset(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, FString inOverrideScheduleName, FString inOverrideScheduleTable, FString inOverrideWorldID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel);
    AActor* SpawnAsync(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel);
    AActor* Spawn(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer);
    void SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
    void RestoreData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
    bool RegisterNewSpawn(AActor* InAssetPtr);
    FString RedirectObjectToInstance(FString InRegistryID);
    FName RedirectObjectClass(FName InRegistryID, FString inTableName);
    bool RedirectNamedObject(FName InRegistryID, FString inTableName, FString& outClassID, FString& outLootID);
    FName RedirectInstanceToObject(FName InRegistryID);
    bool IsObjectInDefinitionTable(FName InRegistryID);
    uint32_t GetUniqueObjectID(FString InItemID);
    FName GetTableName();
    bool GetSpawnRestrictionsByCategory(FString InItemID, FString inCategory, FSQLiteQueryResultMap& OutQueryResultMap);
    bool GetSpawnRestrictions(FString InItemID, FSQLiteQueryResultMap& OutQueryResultMap);
    bool GetSpawnPath(FString InItemID, FSoftObjectPath& OutPath);
    bool GetSpawnAsset(FString InItemID, UClass*& OutAsset);
    bool GetShellSpawnPath(FString InItemID, FSoftObjectPath& OutPath);
    int32_t GetPlayerExperienceLevel();
    bool GetObjectInstanceData(FName InRegistryID, TArray<FNPC_DbObjectInstanceData>& outInstanceData);
    float GetHealth(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID);
    FName GetDynamicTableName();
    FName GetDynamicPersistenceTableName();
    bool GetDefinitionIdentifyingColumnName(FName& OutFirstColumnName);
    FName GetCharacterDerivedClass(FName InRegistryID);
    bool GetActorDefinitionData(FString InRegistryID, FName& outGenderID, FName& OutVoiceID, FName& outEmoteID);
    bool CreateItemAsScheduledEntity(FString InItemID);
    ESpawnRestrictionResponse CheckSpawnRestrictions(FRestrictionInfo& ioRestrictionInfo);
    ESpawnAllowedResponse AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent);
}; // Size: 0x28
#pragma pack(pop)
