#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSoundWaveSpectralDataEntry {
    float Magnitude; // 0x0
    float NormalizedMagnitude; // 0x4
}; // Size: 0x8
#pragma pack(pop)
