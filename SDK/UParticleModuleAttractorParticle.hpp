#pragma once
#include <cstdint>
#include "EAttractorParticleSelectionMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleAttractorBase.hpp"
#pragma pack(push, 1)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase {
public:
    FName EmitterName; // 0x30
    FRawDistributionFloat Range; // 0x38
    uint8_t bStrengthByDistance : 1; // 0x68
    uint8_t pad_bitfield_68_1 : 7;
    char pad_69[0x7];
    FRawDistributionFloat Strength; // 0x70
    uint8_t bAffectBaseVelocity : 1; // 0xa0
    uint8_t pad_bitfield_a0_1 : 7;
    char pad_a1[0x3];
    EAttractorParticleSelectionMethod SelectionMethod; // 0xa4
    char pad_a5[0x3];
    uint8_t bRenewSource : 1; // 0xa8
    uint8_t bInheritSourceVel : 1; // 0xa8
    uint8_t pad_bitfield_a8_2 : 6;
    char pad_a9[0x3];
    int32_t LastSelIndex; // 0xac
    static UParticleModuleAttractorParticle* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
