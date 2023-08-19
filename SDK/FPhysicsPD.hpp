#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPhysicsPD {
    float Stiffness; // 0x0
    float Damping; // 0x4
    float Max; // 0x8
}; // Size: 0xc
#pragma pack(pop)
