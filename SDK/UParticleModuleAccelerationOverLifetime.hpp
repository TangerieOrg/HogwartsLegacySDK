#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleAccelerationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase {
public:
    FRawDistributionVector AccelOverLife; // 0x38
    static UParticleModuleAccelerationOverLifetime* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
