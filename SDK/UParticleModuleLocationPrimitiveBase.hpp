#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase {
public:
    uint8_t Positive_X : 1; // 0x30
    uint8_t Positive_Y : 1; // 0x30
    uint8_t Positive_Z : 1; // 0x30
    uint8_t Negative_X : 1; // 0x30
    uint8_t Negative_Y : 1; // 0x30
    uint8_t Negative_Z : 1; // 0x30
    uint8_t SurfaceOnly : 1; // 0x30
    uint8_t Velocity : 1; // 0x30
    char pad_31[0x7];
    FRawDistributionFloat VelocityScale; // 0x38
    FRawDistributionVector StartLocation; // 0x68
    static UParticleModuleLocationPrimitiveBase* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
