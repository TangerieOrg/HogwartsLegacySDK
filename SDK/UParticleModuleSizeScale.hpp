#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleSizeBase.hpp"
#pragma pack(push, 1)
class UParticleModuleSizeScale : public UParticleModuleSizeBase {
public:
    FRawDistributionVector SizeScale; // 0x30
    uint8_t EnableX : 1; // 0x78
    uint8_t EnableY : 1; // 0x78
    uint8_t EnableZ : 1; // 0x78
    uint8_t pad_bitfield_78_3 : 5;
    char pad_79[0x7];
    static UParticleModuleSizeScale* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
