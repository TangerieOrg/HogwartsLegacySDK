#pragma once
#include <cstdint>
class UMotoSynthSource;
#pragma pack(push, 1)
struct FMotoSynthRuntimeSettings {
    bool bSynthToneEnabled; // 0x0
    char pad_1[0x3];
    float SynthToneVolume; // 0x4
    float SynthToneFilterFrequency; // 0x8
    int32_t SynthOctaveShift; // 0xc
    bool bGranularEngineEnabled; // 0x10
    char pad_11[0x3];
    float GranularEngineVolume; // 0x14
    float GranularEnginePitchScale; // 0x18
    int32_t NumSamplesToCrossfadeBetweenGrains; // 0x1c
    int32_t NumGrainTableEntriesPerGrain; // 0x20
    int32_t GrainTableRandomOffsetForConstantRPMs; // 0x24
    int32_t GrainCrossfadeSamplesForConstantRPMs; // 0x28
    char pad_2c[0x4];
    UMotoSynthSource* AccelerationSource; // 0x30
    UMotoSynthSource* DecelerationSource; // 0x38
    bool bStereoWidenerEnabled; // 0x40
    char pad_41[0x3];
    float StereoDelayMsec; // 0x44
    float StereoFeedback; // 0x48
    float StereoWidenerWetlevel; // 0x4c
    float StereoWidenerDryLevel; // 0x50
    float StereoWidenerDelayRatio; // 0x54
    bool bStereoWidenerFilterEnabled; // 0x58
    char pad_59[0x3];
    float StereoWidenerFilterFrequency; // 0x5c
    float StereoWidenerFilterQ; // 0x60
    char pad_64[0x4];
}; // Size: 0x68
#pragma pack(pop)
