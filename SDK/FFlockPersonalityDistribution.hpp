#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFlockPersonalityDistribution {
    float Percentage; // 0x0
    bool bAllowStacking; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
