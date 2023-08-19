#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleSubUV.hpp"
#pragma pack(push, 1)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV {
public:
    uint8_t bUseEmitterTime : 1; // 0x70
    uint8_t pad_bitfield_70_1 : 7;
    char pad_71[0x7];
    FRawDistributionFloat FrameRate; // 0x78
    int32_t StartingFrame; // 0xa8
    char pad_ac[0x4];
    static UParticleModuleSubUVMovie* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
