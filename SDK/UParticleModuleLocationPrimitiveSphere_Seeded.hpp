#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleLocationPrimitiveSphere.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
    static UParticleModuleLocationPrimitiveSphere_Seeded* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
