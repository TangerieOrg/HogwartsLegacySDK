#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleMeshRotationRate.hpp"
#pragma pack(push, 1)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x78
    static UParticleModuleMeshRotationRate_Seeded* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
