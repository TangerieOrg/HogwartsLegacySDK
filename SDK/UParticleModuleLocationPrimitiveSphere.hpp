#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleLocationPrimitiveBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase {
public:
    FRawDistributionFloat StartRadius; // 0xb0
    static UParticleModuleLocationPrimitiveSphere* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
