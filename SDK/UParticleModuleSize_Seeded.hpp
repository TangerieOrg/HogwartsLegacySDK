#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleSize.hpp"
#pragma pack(push, 1)
class UParticleModuleSize_Seeded : public UParticleModuleSize {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x78
    static UParticleModuleSize_Seeded* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
