#pragma once
#include <cstdint>
#include "ENPC_Spawn.hpp"
#include "UEnemy_AttackExtraData.hpp"
#pragma pack(push, 1)
class URaiseDead_AttackExtraData : public UEnemy_AttackExtraData {
public:
    int32_t MinSpawn; // 0x28
    int32_t MaxSpawn; // 0x2c
    int32_t MyMaxSpawn; // 0x30
    int32_t GlobalMaxSpawn; // 0x34
    int32_t MyLiftimeMaxSpawn; // 0x38
    char pad_3c[0x4];
    FString SpawnTeamName; // 0x40
    bool bUseMyTeamName; // 0x50
    char pad_51[0x3];
    float SpawnRadius; // 0x54
    float halfAngle; // 0x58
    char pad_5c[0x4];
    FString SpawnObjectName; // 0x60
    TArray<FString> SpawnObjectNames; // 0x70
    ENPC_Spawn SpawnType; // 0x80
    char pad_81[0x3];
    float SpawnEligibleWaitTime; // 0x84
    bool bForceThisAttack; // 0x88
    bool bStaggerAttack; // 0x89
    char pad_8a[0x2];
    float MinStaggerTime; // 0x8c
    float MaxStaggerTime; // 0x90
    bool bLimitSpawns; // 0x94
    bool bKillChildrenOnDeath; // 0x95
    char pad_96[0x1a];
    static URaiseDead_AttackExtraData* StaticClass();
    void SetSpawnEligible(bool bspawnEligible);
}; // Size: 0xb0
#pragma pack(pop)
