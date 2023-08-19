#pragma once
#include <cstdint>
#include "FSpellLevelData.hpp"
#pragma pack(push, 1)
struct FFlipendoLevelData : public FSpellLevelData {
    char pad_1[0x3];
    float TapBasePhysicsImpulseXY; // 0x4
    float TapBasePhysicsImpulseZ; // 0x8
    float TapBaseAngularVelocity; // 0xc
    float TapMassScaledPhysicsImpulseXY; // 0x10
    float TapMassScaledPhysicsImpulseZ; // 0x14
    float TapMassScaleAngularVelocity; // 0x18
    float TapMaxVelocity; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
