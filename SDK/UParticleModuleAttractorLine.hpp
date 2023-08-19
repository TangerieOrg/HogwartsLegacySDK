#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FVector.hpp"
#include "UParticleModuleAttractorBase.hpp"
#pragma pack(push, 1)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase {
public:
    FVector EndPoint0; // 0x30
    FVector EndPoint1; // 0x3c
    FRawDistributionFloat Range; // 0x48
    FRawDistributionFloat Strength; // 0x78
    static UParticleModuleAttractorLine* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
