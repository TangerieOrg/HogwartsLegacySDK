#pragma once
#include <cstdint>
#include "EInitialWaveOscillatorOffsetType.hpp"
#pragma pack(push, 1)
struct FWaveOscillator {
    float Amplitude; // 0x0
    float Frequency; // 0x4
    EInitialWaveOscillatorOffsetType InitialOffsetType; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
