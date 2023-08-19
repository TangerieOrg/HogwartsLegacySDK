#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCRSimContainer {
    char pad_0[0x8];
    float TimeStep; // 0x8
    float AccumulatedTime; // 0xc
    float TimeLeftForStep; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
