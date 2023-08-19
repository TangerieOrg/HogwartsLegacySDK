#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleRotationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase {
public:
    FRawDistributionFloat RotationOverLife; // 0x30
    uint8_t Scale : 1; // 0x60
    uint8_t pad_bitfield_60_1 : 7;
    char pad_61[0x7];
    static UParticleModuleRotationOverLifetime* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
