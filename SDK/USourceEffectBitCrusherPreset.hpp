#pragma once
#include <cstdint>
#include "FSourceEffectBitCrusherSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
struct FSourceEffectBitCrusherBaseSettings;
class USoundModulatorBase;
#pragma pack(push, 1)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x58];
    FSourceEffectBitCrusherSettings Settings; // 0xc0
    static USourceEffectBitCrusherPreset* StaticClass();
    void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings);
    void SetSampleRateModulator(USoundModulatorBase* Modulator);
    void SetSampleRate(float SampleRate);
    void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings);
    void SetBits(float Bits);
    void SetBitModulator(USoundModulatorBase* Modulator);
}; // Size: 0xf0
#pragma pack(pop)
