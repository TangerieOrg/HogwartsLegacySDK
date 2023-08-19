#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDampedSpringQuat {
    char pad_0[0x28];
    float Frequency; // 0x28
    float DampingRatio; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
