#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNoiseParams {
    float Lumpiness; // 0x0
    float Amplitude; // 0x4
    float Seed; // 0x8
    bool bTilable; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
