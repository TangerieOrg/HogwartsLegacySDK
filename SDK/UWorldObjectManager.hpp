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
#pragma pack(push, 1)
class UWorldObjectManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x50];
    static UWorldObjectManager* StaticClass();
    AActor* Spawn(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer);
    void SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
    ESpawnAllowedResponse AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent);
}; // Size: 0xf8
#pragma pack(pop)
