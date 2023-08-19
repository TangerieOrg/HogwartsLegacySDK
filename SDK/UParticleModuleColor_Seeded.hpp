#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleColor.hpp"
#pragma pack(push, 1)
class UParticleModuleColor_Seeded : public UParticleModuleColor {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
    static UParticleModuleColor_Seeded* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
