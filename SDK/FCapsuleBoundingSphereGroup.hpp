#pragma once
#include <cstdint>
#include "FCapsuleBoundingSphere.hpp"
#pragma pack(push, 1)
struct FCapsuleBoundingSphereGroup {
    TArray<FCapsuleBoundingSphere> Spheres; // 0x0
}; // Size: 0x10
#pragma pack(pop)
