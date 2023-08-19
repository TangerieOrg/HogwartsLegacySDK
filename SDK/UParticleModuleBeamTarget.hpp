#pragma once
#include <cstdint>
#include "Beam2SourceTargetMethod.hpp"
#include "Beam2SourceTargetTangentMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleBeamBase.hpp"
#pragma pack(push, 1)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase {
public:
    Beam2SourceTargetMethod TargetMethod; // 0x30
    char pad_31[0x3];
    FName TargetName; // 0x34
    char pad_3c[0x4];
    FRawDistributionVector Target; // 0x40
    uint8_t bTargetAbsolute : 1; // 0x88
    uint8_t bLockTarget : 1; // 0x88
    uint8_t pad_bitfield_88_2 : 6;
    char pad_89[0x3];
    Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x8c
    char pad_8d[0x3];
    FRawDistributionVector TargetTangent; // 0x90
    uint8_t bLockTargetTangent : 1; // 0xd8
    uint8_t pad_bitfield_d8_1 : 7;
    char pad_d9[0x7];
    FRawDistributionFloat TargetStrength; // 0xe0
    uint8_t bLockTargetStength : 1; // 0x110
    uint8_t pad_bitfield_110_1 : 7;
    char pad_111[0x3];
    float LockRadius; // 0x114
    char pad_118[0x8];
    static UParticleModuleBeamTarget* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
