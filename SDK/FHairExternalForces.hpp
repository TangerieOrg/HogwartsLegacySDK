#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FHairExternalForces {
    FVector GravityVector; // 0x0
    float AirDrag; // 0xc
    FVector AirVelocity; // 0x10
}; // Size: 0x1c
#pragma pack(pop)
