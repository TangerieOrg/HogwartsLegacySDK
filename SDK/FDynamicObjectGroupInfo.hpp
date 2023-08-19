#pragma once
#include <cstdint>
#include "EEnemy_CharacterState.hpp"
#include "ENPC_Spawn.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "EUIHealthBarType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FGameplayTag.hpp"
#include "FPerPlatformInt.hpp"
#include "FRandomStream.hpp"
class ASpawnLocation;
class AActor;
class APerformTasksForAI;
class UObject;
#pragma pack(push, 1)
struct FDynamicObjectGroupInfo {
    FDbSingleColumnInfo SpawnCategoryType; // 0x0
    FGameplayTag TagRestriction; // 0x88
    bool bIsPersistent; // 0x90
    bool bSpawnRagdollIfDead; // 0x91
    bool bSpawnAllDead; // 0x92
    bool bSpawnBlind; // 0x93
    bool bSpawnInjured; // 0x94
    char pad_95[0x3];
    TArray<ASpawnLocation*> SpawnLocations; // 0x98
    int32_t MinActorCount; // 0xa8
    int32_t MaxActorCount; // 0xac
    FPerPlatformInt OverrideMinActorCount; // 0xb0
    FPerPlatformInt OverrideMaxActorCount; // 0xb4
    float MinDelayBetweenSpawns; // 0xb8
    float MaxDelayBetweenSpawns; // 0xbc
    float SpawnProbability; // 0xc0
    bool bApplyDelayOnFirstSpawn; // 0xc4
    bool bApplyDelayWhenCulling; // 0xc5
    bool SpawnOnlyOneOfTheGroup; // 0xc6
    bool bForceSpawnOnFloor; // 0xc7
    bool bSpawnOnNavMesh; // 0xc8
    ESpawnActorCollisionHandlingMethod CollisionHandlingMethod; // 0xc9
    bool bUseScatterSpawn; // 0xca
    char pad_cb[0x1];
    float FloorSweepDistanceZ; // 0xcc
    float RadiusForNavCheck; // 0xd0
    float SpawnTimeout; // 0xd4
    int32_t GatherDataRetryMax; // 0xd8
    float GatherDataTimout; // 0xdc
    bool bAllowSyncGatherOnTimout; // 0xe0
    ENPC_Spawn SpawnTypeOverride; // 0xe1
    EEnemy_CharacterState SpawnStateOverride; // 0xe2
    bool bAllowLookOverride; // 0xe3
    char pad_e4[0x4];
    FDbSingleColumnInfo SpawnLookOverride; // 0xe8
    bool bAllowVoiceOverride; // 0x170
    char pad_171[0x7];
    FDbSingleColumnInfo SpawnVoiceOverride; // 0x178
    EUIHealthBarType HealthBarType; // 0x200
    char pad_201[0x7];
    APerformTasksForAI* PerformTaskTrigger; // 0x208
    bool StartPerformTaskWhenSpawned; // 0x210
    bool StartPerformTaskWhenResurrected; // 0x211
    bool LoopPerformTask; // 0x212
    bool ForceSEMode; // 0x213
    char pad_214[0x24];
    TArray<AActor*> ActiveInstances; // 0x238
    TArray<AActor*> AliveInstances; // 0x248
    TArray<UObject*> EntityInstances; // 0x258
    char pad_268[0x10];
    int32_t SpawnedActorCount; // 0x278
    FRandomStream Randomizer; // 0x27c
    char pad_284[0x2a4];
}; // Size: 0x528
#pragma pack(pop)
