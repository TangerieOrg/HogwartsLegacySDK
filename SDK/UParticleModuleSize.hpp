#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleSizeBase.hpp"
#pragma pack(push, 1)
class UParticleModuleSize : public UParticleModuleSizeBase {
public:
    FRawDistributionVector StartSize; // 0x30
    static UParticleModuleSize* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
