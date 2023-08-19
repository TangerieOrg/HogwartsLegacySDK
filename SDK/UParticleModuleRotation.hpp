#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleRotationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleRotation : public UParticleModuleRotationBase {
public:
    FRawDistributionFloat StartRotation; // 0x30
    static UParticleModuleRotation* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
