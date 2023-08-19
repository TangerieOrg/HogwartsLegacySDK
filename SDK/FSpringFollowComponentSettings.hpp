#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSpringFollowComponentSettings {
    float AttachedMass; // 0x0
    float RadialConstraintMeters; // 0x4
    float RadialMinimumtMeters; // 0x8
    float SpringK; // 0xc
    float SpringB; // 0x10
    float Damping; // 0x14
    float RadialDamping; // 0x18
    float GravityFactor; // 0x1c
    float SwirlForce; // 0x20
}; // Size: 0x24
#pragma pack(pop)
