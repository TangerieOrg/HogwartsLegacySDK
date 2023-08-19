#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UChaosPhysicalMaterial : public UObject {
public:
    float Friction; // 0x28
    float StaticFriction; // 0x2c
    float Restitution; // 0x30
    float LinearEtherDrag; // 0x34
    float AngularEtherDrag; // 0x38
    float SleepingLinearVelocityThreshold; // 0x3c
    float SleepingAngularVelocityThreshold; // 0x40
    char pad_44[0x4];
    static UChaosPhysicalMaterial* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
