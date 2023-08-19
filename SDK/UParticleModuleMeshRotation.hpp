#pragma once
#include <cstdint>
#include "FRawDistributionVector.hpp"
#include "UParticleModuleRotationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase {
public:
    FRawDistributionVector StartRotation; // 0x30
    uint8_t bInheritParent : 1; // 0x78
    uint8_t pad_bitfield_78_1 : 7;
    char pad_79[0x7];
    static UParticleModuleMeshRotation* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
