#pragma once
#include <cstdint>
#include "FClothCollisionPrim_Box.hpp"
#include "FClothCollisionPrim_Convex.hpp"
#include "FClothCollisionPrim_Sphere.hpp"
#include "FClothCollisionPrim_SphereConnection.hpp"
#pragma pack(push, 1)
struct FClothCollisionData {
    TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
    TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
    TArray<FClothCollisionPrim_Box> Boxes; // 0x30
}; // Size: 0x40
#pragma pack(pop)
