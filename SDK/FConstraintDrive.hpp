#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FConstraintDrive {
    float Stiffness; // 0x0
    float Damping; // 0x4
    float MaxForce; // 0x8
    uint8_t bEnablePositionDrive : 1; // 0xc
    uint8_t bEnableVelocityDrive : 1; // 0xc
    uint8_t pad_bitfield_c_2 : 6;
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
