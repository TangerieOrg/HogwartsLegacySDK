#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleParameterDynamic.hpp"
#pragma pack(push, 1)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x48
    static UParticleModuleParameterDynamic_Seeded* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
