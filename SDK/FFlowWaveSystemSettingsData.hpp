#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFlowWaveSystemSettingsData {
    TArray<FString> MapNames; // 0x0
    float FirstWaveCascadeSize; // 0x10
    int32_t WaveFoamCascadeIndex; // 0x14
    float WaveHeightBias; // 0x18
    float WaterBleed; // 0x1c
    float WaterlineFadeRate; // 0x20
    float WetnessSoftening; // 0x24
    float FoamFadeRate; // 0x28
    float FoamCoverage; // 0x2c
    float FoamMultiplier; // 0x30
    float FoamDeterminantBias; // 0x34
}; // Size: 0x38
#pragma pack(pop)
