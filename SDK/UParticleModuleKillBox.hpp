#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleKillBase.hpp"
#pragma pack(push, 1)
class UParticleModuleKillBox : public UParticleModuleKillBase {
public:
    FRawDistributionVector LowerLeftCorner; // 0x30
    FRawDistributionVector UpperRightCorner; // 0x78
    uint8_t bAbsolute : 1; // 0xc0
    uint8_t bKillInside : 1; // 0xc0
    uint8_t bAxisAlignedAndFixedSize : 1; // 0xc0
    uint8_t pad_bitfield_c0_3 : 5;
    char pad_c1[0x7];
    static UParticleModuleKillBox* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
