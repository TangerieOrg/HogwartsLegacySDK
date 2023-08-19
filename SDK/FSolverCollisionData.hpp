#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSolverCollisionData {
    FVector Location; // 0x0
    FVector AccumulatedImpulse; // 0xc
    FVector Normal; // 0x18
    FVector Velocity1; // 0x24
    FVector Velocity2; // 0x30
    FVector AngularVelocity1; // 0x3c
    FVector AngularVelocity2; // 0x48
    float Mass1; // 0x54
    float Mass2; // 0x58
    int32_t ParticleIndex; // 0x5c
    int32_t LevelsetIndex; // 0x60
    int32_t ParticleIndexMesh; // 0x64
    int32_t LevelsetIndexMesh; // 0x68
}; // Size: 0x6c
#pragma pack(pop)
