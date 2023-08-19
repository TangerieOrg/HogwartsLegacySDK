#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
class UDistributionFloat;
#pragma pack(push, 1)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase {
public:
    UDistributionFloat* VectorFieldScale; // 0x30
    FRawDistributionFloat VectorFieldScaleRaw; // 0x38
    static UParticleModuleVectorFieldScale* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
