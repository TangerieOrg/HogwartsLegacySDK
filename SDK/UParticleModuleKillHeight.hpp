#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleKillBase.hpp"
#pragma pack(push, 1)
class UParticleModuleKillHeight : public UParticleModuleKillBase {
public:
    FRawDistributionFloat Height; // 0x30
    uint8_t bAbsolute : 1; // 0x60
    uint8_t bFloor : 1; // 0x60
    uint8_t bApplyPSysScale : 1; // 0x60
    uint8_t pad_bitfield_60_3 : 5;
    char pad_61[0x7];
    static UParticleModuleKillHeight* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
