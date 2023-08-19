#pragma once
#include <cstdint>
#include "ENPC_Spawn.hpp"
#include "UEnemy_AttackExtraData.hpp"
#pragma pack(push, 1)
class UAnimagus_AttackExtraData : public UEnemy_AttackExtraData {
public:
    FString SpawnObjectName; // 0x28
    ENPC_Spawn SpawnType; // 0x38
    char pad_39[0x3];
    float AnimagusMorphTime; // 0x3c
    float AnimagusMorphTimeLevelMultiplier; // 0x40
    float AnimagusWaitTime; // 0x44
    float AnimalHealthOverride; // 0x48
    bool bForceThisAttack; // 0x4c
    bool bAllowSingleAttack; // 0x4d
    bool bKillChildrenOnDeath; // 0x4e
    char pad_4f[0x11];
    static UAnimagus_AttackExtraData* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
