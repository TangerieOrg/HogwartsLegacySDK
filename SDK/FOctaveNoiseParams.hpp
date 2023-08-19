#pragma once
#include <cstdint>
#include "EPerlinNoiseOctaveMode.hpp"
#pragma pack(push, 1)
struct FOctaveNoiseParams {
    int32_t Octaves; // 0x0
    EPerlinNoiseOctaveMode OctaveMode; // 0x4
    char pad_5[0x3];
    float OctavePersistence; // 0x8
    float BaseFrequency; // 0xc
    float Amplitude; // 0x10
    float Seed; // 0x14
    bool bTilable; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
