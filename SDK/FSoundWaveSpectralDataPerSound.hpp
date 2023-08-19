#pragma once
#include <cstdint>
#include "FSoundWaveSpectralData.hpp"
class USoundWave;
#pragma pack(push, 1)
struct FSoundWaveSpectralDataPerSound {
    TArray<FSoundWaveSpectralData> SpectralData; // 0x0
    float PlaybackTime; // 0x10
    char pad_14[0x4];
    USoundWave* SoundWave; // 0x18
}; // Size: 0x20
#pragma pack(pop)
