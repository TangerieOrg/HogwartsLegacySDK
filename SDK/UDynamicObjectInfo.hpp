#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FObjectHabitatFoliageType.hpp"
#include "FObjectSpawnTime.hpp"
#include "FRotator.hpp"
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UDynamicObjectInfo : public UObject {
public:
    UClass* ClassToSpawn; // 0x28
    int32_t MaxInstances; // 0x30
    int32_t ActiveInstanceCount; // 0x34
    int32_t MaxGeneratedSpawners; // 0x38
    bool bCreateDefaultSpawner; // 0x3c
    char pad_3d[0x3];
    float ObjectSpawnChance; // 0x40
    int32_t MinPerSpawn; // 0x44
    int32_t MaxPerSpawn; // 0x48
    int32_t SpawnVariance; // 0x4c
    float InstanceSpawnChance; // 0x50
    float SpawnRadius; // 0x54
    FRotator SpawnRotation; // 0x58
    bool bUseRandomYawRotation; // 0x64
    bool bSpawnOnGround; // 0x65
    bool bSharedActorCount; // 0x66
    char pad_67[0x1];
    float MinDelayBetweenSpawns; // 0x68
    float MaxDelayBetweenSpawns; // 0x6c
    bool bUseSpawningLimits; // 0x70
    char pad_71[0x3];
    FObjectSpawnTime SpawnStartTimeOfDay; // 0x74
    FObjectSpawnTime SpawnStopTimeOfDay; // 0x80
    bool bReverseTimeCheck; // 0x8c
    char pad_8d[0x3];
    int32_t SpawnStartDayOfYear; // 0x90
    int32_t SpawnStopDayOfYear; // 0x94
    int32_t SpawnDaysAllowed; // 0x98
    int32_t SpawnMonthsAllowed; // 0x9c
    int32_t SpawnSeasonsAllowed; // 0xa0
    int32_t SpawnSpecialEventEnum; // 0xa4
    float SpawnOffset; // 0xa8
    float MinAltitude; // 0xac
    float MaxAltitude; // 0xb0
    char pad_b4[0x4];
    TArray<FObjectHabitatFoliageType> HabitatFoliage; // 0xb8
    float MinFoliageDensity; // 0xc8
    bool bFoliageRequired; // 0xcc
    bool bAllowNoFoliage; // 0xcd
    char pad_ce[0x2];
    float MaxGroundAngle; // 0xd0
    int32_t MaxAngleIterations; // 0xd4
    int32_t MaxRuntimeSlopeRetries; // 0xd8
    bool bVisualiseSpawners; // 0xdc
    char pad_dd[0x3];
    FColor ObjectSpawnerActiveColor; // 0xe0
    FColor ObjectSpawnerInactiveColor; // 0xe4
    bool bVisualiseSlopeRejects; // 0xe8
    char pad_e9[0x7];
    static UDynamicObjectInfo* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
