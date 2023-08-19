#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase {
public:
    FRawDistributionVector StartOffset; // 0x30
    FRawDistributionFloat Height; // 0x78
    FRawDistributionFloat Angle; // 0xa8
    FRawDistributionFloat Thickness; // 0xd8
    static UParticleModuleLocationPrimitiveTriangle* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
