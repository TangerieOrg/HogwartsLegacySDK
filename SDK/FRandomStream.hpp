#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRandomStream {
    int32_t InitialSeed; // 0x0
    int32_t Seed; // 0x4
}; // Size: 0x8
#pragma pack(pop)
