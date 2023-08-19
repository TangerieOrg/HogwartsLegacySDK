#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleRotationRateBase.hpp"
#pragma pack(push, 1)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase {
public:
    FRawDistributionVector LifeMultiplier; // 0x30
    static UParticleModuleMeshRotationRateMultiplyLife* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
