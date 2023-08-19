#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAccioDampingSphere {
    float Radius; // 0x0
    float LinearDamping; // 0x4
    float AngularDamping; // 0x8
}; // Size: 0xc
#pragma pack(pop)
