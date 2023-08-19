#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSubmixEffectReverbSettings {
    bool bBypassEarlyReflections; // 0x0
    char pad_1[0x3];
    float ReflectionsDelay; // 0x4
    float GainHF; // 0x8
    float ReflectionsGain; // 0xc
    bool bBypassLateReflections; // 0x10
    char pad_11[0x3];
    float LateDelay; // 0x14
    float DecayTime; // 0x18
    float Density; // 0x1c
    float Diffusion; // 0x20
    float AirAbsorptionGainHF; // 0x24
    float DecayHFRatio; // 0x28
    float LateGain; // 0x2c
    float Gain; // 0x30
    float WetLevel; // 0x34
    float DryLevel; // 0x38
    bool bBypass; // 0x3c
    char pad_3d[0x3];
}; // Size: 0x40
#pragma pack(pop)
