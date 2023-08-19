#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNoiseParams4D {
    float LumpinessX; // 0x0
    float LumpinessY; // 0x4
    float LumpinessZ; // 0x8
    float LumpinessW; // 0xc
    float Amplitude; // 0x10
    float Seed; // 0x14
    bool bTilable; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
