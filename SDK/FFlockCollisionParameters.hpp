#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFlockCollisionParameters {
    float Radius; // 0x0
    int32_t PercentageWithCollision; // 0x4
    uint32_t CollisionsTestsPerFrame; // 0x8
    uint32_t StartupDelay; // 0xc
    bool bTraceComplex; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
