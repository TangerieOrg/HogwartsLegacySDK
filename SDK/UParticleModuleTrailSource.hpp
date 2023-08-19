#pragma once
#include <cstdint>
#include "EParticleSourceSelectionMethod.hpp"
#include "ETrail2SourceMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "FVector.hpp"
#include "UParticleModuleTrailBase.hpp"
#pragma pack(push, 1)
class UParticleModuleTrailSource : public UParticleModuleTrailBase {
public:
    ETrail2SourceMethod SourceMethod; // 0x30
    char pad_31[0x3];
    FName SourceName; // 0x34
    char pad_3c[0x4];
    FRawDistributionFloat SourceStrength; // 0x40
    uint8_t bLockSourceStength : 1; // 0x70
    uint8_t pad_bitfield_70_1 : 7;
    char pad_71[0x3];
    int32_t SourceOffsetCount; // 0x74
    TArray<FVector> SourceOffsetDefaults; // 0x78
    EParticleSourceSelectionMethod SelectionMethod; // 0x88
    char pad_89[0x3];
    uint8_t bInheritRotation : 1; // 0x8c
    uint8_t bInheritVelocity : 1; // 0x8c
    uint8_t pad_bitfield_8c_2 : 6;
    char pad_8d[0x3];
    float InheritVelocityScale; // 0x90
    char pad_94[0x4];
    static UParticleModuleTrailSource* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
