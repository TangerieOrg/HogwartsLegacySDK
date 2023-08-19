#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleVelocity.hpp"
#pragma pack(push, 1)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
    static UParticleModuleVelocity_Seeded* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
