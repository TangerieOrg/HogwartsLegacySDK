#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "USkyStateOverride.hpp"
#pragma pack(push, 1)
class USkyStateOverrideCelestialSphereRotator : public USkyStateOverride {
public:
    FRotator Rotator; // 0x30
    float Priority; // 0x3c
    bool bEnabled; // 0x40
    char pad_41[0x7];
    static USkyStateOverrideCelestialSphereRotator* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
