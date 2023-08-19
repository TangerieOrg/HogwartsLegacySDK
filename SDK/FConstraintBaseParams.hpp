#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FConstraintBaseParams {
    float Stiffness; // 0x0
    float Damping; // 0x4
    float Restitution; // 0x8
    float ContactDistance; // 0xc
    uint8_t bSoftConstraint : 1; // 0x10
    uint8_t pad_bitfield_10_1 : 7;
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
