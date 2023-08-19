#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
class UDistributionFloat;
#pragma pack(push, 1)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase {
public:
    UDistributionFloat* VectorFieldScaleOverLife; // 0x30
    FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
    static UParticleModuleVectorFieldScaleOverLife* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
