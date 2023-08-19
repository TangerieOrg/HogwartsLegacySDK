#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FVector.hpp"
#include "UParticleModuleAttractorBase.hpp"
class UDistributionFloat;
#pragma pack(push, 1)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase {
public:
    FVector Position; // 0x30
    float Radius; // 0x3c
    UDistributionFloat* Strength; // 0x40
    FRawDistributionFloat StrengthRaw; // 0x48
    static UParticleModuleAttractorPointGravity* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
