#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkinFXPreviewAnimationSetup {
    char pad_0[0x28];
    float Position; // 0x28
    float PlayRate; // 0x2c
    bool bIsLooping; // 0x30
    bool bIsPlaying; // 0x31
    char pad_32[0x6];
}; // Size: 0x38
#pragma pack(pop)
