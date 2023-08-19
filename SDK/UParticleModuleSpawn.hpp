#pragma once
#include <cstdint>
#include "EParticleBurstMethod.hpp"
#include "FParticleBurst.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleSpawnBase.hpp"
#pragma pack(push, 1)
class UParticleModuleSpawn : public UParticleModuleSpawnBase {
public:
    FRawDistributionFloat Rate; // 0x38
    FRawDistributionFloat RateScale; // 0x68
    EParticleBurstMethod ParticleBurstMethod; // 0x98
    char pad_99[0x7];
    TArray<FParticleBurst> BurstList; // 0xa0
    FRawDistributionFloat BurstScale; // 0xb0
    uint8_t bApplyGlobalSpawnRateScale : 1; // 0xe0
    uint8_t pad_bitfield_e0_1 : 7;
    char pad_e1[0x7];
    static UParticleModuleSpawn* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
