#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationDirect : public UParticleModuleLocationBase {
public:
    FRawDistributionVector Location; // 0x30
    FRawDistributionVector LocationOffset; // 0x78
    FRawDistributionVector ScaleFactor; // 0xc0
    FRawDistributionVector Direction; // 0x108
    static UParticleModuleLocationDirect* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
