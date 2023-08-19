#pragma once
#include <cstdint>
#include "ESynth1OscType.hpp"
#include "ESynth1PatchSource.hpp"
#include "ESynthFilterAlgorithm.hpp"
#include "ESynthFilterType.hpp"
#include "ESynthLFOMode.hpp"
#include "ESynthLFOPatchType.hpp"
#include "ESynthLFOType.hpp"
#include "ESynthModEnvBiasPatch.hpp"
#include "ESynthModEnvPatch.hpp"
#include "ESynthStereoDelayMode.hpp"
#include "FPatchId.hpp"
#include "FSynth1PatchCable.hpp"
#include "USynthComponent.hpp"
struct FModularSynthPreset;
#pragma pack(push, 1)
class UModularSynthComponent : public USynthComponent {
public:
    int32_t VoiceCount; // 0x6e0
    char pad_6e4[0x6bc];
    static UModularSynthComponent* StaticClass();
    void SetSynthPreset(FModularSynthPreset& SynthPreset);
    void SetSustainGain(float SustainGain);
    void SetStereoDelayWetlevel(float DelayWetlevel);
    void SetStereoDelayTime(float DelayTimeMsec);
    void SetStereoDelayRatio(float DelayRatio);
    void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
    void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
    void SetStereoDelayFeedback(float DelayFeedback);
    void SetSpread(float Spread);
    void SetReleaseTime(float ReleaseTimeMsec);
    void SetPortamento(float Portamento);
    void SetPitchBend(float PitchBend);
    void SetPan(float Pan);
    void SetOscType(int32_t OscIndex, ESynth1OscType OscType);
    void SetOscSync(bool bIsSynced);
    void SetOscSemitones(int32_t OscIndex, float Semitones);
    void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);
    void SetOscOctave(int32_t OscIndex, float Octave);
    void SetOscGainMod(int32_t OscIndex, float OscGainMod);
    void SetOscGain(int32_t OscIndex, float OscGain);
    void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);
    void SetOscCents(int32_t OscIndex, float Cents);
    void SetModEnvSustainGain(float SustainGain);
    void SetModEnvReleaseTime(float Release);
    void SetModEnvPatch(ESynthModEnvPatch InPatchType);
    void SetModEnvInvert(bool bInvert);
    void SetModEnvDepth(float Depth);
    void SetModEnvDecayTime(float DecayTimeMsec);
    void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);
    void SetModEnvBiasInvert(bool bInvert);
    void SetModEnvAttackTime(float AttackTimeMsec);
    void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);
    void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);
    void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);
    void SetLFOGainMod(int32_t LFOIndex, float GainMod);
    void SetLFOGain(int32_t LFOIndex, float Gain);
    void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);
    void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);
    void SetGainDb(float GainDb);
    void SetFilterType(ESynthFilterType FilterType);
    void SetFilterQMod(float FilterQ);
    void SetFilterQ(float FilterQ);
    void SetFilterFrequencyMod(float FilterFrequencyHz);
    void SetFilterFrequency(float FilterFrequencyHz);
    void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
    void SetEnableUnison(bool EnableUnison);
    void SetEnableRetrigger(bool RetriggerEnabled);
    void SetEnablePolyphony(bool bEnablePolyphony);
    bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);
    void SetEnableLegato(bool LegatoEnabled);
    void SetDecayTime(float DecayTimeMsec);
    void SetChorusFrequency(float Frequency);
    void SetChorusFeedback(float Feedback);
    void SetChorusEnabled(bool EnableChorus);
    void SetChorusDepth(float Depth);
    void SetAttackTime(float AttackTimeMsec);
    void NoteOn(float Note, int32_t Velocity, float Duration);
    void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
    FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);
}; // Size: 0xda0
#pragma pack(pop)
