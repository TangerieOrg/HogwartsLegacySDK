#pragma once
#include <cstdint>
#include "EPhysicsVirtualForceApplication.hpp"
#include "FPhysicsPD.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPhysicsVirtualForcePD {
    FPhysicsPD PD; // 0x0
    FVector ForceLocationLocal; // 0xc
    float GravityCompensation; // 0x18
    int32_t Depth; // 0x1c
    EPhysicsVirtualForceApplication Application; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
