#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGroundSwarmVoxelCollisionParameters {
    float InitialGroundScanHeight; // 0x0
    int32_t PreCacheMaxCollisionsFrame; // 0x4
    float Radius; // 0x8
    float SurfaceOffset; // 0xc
    float MaxTimeStep; // 0x10
    float Elasticity; // 0x14
    float ElasticityVariancePercent; // 0x18
    float StickyThreshold; // 0x1c
    float BounceNoiseAmountDegrees; // 0x20
    float FreefallTimeout; // 0x24
    float DeadRecycleDelayMin; // 0x28
    float DeadRecycleDelayMax; // 0x2c
    float RespawnVelocityVariance; // 0x30
}; // Size: 0x34
#pragma pack(pop)
