#pragma once
#include <cstdint>
#include "EDynamicObjectSpawnerState.hpp"
#include "FTimerHandle.hpp"
class UClass;
class ASpawnLocation;
class AActor;
#pragma pack(push, 1)
struct FSpawnInfoGroup {
    UClass* SpawnType; // 0x0
    TArray<ASpawnLocation*> SpawnLocations; // 0x8
    float MinDelayBetweenSpawns; // 0x18
    float MaxDelayBetweenSpawns; // 0x1c
    TArray<AActor*> ActiveInstances; // 0x20
    int32_t InstanceCount; // 0x30
    int32_t TargetCount; // 0x34
    EDynamicObjectSpawnerState SpawnState; // 0x38
    char pad_39[0x7];
    FTimerHandle TimerHandle; // 0x40
}; // Size: 0x48
#pragma pack(pop)
