#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FParticleReplayTrackKey {
    float Time; // 0x0
    float Duration; // 0x4
    int32_t ClipIDNumber; // 0x8
}; // Size: 0xc
#pragma pack(pop)
