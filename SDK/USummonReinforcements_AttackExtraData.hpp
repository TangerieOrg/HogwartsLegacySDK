#pragma once
#include <cstdint>
#include "ENPC_Spawn.hpp"
#include "UEnemy_AttackExtraData.hpp"
#pragma pack(push, 1)
class USummonReinforcements_AttackExtraData : public UEnemy_AttackExtraData {
public:
    FString SpawnObjectName; // 0x28
    ENPC_Spawn SpawnType; // 0x38
    char pad_39[0x3];
    float InitialWaitTime; // 0x3c
    float ReinCooldownWaitTime; // 0x40
    int32_t ReinMinTeamCount; // 0x44
    int32_t MinReinforcementCount; // 0x48
    int32_t MaxReinforcementCount; // 0x4c
    int32_t GlobalMaxReinCount; // 0x50
    float SpawnRadius; // 0x54
    float MinDelayTime; // 0x58
    float MaxDelayTime; // 0x5c
    bool bStaggerAttack; // 0x60
    char pad_61[0x3];
    float MinStaggerTime; // 0x64
    float MaxStaggerTime; // 0x68
    bool bDoDebugDraw; // 0x6c
    bool bForceThisAttack; // 0x6d
    char pad_6e[0x1a];
    static USummonReinforcements_AttackExtraData* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
