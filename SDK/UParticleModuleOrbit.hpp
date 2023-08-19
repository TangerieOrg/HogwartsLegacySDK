#pragma once
#include <cstdint>
#include "EOrbitChainMode.hpp"
#include "FOrbitOptions.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleOrbitBase.hpp"
#pragma pack(push, 1)
class UParticleModuleOrbit : public UParticleModuleOrbitBase {
public:
    EOrbitChainMode ChainMode; // 0x38
    char pad_39[0x7];
    FRawDistributionVector OffsetAmount; // 0x40
    FOrbitOptions OffsetOptions; // 0x88
    char pad_8c[0x4];
    FRawDistributionVector RotationAmount; // 0x90
    FOrbitOptions RotationOptions; // 0xd8
    char pad_dc[0x4];
    FRawDistributionVector RotationRateAmount; // 0xe0
    FOrbitOptions RotationRateOptions; // 0x128
    char pad_12c[0x4];
    static UParticleModuleOrbit* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
