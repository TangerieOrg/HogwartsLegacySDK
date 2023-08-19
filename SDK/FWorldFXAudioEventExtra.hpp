#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FWorldFXAudioEventRTPC.hpp"
#pragma pack(push, 1)
struct FWorldFXAudioEventExtra {
    float AttenuationScalingFactor; // 0x0
    float NoTickRadius; // 0x4
    float OcclusionRefreshInterval; // 0x8
    ECollisionChannel OcclusionCollisionChannel; // 0xc
    uint8_t bUseReverbVolumes : 1; // 0xd
    uint8_t bEnableSpotReflectors : 1; // 0xd
    uint8_t pad_bitfield_d_2 : 6;
    char pad_e[0x2];
    float OuterRadius; // 0x10
    float InnerRadius; // 0x14
    TArray<FWorldFXAudioEventRTPC> RTPCs; // 0x18
}; // Size: 0x28
#pragma pack(pop)
