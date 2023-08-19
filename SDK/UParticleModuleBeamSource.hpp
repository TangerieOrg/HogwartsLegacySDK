#pragma once
#include <cstdint>
#include "Beam2SourceTargetMethod.hpp"
#include "Beam2SourceTargetTangentMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleBeamBase.hpp"
#pragma pack(push, 1)
class UParticleModuleBeamSource : public UParticleModuleBeamBase {
public:
    Beam2SourceTargetMethod SourceMethod; // 0x30
    char pad_31[0x3];
    FName SourceName; // 0x34
    uint8_t bSourceAbsolute : 1; // 0x3c
    uint8_t pad_bitfield_3c_1 : 7;
    char pad_3d[0x3];
    FRawDistributionVector Source; // 0x40
    uint8_t bLockSource : 1; // 0x88
    uint8_t pad_bitfield_88_1 : 7;
    char pad_89[0x3];
    Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x8c
    char pad_8d[0x3];
    FRawDistributionVector SourceTangent; // 0x90
    uint8_t bLockSourceTangent : 1; // 0xd8
    uint8_t pad_bitfield_d8_1 : 7;
    char pad_d9[0x7];
    FRawDistributionFloat SourceStrength; // 0xe0
    uint8_t bLockSourceStength : 1; // 0x110
    uint8_t pad_bitfield_110_1 : 7;
    char pad_111[0x7];
    static UParticleModuleBeamSource* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
