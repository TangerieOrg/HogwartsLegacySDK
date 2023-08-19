#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleRotationRateBase.hpp"
#pragma pack(push, 1)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase {
public:
    FRawDistributionVector RotRate; // 0x30
    uint8_t bScaleRotRate : 1; // 0x78
    uint8_t pad_bitfield_78_1 : 7;
    char pad_79[0x7];
    static UParticleModuleMeshRotationRateOverLife* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
