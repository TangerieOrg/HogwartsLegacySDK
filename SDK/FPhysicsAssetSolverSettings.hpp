#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPhysicsAssetSolverSettings {
    int32_t PositionIterations; // 0x0
    int32_t VelocityIterations; // 0x4
    int32_t ProjectionIterations; // 0x8
    float CullDistance; // 0xc
    float MaxDepenetrationVelocity; // 0x10
    float FixedTimeStep; // 0x14
}; // Size: 0x18
#pragma pack(pop)
