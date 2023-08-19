#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDampedSpringVector {
    char pad_0[0x18];
    float Frequency; // 0x18
    float DampingRatio; // 0x1c
    float MaxAcceleration; // 0x20
}; // Size: 0x24
#pragma pack(pop)
