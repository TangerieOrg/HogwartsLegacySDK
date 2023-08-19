#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNoiseParams2D {
    float LumpinessX; // 0x0
    float LumpinessY; // 0x4
    float Amplitude; // 0x8
    float Seed; // 0xc
    bool bTilable; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
