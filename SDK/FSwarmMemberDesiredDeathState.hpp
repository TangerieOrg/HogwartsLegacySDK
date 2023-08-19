#pragma once
#include <cstdint>
#include "EGroundSwarmMemberState.hpp"
#include "EGroundSwarmingKillEventDeathLeapCollisionType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSwarmMemberDesiredDeathState {
    EGroundSwarmMemberState State; // 0x0
    char pad_1[0x3];
    FVector DeathLeapImpulse; // 0x4
    float DeathLeapImpulseVariancePercent; // 0x10
    EGroundSwarmingKillEventDeathLeapCollisionType DeathLeapCheckForActorCollision; // 0x14
    char pad_15[0x3];
    FVector DeathLeapAlignTowardsCenter; // 0x18
    bool bDeathLeapAlignTowardsCenter; // 0x24
    char pad_25[0x3];
    float StateTimeout; // 0x28
    bool bStateTimeout; // 0x2c
    char pad_2d[0x3];
    int32_t Instigator; // 0x30
}; // Size: 0x34
#pragma pack(pop)
