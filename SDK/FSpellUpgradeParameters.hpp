#pragma once
#include <cstdint>
#include "EEnemyShieldBreaker.hpp"
#include "EGameEvent_Intensity.hpp"
#include "EImpactTypes.hpp"
#include "EObjectSizeClass.hpp"
#pragma pack(push, 1)
struct FSpellUpgradeParameters {
    float Range; // 0x0
    float CooldownTime; // 0x4
    float NonCombatCooldownMultiplier; // 0x8
    float DamageObject; // 0xc
    float DamageCharacter; // 0x10
    float PhysicsImpulseSuccess; // 0x14
    float PhysicsImpulseFailed; // 0x18
    float Duration; // 0x1c
    float DurationCharacter; // 0x20
    float DurationCreature; // 0x24
    float DurationPlayer; // 0x28
    float ChargeTime; // 0x2c
    float ChargedMaxTime; // 0x30
    float ChannelingMinTime; // 0x34
    EGameEvent_Intensity CastNoiseIntensity; // 0x38
    char pad_39[0x3];
    float CastNoiseRadius; // 0x3c
    EGameEvent_Intensity ImpactNoiseIntensity; // 0x40
    char pad_41[0x3];
    float ImpactNoiseRadius; // 0x44
    float ProjectileSpeed; // 0x48
    float ProjectileGravity; // 0x4c
    int32_t LimitedCountObject; // 0x50
    int32_t LimitedCountCharacter; // 0x54
    EImpactTypes ImpactType; // 0x58
    EObjectSizeClass SizeLimit; // 0x59
    EEnemyShieldBreaker EnemyShieldBreaker; // 0x5a
    uint8_t Affect; // 0x5b
    uint8_t AllowNonObjectInfoActors : 1; // 0x5c
    uint8_t UpgradedMechanics : 1; // 0x5c
    uint8_t PlayObjectImpactEffects : 1; // 0x5c
    uint8_t PlayerShieldBreaker : 1; // 0x5c
    uint8_t BeastCapture : 1; // 0x5c
    uint8_t pad_bitfield_5c_5 : 3;
    char pad_5d[0x3];
}; // Size: 0x60
#pragma pack(pop)
