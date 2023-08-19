#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEBC_BoneRadiusVelocity {
    FName Bone; // 0x0
    float orbitRadius; // 0x8
    float orbitVelocity; // 0xc
    float LinearVelocity; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
