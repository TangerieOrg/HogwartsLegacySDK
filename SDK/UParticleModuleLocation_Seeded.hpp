#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleLocation.hpp"
#pragma pack(push, 1)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x80
    static UParticleModuleLocation_Seeded* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
