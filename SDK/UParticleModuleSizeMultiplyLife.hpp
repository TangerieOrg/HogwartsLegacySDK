#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleSizeBase.hpp"
#pragma pack(push, 1)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase {
public:
    FRawDistributionVector LifeMultiplier; // 0x30
    uint8_t MultiplyX : 1; // 0x78
    uint8_t MultiplyY : 1; // 0x78
    uint8_t MultiplyZ : 1; // 0x78
    uint8_t pad_bitfield_78_3 : 5;
    char pad_79[0x7];
    static UParticleModuleSizeMultiplyLife* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
