#pragma once
#include <cstdint>
#include "FIntVector.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FHairCollisionConstraint {
    bool SolveCollision; // 0x0
    bool ProjectCollision; // 0x1
    char pad_2[0x2];
    float StaticFriction; // 0x4
    float KineticFriction; // 0x8
    float StrandsViscosity; // 0xc
    FIntVector GridDimension; // 0x10
    float CollisionRadius; // 0x1c
    FRuntimeFloatCurve RadiusScale; // 0x20
}; // Size: 0xa8
#pragma pack(pop)
