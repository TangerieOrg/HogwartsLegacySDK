#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleLight.hpp"
#pragma pack(push, 1)
class UParticleModuleLight_Seeded : public UParticleModuleLight {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x120
    static UParticleModuleLight_Seeded* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
