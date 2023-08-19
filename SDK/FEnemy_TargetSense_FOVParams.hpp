#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnemy_TargetSense_FOVParams {
    float FOV; // 0x0
    float Distance; // 0x4
    float Height; // 0x8
    float MinHeight; // 0xc
    float NegativeHeight; // 0x10
    float NegativeMinHeight; // 0x14
    float FalloffScale; // 0x18
    float HearingRadius; // 0x1c
    float DistanceInstant; // 0x20
    float HearingRadiusInstant; // 0x24
    float DistanceAdd; // 0x28
    float HearingRadiusAdd; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
