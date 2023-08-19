#pragma once
#include <cstdint>
#include "BeamModifierType.hpp"
#include "FBeamModifierOptions.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleBeamBase.hpp"
#pragma pack(push, 1)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase {
public:
    BeamModifierType ModifierType; // 0x30
    char pad_31[0x3];
    FBeamModifierOptions PositionOptions; // 0x34
    FRawDistributionVector Position; // 0x38
    FBeamModifierOptions TangentOptions; // 0x80
    char pad_84[0x4];
    FRawDistributionVector Tangent; // 0x88
    uint8_t bAbsoluteTangent : 1; // 0xd0
    uint8_t pad_bitfield_d0_1 : 7;
    char pad_d1[0x3];
    FBeamModifierOptions StrengthOptions; // 0xd4
    FRawDistributionFloat Strength; // 0xd8
    static UParticleModuleBeamModifier* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
