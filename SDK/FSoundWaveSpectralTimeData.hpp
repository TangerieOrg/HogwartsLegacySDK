#pragma once
#include <cstdint>
#include "FSoundWaveSpectralDataEntry.hpp"
#pragma pack(push, 1)
struct FSoundWaveSpectralTimeData {
    TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
    float TimeSec; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
