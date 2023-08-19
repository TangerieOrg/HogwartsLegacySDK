#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMotionTableState {
    bool bLoop; // 0x0
    char pad_1[0x3];
    float Duration; // 0x4
    float TravelDistance; // 0x8
    char pad_c[0x54];
}; // Size: 0x60
#pragma pack(pop)
