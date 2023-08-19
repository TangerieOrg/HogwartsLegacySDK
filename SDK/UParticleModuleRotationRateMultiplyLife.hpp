#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleRotationRateBase.hpp"
#pragma pack(push, 1)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase {
public:
    FRawDistributionFloat LifeMultiplier; // 0x30
    static UParticleModuleRotationRateMultiplyLife* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
