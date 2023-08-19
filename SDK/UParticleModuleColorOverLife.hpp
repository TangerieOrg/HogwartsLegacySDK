#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleColorBase.hpp"
#pragma pack(push, 1)
class UParticleModuleColorOverLife : public UParticleModuleColorBase {
public:
    FRawDistributionVector ColorOverLife; // 0x30
    FRawDistributionFloat AlphaOverLife; // 0x78
    uint8_t bClampAlpha : 1; // 0xa8
    uint8_t pad_bitfield_a8_1 : 7;
    char pad_a9[0x7];
    static UParticleModuleColorOverLife* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
