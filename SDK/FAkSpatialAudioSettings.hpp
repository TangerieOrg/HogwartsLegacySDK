#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAkSpatialAudioSettings {
    uint32_t MaxSoundPropagationDepth; // 0x0
    float MovementThreshold; // 0x4
    uint32_t NumberOfPrimaryRays; // 0x8
    uint32_t ReflectionOrder; // 0xc
    float MaximumPathLength; // 0x10
    float CPULimitPercentage; // 0x14
    bool EnableDiffractionOnReflections; // 0x18
    bool EnableGeometricDiffractionAndTransmission; // 0x19
    bool CalcEmitterVirtualPosition; // 0x1a
    bool UseObstruction; // 0x1b
    bool UseOcclusion; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
