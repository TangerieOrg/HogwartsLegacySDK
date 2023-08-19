#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleSubUVBase.hpp"
class USubUVAnimation;
#pragma pack(push, 1)
class UParticleModuleSubUV : public UParticleModuleSubUVBase {
public:
    USubUVAnimation* Animation; // 0x30
    FRawDistributionFloat SubImageIndex; // 0x38
    uint8_t bUseRealTime : 1; // 0x68
    uint8_t pad_bitfield_68_1 : 7;
    char pad_69[0x7];
    static UParticleModuleSubUV* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
