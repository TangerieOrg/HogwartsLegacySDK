#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSoundWaveSpectralData {
    float FrequencyHz; // 0x0
    float Magnitude; // 0x4
    float NormalizedMagnitude; // 0x8
}; // Size: 0xc
#pragma pack(pop)
