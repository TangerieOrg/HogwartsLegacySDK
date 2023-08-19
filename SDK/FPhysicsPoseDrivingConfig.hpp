#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPhysicsPoseDrivingConfig {
    char pad_0[0x50];
    float GravityCompensation; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
