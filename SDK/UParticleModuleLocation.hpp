#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocation : public UParticleModuleLocationBase {
public:
    FRawDistributionVector StartLocation; // 0x30
    float DistributeOverNPoints; // 0x78
    float DistributeThreshold; // 0x7c
    static UParticleModuleLocation* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
