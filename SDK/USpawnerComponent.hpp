#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class AActor;
#pragma pack(push, 1)
class USpawnerComponent : public UActorComponent {
public:
    char pad_c8[0x70];
    static USpawnerComponent* StaticClass();
    void StopSpawning(FName& GroupName);
    void StartSpawning(FName& GroupName);
    bool IsSpawning(FName& GroupName);
    void EventOnFinishedSpawningAtSpawnLocation(FName& GroupName);
    void EventOnActorSpawnedAtSpawnLocation(AActor* SpawnedActor, FName& GroupName);
}; // Size: 0x138
#pragma pack(pop)
