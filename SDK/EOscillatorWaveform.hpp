#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOscillatorWaveform : uint8_t {
    SineWave = 0,
    PerlinNoise = 1,
    EOscillatorWaveform_MAX = 2,
};
#pragma pack(pop)
