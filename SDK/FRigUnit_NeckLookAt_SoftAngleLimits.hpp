#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigUnit_NeckLookAt_SoftAngleLimits {
    float MinInputAngle; // 0x0
    float MaxInputAngle; // 0x4
    float MaxOutputAngle; // 0x8
    float LoosenessFactor; // 0xc
}; // Size: 0x10
#pragma pack(pop)
