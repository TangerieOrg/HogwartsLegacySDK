#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCompanionVolumeSettings {
    float IdealDistanceFromPlayer; // 0x0
    bool bDisableInteractions; // 0x4
    char pad_5[0x3];
    float movementDelayTimer; // 0x8
    float BufferDistance; // 0xc
    float ReachDistance; // 0x10
}; // Size: 0x14
#pragma pack(pop)
