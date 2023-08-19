#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleColorBase.hpp"
#pragma pack(push, 1)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase {
public:
    FRawDistributionVector ColorScaleOverLife; // 0x30
    FRawDistributionFloat AlphaScaleOverLife; // 0x78
    uint8_t bEmitterTime : 1; // 0xa8
    uint8_t pad_bitfield_a8_1 : 7;
    char pad_a9[0x7];
    static UParticleModuleColorScaleOverLife* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
