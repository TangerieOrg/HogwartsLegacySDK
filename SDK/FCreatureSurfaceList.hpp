#pragma once
#include <cstdint>
#include "FVector2D.hpp"
class UParticleSystem;
class UMaterialInstance;
#pragma pack(push, 1)
struct FCreatureSurfaceList {
    UParticleSystem* ParticleSystem; // 0x0
    float LocalParticleScale; // 0x8
    float ParticleKickupDirection; // 0xc
    bool UseDecal; // 0x10
    char pad_11[0x7];
    UMaterialInstance* Decal; // 0x18
    FVector2D DecalRandomSize; // 0x20
    bool DirectionalDecal; // 0x28
    char pad_29[0x3];
    int32_t DecalFrameCount; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
