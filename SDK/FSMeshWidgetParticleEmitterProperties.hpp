#pragma once
#include <cstdint>
#include "ESMeshWidgetParticleEmitterType.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FSMeshWidgetParticleEmitterProperties {
    ESMeshWidgetParticleEmitterType EmitterType; // 0x0
    bool RunOnStart; // 0x1
    bool FixToWidgetGeometry; // 0x2
    char pad_3[0x1];
    int32_t ParticlesPerSecond; // 0x4
    float MinEmissionAngle; // 0x8
    float MaxEmissionAngle; // 0xc
    float MinLifeTime; // 0x10
    float MaxLifeTime; // 0x14
    float MinSpeed; // 0x18
    float MaxSpeed; // 0x1c
    float StartScale; // 0x20
    float EndScale; // 0x24
    FVector2D Force; // 0x28
    FVector2D RandomForceMin; // 0x30
    FVector2D RandomForceMax; // 0x38
    float RandomForceRateOfChange; // 0x40
    float RandomForceScaleOfChange; // 0x44
}; // Size: 0x48
#pragma pack(pop)
