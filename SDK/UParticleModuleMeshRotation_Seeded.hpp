#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleMeshRotation.hpp"
#pragma pack(push, 1)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x80
    static UParticleModuleMeshRotation_Seeded* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
