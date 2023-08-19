#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMediaSoundComponentSpectralData {
    float FrequencyHz; // 0x0
    float Magnitude; // 0x4
}; // Size: 0x8
#pragma pack(pop)
