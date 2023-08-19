#pragma once
#include <cstdint>
#include "FLightCullingLightPhysicsParent.hpp"
#pragma pack(push, 1)
struct FLightCullingLight {
    FLightCullingLightPhysicsParent PhysicsParent; // 0x0
    char pad_8[0x44];
}; // Size: 0x4c
#pragma pack(pop)
