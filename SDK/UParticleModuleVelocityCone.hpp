#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FVector.hpp"
#include "UParticleModuleVelocityBase.hpp"
#pragma pack(push, 1)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase {
public:
    FRawDistributionFloat Angle; // 0x38
    FRawDistributionFloat Velocity; // 0x68
    FVector Direction; // 0x98
    char pad_a4[0x4];
    static UParticleModuleVelocityCone* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
