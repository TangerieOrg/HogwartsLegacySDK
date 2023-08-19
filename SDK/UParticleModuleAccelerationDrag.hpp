#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleAccelerationBase.hpp"
class UDistributionFloat;
#pragma pack(push, 1)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase {
public:
    UDistributionFloat* DragCoefficient; // 0x38
    FRawDistributionFloat DragCoefficientRaw; // 0x40
    static UParticleModuleAccelerationDrag* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
