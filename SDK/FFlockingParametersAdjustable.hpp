#pragma once
#include <cstdint>
#include "FAlignToVelocity.hpp"
#pragma pack(push, 1)
struct FFlockingParametersAdjustable {
    float Follow; // 0x0
    float FollowLag; // 0x4
    float AwayDamping; // 0x8
    float MinFollowDistance; // 0xc
    float MaxFollowDistance; // 0x10
    bool bEnforceMaxFollowDistance; // 0x14
    char pad_15[0x3];
    float Separation; // 0x18
    float SeparationDistance; // 0x1c
    float Alignment; // 0x20
    float Cohesion; // 0x24
    bool bEnforceMaxSpeed; // 0x28
    char pad_29[0x3];
    float MaxSpeed; // 0x2c
    float VelocityDamping; // 0x30
    FAlignToVelocity AlignSettings; // 0x34
    bool bAlign; // 0x44
    char pad_45[0x3];
    float LocalSpace; // 0x48
    bool bUseDynamicLeader; // 0x4c
    char pad_4d[0x3];
    float SwitchDynamicLeaderTimeMin; // 0x50
    float SwitchDynamicLeaderTimeMax; // 0x54
    float StrengthMod; // 0x58
}; // Size: 0x5c
#pragma pack(pop)
