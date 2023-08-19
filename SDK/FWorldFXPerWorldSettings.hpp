#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWorldFXPerWorldSettings {
    float DefaultAudioDistanceMeters; // 0x0
    float DefaultParticleDistanceMeters; // 0x4
    float DefaultGenericDistanceMeters; // 0x8
    float MaxAudioDistanceMeters; // 0xc
    float MaxParticleDistanceMeters; // 0x10
    float MaxGenericDistanceMeters; // 0x14
    float OctreeExpandWorldBoundsFactor; // 0x18
    bool bDisableAllCulling; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
