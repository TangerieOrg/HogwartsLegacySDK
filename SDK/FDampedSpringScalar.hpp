#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDampedSpringScalar {
    char pad_0[0x8];
    float Frequency; // 0x8
    float DampingRatio; // 0xc
}; // Size: 0x10
#pragma pack(pop)
