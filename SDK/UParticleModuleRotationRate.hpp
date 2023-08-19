#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleRotationRateBase.hpp"
#pragma pack(push, 1)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase {
public:
    FRawDistributionFloat StartRotationRate; // 0x30
    static UParticleModuleRotationRate* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
