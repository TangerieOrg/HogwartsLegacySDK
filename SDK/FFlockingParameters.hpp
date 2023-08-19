#pragma once
#include <cstdint>
#include "FAlignToVelocity.hpp"
#pragma pack(push, 1)
struct FFlockingParameters {
    float Follow; // 0x0
    float FollowLag; // 0x4
    float AwayDamping; // 0x8
    float MinFollowDistance; // 0xc
    float MaxFollowDistance; // 0x10
    bool bEnforceMaxFollowDistance; // 0x14
    char pad_15[0x3];
    float Separation; // 0x18
    float SeparationDistance; // 0x1c
    int32_t Clusters; // 0x20
    float Alignment; // 0x24
    float Cohesion; // 0x28
    bool bEnforceMaxSpeed; // 0x2c
    char pad_2d[0x3];
    float MaxSpeed; // 0x30
    float VelocityDamping; // 0x34
    FAlignToVelocity AlignSettings; // 0x38
    bool bAlign; // 0x48
    char pad_49[0x3];
    float LocalSpace; // 0x4c
    bool bUseDynamicLeader; // 0x50
    char pad_51[0x3];
    float SwitchDynamicLeaderTimeMin; // 0x54
    float SwitchDynamicLeaderTimeMax; // 0x58
    float StrengthMod; // 0x5c
    float NumericMaxBounds; // 0x60
    float NumericSpeedLimit; // 0x64
}; // Size: 0x68
#pragma pack(pop)
