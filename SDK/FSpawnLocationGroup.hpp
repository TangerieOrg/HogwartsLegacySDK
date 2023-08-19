#pragma once
#include <cstdint>
#include "ESpawnOnFloorTestType.hpp"
#include "ESpawnerActorSelectionMode.hpp"
#include "FRandomStream.hpp"
class ASpawnLocation;
class UClass;
#pragma pack(push, 1)
struct FSpawnLocationGroup {
    TArray<ASpawnLocation*> SpawnLocations; // 0x0
    ESpawnerActorSelectionMode ActorSelectionMode; // 0x10
    char pad_11[0x7];
    TArray<UClass*> ActorClassesToSpawn; // 0x18
    int32_t MinActorCount; // 0x28
    int32_t MaxActorCount; // 0x2c
    float MinDelayBetweenSpawns; // 0x30
    float MaxDelayBetweenSpawns; // 0x34
    bool bForceSpawnOnFloor; // 0x38
    ESpawnOnFloorTestType SpawnOnFloorTest; // 0x39
    char pad_3a[0x2];
    float FloorSweepDistanceZ; // 0x3c
    bool bIsValid; // 0x40
    bool bUsesDeterministicSpawning; // 0x41
    char pad_42[0x2];
    int32_t RandomizerSeed; // 0x44
    FRandomStream Randomizer; // 0x48
}; // Size: 0x50
#pragma pack(pop)
