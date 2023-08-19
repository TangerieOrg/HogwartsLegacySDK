#pragma once
#include <cstdint>
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
class UWorld;
class ULevel;
struct FTransform;
class AActor;
class UObject;
struct FSoftObjectPath;
class UClass;
#pragma pack(push, 1)
class UNamedCreatureTypeManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0xa8];
    static UNamedCreatureTypeManager* StaticClass();
    AActor* SpawnShell(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel);
    AActor* Spawn(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer);
    bool GetSpawnPath(FString InItemID, FSoftObjectPath& OutPath);
    bool GetSpawnAsset(FString InItemID, UClass*& OutAsset);
    bool GetShellSpawnPath(FString InItemID, FSoftObjectPath& OutPath);
    ESpawnAllowedResponse AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent);
}; // Size: 0x150
#pragma pack(pop)
