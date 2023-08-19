#pragma once
#include <cstdint>
#include "ELocationEmitterSelectionMethod.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase {
public:
    FName EmitterName; // 0x30
    ELocationEmitterSelectionMethod SelectionMethod; // 0x38
    char pad_39[0x3];
    uint8_t InheritSourceVelocity : 1; // 0x3c
    uint8_t pad_bitfield_3c_1 : 7;
    char pad_3d[0x3];
    float InheritSourceVelocityScale; // 0x40
    uint8_t bInheritSourceRotation : 1; // 0x44
    uint8_t pad_bitfield_44_1 : 7;
    char pad_45[0x3];
    float InheritSourceRotationScale; // 0x48
    char pad_4c[0x4];
    static UParticleModuleLocationEmitter* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
