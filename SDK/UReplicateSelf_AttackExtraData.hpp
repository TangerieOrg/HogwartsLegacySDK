#pragma once
#include <cstdint>
#include "ENPC_Spawn.hpp"
#include "FGameplayTag.hpp"
#include "UEnemy_AttackExtraData.hpp"
#pragma pack(push, 1)
class UReplicateSelf_AttackExtraData : public UEnemy_AttackExtraData {
public:
    FString SpawnObjectName; // 0x28
    ENPC_Spawn SpawnType; // 0x38
    char pad_39[0x3];
    int32_t MinSpawn; // 0x3c
    int32_t MaxSpawn; // 0x40
    int32_t GlobalMaxSpawn; // 0x44
    float SpawnRadius; // 0x48
    float halfAngle; // 0x4c
    float SpawnSpeedMultiplier; // 0x50
    float BuffTeamWaitTime; // 0x54
    bool bForceThisAttack; // 0x58
    bool bFadeReplicaOnDeath; // 0x59
    char pad_5a[0x2];
    float FadeDelay; // 0x5c
    float FadeDuration; // 0x60
    float ReplicaHealthOverride; // 0x64
    FGameplayTag AttackExclusionTag; // 0x68
    bool bStaggerAttack; // 0x70
    char pad_71[0x3];
    float MinStaggerTime; // 0x74
    float MaxStaggerTime; // 0x78
    bool bKillChildrenOnDeath; // 0x7c
    char pad_7d[0x1b];
    static UReplicateSelf_AttackExtraData* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
