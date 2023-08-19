#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase {
public:
    FRawDistributionVector SourceMovementScale; // 0x30
    static UParticleModuleSourceMovement* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
