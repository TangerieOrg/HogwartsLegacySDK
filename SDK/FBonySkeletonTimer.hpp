#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBonySkeletonTimer {
    float Timeout; // 0x0
    bool bEnabled; // 0x4
    bool bTripped; // 0x5
    char pad_6[0x2];
}; // Size: 0x8
#pragma pack(pop)
