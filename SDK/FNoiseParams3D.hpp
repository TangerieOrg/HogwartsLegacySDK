#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNoiseParams3D {
    float LumpinessX; // 0x0
    float LumpinessY; // 0x4
    float LumpinessZ; // 0x8
    float Amplitude; // 0xc
    float Seed; // 0x10
    bool bTilable; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
