#pragma once
#include <cstdint>
#include "FSpellLevelData.hpp"
#pragma pack(push, 1)
struct FProtegoLevelData : public FSpellLevelData {
    char pad_1[0x3];
    float PerfectTime; // 0x4
    float DisarmPercent; // 0x8
    float DisarmForce; // 0xc
    float PerfectAOERadius; // 0x10
    float PerfectCharacterBasePhysicsImpulse; // 0x14
    float PerfectCharacterMassScaledPhysicsImpulse; // 0x18
    float PerfectCharacterMaxVelocity; // 0x1c
    float NormalCharacterBasePhysicsImpulse; // 0x20
    float NormalCharacterMassScaledPhysicsImpulse; // 0x24
    float NormalCharacterMaxVelocity; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
