#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleRotationRate.hpp"
#pragma pack(push, 1)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x60
    static UParticleModuleRotationRate_Seeded* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
