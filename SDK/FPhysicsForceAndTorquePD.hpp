#pragma once
#include <cstdint>
#include "FPhysicsPD.hpp"
#pragma pack(push, 1)
struct FPhysicsForceAndTorquePD {
    FPhysicsPD VerticalForce; // 0x0
    FPhysicsPD HorizontalForce; // 0xc
    FPhysicsPD Torque; // 0x18
}; // Size: 0x24
#pragma pack(pop)
