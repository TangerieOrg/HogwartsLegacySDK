#pragma once
#include <cstdint>
#include "FSourceEffectChorusSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
class USoundModulatorBase;
struct FSourceEffectChorusBaseSettings;
#pragma pack(push, 1)
class USourceEffectChorusPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0xa0];
    FSourceEffectChorusSettings Settings; // 0x108
    static USourceEffectChorusPreset* StaticClass();
    void SetWetModulator(USoundModulatorBase* Modulator);
    void SetWet(float WetAmount);
    void SetSpreadModulator(USoundModulatorBase* Modulator);
    void SetSpread(float Spread);
    void SetSettings(FSourceEffectChorusBaseSettings& Settings);
    void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings);
    void SetFrequencyModulator(USoundModulatorBase* Modulator);
    void SetFrequency(float Frequency);
    void SetFeedbackModulator(USoundModulatorBase* Modulator);
    void SetFeedback(float Feedback);
    void SetDryModulator(USoundModulatorBase* Modulator);
    void SetDry(float DryAmount);
    void SetDepthModulator(USoundModulatorBase* Modulator);
    void SetDepth(float Depth);
}; // Size: 0x180
#pragma pack(pop)
