#pragma once
#include <cstdint>
#include "CylinderHeightAxis.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleLocationPrimitiveBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase {
public:
    uint8_t RadialVelocity : 1; // 0xb0
    uint8_t pad_bitfield_b0_1 : 7;
    char pad_b1[0x7];
    FRawDistributionFloat StartRadius; // 0xb8
    FRawDistributionFloat StartHeight; // 0xe8
    CylinderHeightAxis HeightAxis; // 0x118
    char pad_119[0x7];
    static UParticleModuleLocationPrimitiveCylinder* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
