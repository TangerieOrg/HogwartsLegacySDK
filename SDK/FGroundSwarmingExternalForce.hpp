#pragma once
#include <cstdint>
#include "EGroundSwarmingExternalForceType.hpp"
#include "FGroundSwarmingFocus.hpp"
#pragma pack(push, 1)
struct FGroundSwarmingExternalForce {
    EGroundSwarmingExternalForceType Type; // 0x0
    char pad_1[0xf];
    FGroundSwarmingFocus Origin; // 0x10
    float InnerForce; // 0xb0
    float InnerRadius; // 0xb4
    float OuterForce; // 0xb8
    float OuterRadius; // 0xbc
    float CurlNoiseXYScaling; // 0xc0
    float CurlNoiseEpsilon; // 0xc4
    bool bOuterForceUnbounded; // 0xc8
    bool bUseXYDistance; // 0xc9
    bool bSurfaceOnly; // 0xca
    bool bEnabled; // 0xcb
    char pad_cc[0x4];
}; // Size: 0xd0
#pragma pack(pop)
