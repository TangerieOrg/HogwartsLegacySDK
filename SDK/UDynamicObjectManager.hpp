#pragma once
#include <cstdint>
#include "FDynamicObjectLoadInfo.hpp"
#include "FTransform.hpp"
#include "UObject.hpp"
class UGameInstance;
class ARandomEncounterActor;
class AActor;
#pragma pack(push, 1)
class UDynamicObjectManager : public UObject {
public:
    char pad_28[0x2b0];
    UGameInstance* pGameInstance; // 0x2d8
    ARandomEncounterActor* pRandomEncounter; // 0x2e0
    char pad_2e8[0x150];
    static UDynamicObjectManager* StaticClass();
    bool SpawnObjectByName(FString ObjectToSpawn);
    AActor* SpawnDynamicObject(FString ObjectToSpawn, FDynamicObjectLoadInfo InSpawnParams);
    void SetDynamicSpawningEnabled(bool bInEnableSpawning);
    void OnSaveGameLoaded();
    void ObjectLoaded();
    bool LoadDynamicObject(FString ObjectToLoad);
    bool IsObjectLoaded(FString ObjectToLoad);
    static UDynamicObjectManager* Get();
    FTransform FindValidLocation(FTransform InTransform, float Radius, float halfAngle);
    void DoDelayedSpawn(uint32_t RequestID);
}; // Size: 0x438
#pragma pack(pop)
