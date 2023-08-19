#pragma once
#include <cstdint>
#include "FAkMainOutputSettings.hpp"
#include "FAkSpatialAudioSettings.hpp"
#pragma pack(push, 1)
struct FAkCommonInitializationSettings {
    uint32_t MaximumNumberOfMemoryPools; // 0x0
    uint32_t MaximumNumberOfPositioningPaths; // 0x4
    uint32_t CommandQueueSize; // 0x8
    uint32_t SamplesPerFrame; // 0xc
    FAkMainOutputSettings MainOutputSettings; // 0x10
    float StreamingLookAheadRatio; // 0x38
    uint16_t NumberOfRefillsInVoice; // 0x3c
    char pad_3e[0x2];
    FAkSpatialAudioSettings SpatialAudioSettings; // 0x40
}; // Size: 0x60
#pragma pack(pop)
