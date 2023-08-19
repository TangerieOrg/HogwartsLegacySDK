#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleRotationRateBase.hpp"
#pragma pack(push, 1)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase {
public:
    FRawDistributionVector StartRotationRate; // 0x30
    static UParticleModuleMeshRotationRate* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
