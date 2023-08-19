#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleAccelerationBase.hpp"
class UDistributionFloat;
#pragma pack(push, 1)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase {
public:
    UDistributionFloat* DragScale; // 0x38
    FRawDistributionFloat DragScaleRaw; // 0x40
    static UParticleModuleAccelerationDragScaleOverLife* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
