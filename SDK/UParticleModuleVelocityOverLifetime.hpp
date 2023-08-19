#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleVelocityBase.hpp"
#pragma pack(push, 1)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase {
public:
    FRawDistributionVector VelOverLife; // 0x38
    uint8_t Absolute : 1; // 0x80
    uint8_t pad_bitfield_80_1 : 7;
    char pad_81[0x7];
    static UParticleModuleVelocityOverLifetime* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
