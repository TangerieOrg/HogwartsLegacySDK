#pragma once
#include <cstdint>
class UAudioImpulseResponse;
#pragma pack(push, 1)
struct FSubmixEffectConvolutionReverbSettings {
    float NormalizationVolumeDb; // 0x0
    bool bBypass; // 0x4
    bool bMixInputChannelFormatToImpulseResponseFormat; // 0x5
    bool bMixReverbOutputToOutputChannelFormat; // 0x6
    char pad_7[0x1];
    float SurroundRearChannelBleedDb; // 0x8
    bool bInvertRearChannelBleedPhase; // 0xc
    bool bSurroundRearChannelFlip; // 0xd
    char pad_e[0x2];
    float SurroundRearChannelBleedAmount; // 0x10
    char pad_14[0x4];
    UAudioImpulseResponse* ImpulseResponse; // 0x18
    bool AllowHArdwareAcceleration; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
