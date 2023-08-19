#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFloatMultiChannelNoiseWaveform : uint8_t {
    CosineWave = 0,
    SineWave = 1,
    PerlinNoise = 2,
    EFloatMultiChannelNoiseWaveform_MAX = 3,
};
#pragma pack(pop)
