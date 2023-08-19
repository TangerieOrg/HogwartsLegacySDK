#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FEphemeralCelestialSphereState {
    FRotator Rotator; // 0x0
    char pad_c[0x4];
    FQuat Rotation; // 0x10
}; // Size: 0x20
#pragma pack(pop)
