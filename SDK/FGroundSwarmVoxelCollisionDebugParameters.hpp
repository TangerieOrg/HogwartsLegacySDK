#pragma once
#include <cstdint>
#include "FSimpleTopologyVoxelArrayDebug.hpp"
#pragma pack(push, 1)
struct FGroundSwarmVoxelCollisionDebugParameters {
    bool bShowVoxels; // 0x0
    char pad_1[0x3];
    FSimpleTopologyVoxelArrayDebug ShowVoxels; // 0x4
    bool bShowCollisions; // 0x10
    char pad_11[0x3];
    float TimeFactor; // 0x14
    float ShowPreCacheLandingsTime; // 0x18
    int32_t StartCollisionInstance; // 0x1c
    bool bLockCollisionInstance; // 0x20
    char pad_21[0x3];
    int32_t StopTimeCollisionCount; // 0x24
    float CollisionTimeFilter; // 0x28
    bool bSlowTimeOnCollisions; // 0x2c
    char pad_2d[0x3];
    float ForceLinesReset; // 0x30
}; // Size: 0x34
#pragma pack(pop)
