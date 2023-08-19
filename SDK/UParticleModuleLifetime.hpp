#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleLifetimeBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase {
public:
    FRawDistributionFloat LifeTime; // 0x30
    static UParticleModuleLifetime* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
