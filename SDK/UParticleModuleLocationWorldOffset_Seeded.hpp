#pragma once
#include <cstdint>
#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleLocationWorldOffset.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset {
public:
    FParticleRandomSeedInfo RandomSeedInfo; // 0x80
    static UParticleModuleLocationWorldOffset_Seeded* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
