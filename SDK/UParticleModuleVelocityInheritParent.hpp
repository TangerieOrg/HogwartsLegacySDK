#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleVelocityBase.hpp"
#pragma pack(push, 1)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase {
public:
    FRawDistributionVector Scale; // 0x38
    static UParticleModuleVelocityInheritParent* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
