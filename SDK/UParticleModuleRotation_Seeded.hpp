#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleRotation.hpp"
#pragma pack(push, 1)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x60
    static UParticleModuleRotation_Seeded* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
