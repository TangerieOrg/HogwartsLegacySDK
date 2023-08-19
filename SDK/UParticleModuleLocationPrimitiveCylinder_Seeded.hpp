#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleLocationPrimitiveCylinder.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x120
    static UParticleModuleLocationPrimitiveCylinder_Seeded* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
