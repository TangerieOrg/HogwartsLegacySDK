#pragma once
#include <cstdint>
#include "FSpellLevelData.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FAccioLevelData : public FSpellLevelData {
    char pad_1[0x7];
    UCurveFloat* BasePhysicsImpulseCurve; // 0x8
    UCurveFloat* MassScaledPhysicsImpulseCurve; // 0x10
    float InitialBasePhysicsImpulse; // 0x18
    float InitialMassScaledBasePhysicsImpulse; // 0x1c
    float InitialImpulseDuration; // 0x20
    float CharacterBasePhysicsImpulse; // 0x24
    float CharacterMassScaledPhysicsImpulse; // 0x28
    float MaxVelocity; // 0x2c
    float AccioCharacterKnockbackAtDistance; // 0x30
    float AdditionalFailedRadius; // 0x34
    float NonMovableDamage; // 0x38
    float NonMovableAdditionalForce; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
