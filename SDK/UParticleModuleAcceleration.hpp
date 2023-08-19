#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleAccelerationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase {
public:
    FRawDistributionVector Acceleration; // 0x38
    uint8_t bApplyOwnerScale : 1; // 0x80
    uint8_t pad_bitfield_80_1 : 7;
    char pad_81[0x7];
    static UParticleModuleAcceleration* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
