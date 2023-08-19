#pragma once
#include <cstdint>
#include "EFloatMultiChannelNoiseWaveform.hpp"
#pragma pack(push, 1)
struct FFloatMultiChannelNoiseChannel {
    float Frequency; // 0x0
    float Amplitude; // 0x4
    float TimeOffset; // 0x8
    EFloatMultiChannelNoiseWaveform Waveform; // 0xc
    bool Enabled; // 0xd
    char pad_e[0x2];
}; // Size: 0x10
#pragma pack(pop)
