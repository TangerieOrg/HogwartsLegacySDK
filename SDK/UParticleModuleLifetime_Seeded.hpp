#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleLifetime.hpp"
#pragma pack(push, 1)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x60
    static UParticleModuleLifetime_Seeded* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
