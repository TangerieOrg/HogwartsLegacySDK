#pragma once
#include <cstdint>
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
class UWorld;
class ULevel;
struct FTransform;
class UObject;
class AActor;
struct FSoftObjectPath;
class UClass;
#pragma pack(push, 1)
class UNPC_DBRegManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x648];
    static UNPC_DBRegManager* StaticClass();
    AActor* Spawn(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod inCollisioinMethod, ULevel* InOverrideLevel, UObject* InParentContainer);
    void SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
    void RestoreData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
    void OnSaveGameLoaded();
    uint32_t GetUniqueObjectID(FString InItemID);
    bool GetSpawnPath(FString InItemID, FSoftObjectPath& OutPath);
    bool GetSpawnAsset(FString InItemID, UClass*& OutAsset);
    float GetHealth(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID);
    bool CreateItemAsScheduledEntity(FString InItemID);
    ESpawnAllowedResponse AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent);
}; // Size: 0x6f0
#pragma pack(pop)
