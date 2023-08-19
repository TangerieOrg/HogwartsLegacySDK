#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleVelocityBase.hpp"
#pragma pack(push, 1)
class UParticleModuleVelocity : public UParticleModuleVelocityBase {
public:
    FRawDistributionVector StartVelocity; // 0x38
    FRawDistributionFloat StartVelocityRadial; // 0x80
    static UParticleModuleVelocity* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
