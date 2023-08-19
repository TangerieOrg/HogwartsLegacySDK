#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationStaticMesh : public UParticleModuleLocationBase {
public:
    uint8_t Velocity : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
    FRawDistributionFloat VelocityScale; // 0x38
    static UParticleModuleLocationStaticMesh* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
