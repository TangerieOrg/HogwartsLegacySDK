#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDynamicSplineUsage {
    int32_t Index; // 0x0
    uint8_t UsageFlags; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
