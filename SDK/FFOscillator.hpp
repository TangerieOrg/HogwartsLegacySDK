#pragma once
#include <cstdint>
#include "EInitialOscillatorOffset.hpp"
#include "EOscillatorWaveform.hpp"
#pragma pack(push, 1)
struct FFOscillator {
    float Amplitude; // 0x0
    float Frequency; // 0x4
    EInitialOscillatorOffset InitialOffset; // 0x8
    EOscillatorWaveform Waveform; // 0x9
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
