#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDampedSpringRotator {
    char pad_0[0x18];
    float Frequency; // 0x18
    float DampingRatio; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
