#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleAttractorBase.hpp"
#pragma pack(push, 1)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase {
public:
    FRawDistributionVector Position; // 0x30
    FRawDistributionFloat Range; // 0x78
    FRawDistributionFloat Strength; // 0xa8
    uint8_t StrengthByDistance : 1; // 0xd8
    uint8_t bAffectBaseVelocity : 1; // 0xd8
    uint8_t bOverrideVelocity : 1; // 0xd8
    uint8_t bUseWorldSpacePosition : 1; // 0xd8
    uint8_t Positive_X : 1; // 0xd8
    uint8_t Positive_Y : 1; // 0xd8
    uint8_t Positive_Z : 1; // 0xd8
    uint8_t Negative_X : 1; // 0xd8
    uint8_t Negative_Y : 1; // 0xd9
    uint8_t Negative_Z : 1; // 0xd9
    uint8_t pad_bitfield_d9_2 : 6;
    char pad_da[0x6];
    static UParticleModuleAttractorPoint* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
