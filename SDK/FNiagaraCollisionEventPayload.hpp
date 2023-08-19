#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNiagaraCollisionEventPayload {
    FVector CollisionPos; // 0x0
    FVector CollisionNormal; // 0xc
    FVector CollisionVelocity; // 0x18
    int32_t ParticleIndex; // 0x24
    int32_t PhysicalMaterialIndex; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
