#pragma once
#include <cstdint>
class USoundWave;
#pragma pack(push, 1)
struct FSoundWaveEnvelopeDataPerSound {
    float Envelope; // 0x0
    float PlaybackTime; // 0x4
    USoundWave* SoundWave; // 0x8
}; // Size: 0x10
#pragma pack(pop)
