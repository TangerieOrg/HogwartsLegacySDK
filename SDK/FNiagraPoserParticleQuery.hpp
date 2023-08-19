#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagraPoserParticleQuery {
    FName Position; // 0x0
    FName Orientation; // 0x8
    FName Scale3D; // 0x10
    uint8_t bOrientation : 1; // 0x18
    uint8_t bScale3d : 1; // 0x18
    uint8_t pad_bitfield_18_2 : 6;
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
