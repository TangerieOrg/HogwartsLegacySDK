#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FParticleSystemTrigger {
    char pad_0[0x28];
    bool UseSpawnRate; // 0x28
    char pad_29[0x3];
    float Spawnrate; // 0x2c
    bool UseParticleColor; // 0x30
    char pad_31[0x3];
    FColor ParticleColor; // 0x34
}; // Size: 0x38
#pragma pack(pop)
