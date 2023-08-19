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
#include "FModularSynthPreset.hpp"
#include "FPatchId.hpp"
#include "FSynth1PatchCable.hpp"
#include "UFunction.hpp"
#include "UModularSynthComponent.hpp"
#include "USynthComponent.hpp"
UModularSynthComponent* UModularSynthComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.ModularSynthComponent");
    return (UModularSynthComponent*)res;
}
void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger"));
    struct Params_SetEnableRetrigger {
        bool RetriggerEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnableRetrigger params{};
    params.RetriggerEnabled = (bool)RetriggerEnabled;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetSynthPreset(FModularSynthPreset& SynthPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset"));
    struct Params_SetSynthPreset {
        FModularSynthPreset SynthPreset; // 0x0
    }; // Size: 0xe0
    Params_SetSynthPreset params{};
    params.SynthPreset = (FModularSynthPreset)SynthPreset;
    ProcessEvent(func, &params);
    SynthPreset = params.SynthPreset;
}
void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio"));
    struct Params_SetStereoDelayRatio {
        float DelayRatio; // 0x0
    }; // Size: 0x4
    Params_SetStereoDelayRatio params{};
    params.DelayRatio = (float)DelayRatio;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato"));
    struct Params_SetEnableLegato {
        bool LegatoEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnableLegato params{};
    params.LegatoEnabled = (bool)LegatoEnabled;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvSustainGain(float SustainGain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain"));
    struct Params_SetModEnvSustainGain {
        float SustainGain; // 0x0
    }; // Size: 0x4
    Params_SetModEnvSustainGain params{};
    params.SustainGain = (float)SustainGain;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled"));
    struct Params_SetStereoDelayIsEnabled {
        bool StereoDelayEnabled; // 0x0
    }; // Size: 0x1
    Params_SetStereoDelayIsEnabled params{};
    params.StereoDelayEnabled = (bool)StereoDelayEnabled;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetSustainGain(float SustainGain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetSustainGain"));
    struct Params_SetSustainGain {
        float SustainGain; // 0x0
    }; // Size: 0x4
    Params_SetSustainGain params{};
    params.SustainGain = (float)SustainGain;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetPortamento(float Portamento) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetPortamento"));
    struct Params_SetPortamento {
        float Portamento; // 0x0
    }; // Size: 0x4
    Params_SetPortamento params{};
    params.Portamento = (float)Portamento;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel"));
    struct Params_SetStereoDelayWetlevel {
        float DelayWetlevel; // 0x0
    }; // Size: 0x4
    Params_SetStereoDelayWetlevel params{};
    params.DelayWetlevel = (float)DelayWetlevel;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch"));
    struct Params_SetLFOPatch {
        int32_t LFOIndex; // 0x0
        ESynthLFOPatchType LFOPatchType; // 0x4
    }; // Size: 0x5
    Params_SetLFOPatch params{};
    params.LFOIndex = (int32_t)LFOIndex;
    params.LFOPatchType = (ESynthLFOPatchType)LFOPatchType;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime"));
    struct Params_SetStereoDelayTime {
        float DelayTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetStereoDelayTime params{};
    params.DelayTimeMsec = (float)DelayTimeMsec;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode"));
    struct Params_SetStereoDelayMode {
        ESynthStereoDelayMode StereoDelayMode; // 0x0
    }; // Size: 0x1
    Params_SetStereoDelayMode params{};
    params.StereoDelayMode = (ESynthStereoDelayMode)StereoDelayMode;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback"));
    struct Params_SetStereoDelayFeedback {
        float DelayFeedback; // 0x0
    }; // Size: 0x4
    Params_SetStereoDelayFeedback params{};
    params.DelayFeedback = (float)DelayFeedback;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod"));
    struct Params_SetOscFrequencyMod {
        int32_t OscIndex; // 0x0
        float OscFreqMod; // 0x4
    }; // Size: 0x8
    Params_SetOscFrequencyMod params{};
    params.OscIndex = (int32_t)OscIndex;
    params.OscFreqMod = (float)OscFreqMod;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetSpread(float Spread) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetSpread"));
    struct Params_SetSpread {
        float Spread; // 0x0
    }; // Size: 0x4
    Params_SetSpread params{};
    params.Spread = (float)Spread;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime"));
    struct Params_SetReleaseTime {
        float ReleaseTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetReleaseTime params{};
    params.ReleaseTimeMsec = (float)ReleaseTimeMsec;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscSemitones(int32_t OscIndex, float Semitones) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones"));
    struct Params_SetOscSemitones {
        int32_t OscIndex; // 0x0
        float Semitones; // 0x4
    }; // Size: 0x8
    Params_SetOscSemitones params{};
    params.OscIndex = (int32_t)OscIndex;
    params.Semitones = (float)Semitones;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetPitchBend(float PitchBend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetPitchBend"));
    struct Params_SetPitchBend {
        float PitchBend; // 0x0
    }; // Size: 0x4
    Params_SetPitchBend params{};
    params.PitchBend = (float)PitchBend;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetChorusFrequency(float Frequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency"));
    struct Params_SetChorusFrequency {
        float Frequency; // 0x0
    }; // Size: 0x4
    Params_SetChorusFrequency params{};
    params.Frequency = (float)Frequency;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime"));
    struct Params_SetModEnvAttackTime {
        float AttackTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetModEnvAttackTime params{};
    params.AttackTimeMsec = (float)AttackTimeMsec;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetPan(float Pan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetPan"));
    struct Params_SetPan {
        float Pan; // 0x0
    }; // Size: 0x4
    Params_SetPan params{};
    params.Pan = (float)Pan;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscPulsewidth(int32_t OscIndex, float Pulsewidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth"));
    struct Params_SetOscPulsewidth {
        int32_t OscIndex; // 0x0
        float Pulsewidth; // 0x4
    }; // Size: 0x8
    Params_SetOscPulsewidth params{};
    params.OscIndex = (int32_t)OscIndex;
    params.Pulsewidth = (float)Pulsewidth;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscType(int32_t OscIndex, ESynth1OscType OscType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscType"));
    struct Params_SetOscType {
        int32_t OscIndex; // 0x0
        ESynth1OscType OscType; // 0x4
    }; // Size: 0x5
    Params_SetOscType params{};
    params.OscIndex = (int32_t)OscIndex;
    params.OscType = (ESynth1OscType)OscType;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscSync(bool bIsSynced) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscSync"));
    struct Params_SetOscSync {
        bool bIsSynced; // 0x0
    }; // Size: 0x1
    Params_SetOscSync params{};
    params.bIsSynced = (bool)bIsSynced;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscOctave(int32_t OscIndex, float Octave) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscOctave"));
    struct Params_SetOscOctave {
        int32_t OscIndex; // 0x0
        float Octave; // 0x4
    }; // Size: 0x8
    Params_SetOscOctave params{};
    params.OscIndex = (int32_t)OscIndex;
    params.Octave = (float)Octave;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetLFOType"));
    struct Params_SetLFOType {
        int32_t LFOIndex; // 0x0
        ESynthLFOType LFOType; // 0x4
    }; // Size: 0x5
    Params_SetLFOType params{};
    params.LFOIndex = (int32_t)LFOIndex;
    params.LFOType = (ESynthLFOType)LFOType;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscGainMod(int32_t OscIndex, float OscGainMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod"));
    struct Params_SetOscGainMod {
        int32_t OscIndex; // 0x0
        float OscGainMod; // 0x4
    }; // Size: 0x8
    Params_SetOscGainMod params{};
    params.OscIndex = (int32_t)OscIndex;
    params.OscGainMod = (float)OscGainMod;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscGain(int32_t OscIndex, float OscGain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscGain"));
    struct Params_SetOscGain {
        int32_t OscIndex; // 0x0
        float OscGain; // 0x4
    }; // Size: 0x8
    Params_SetOscGain params{};
    params.OscIndex = (int32_t)OscIndex;
    params.OscGain = (float)OscGain;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.NoteOff"));
    struct Params_NoteOff {
        float Note; // 0x0
        bool bAllNotesOff; // 0x4
        bool bKillAllNotes; // 0x5
    }; // Size: 0x6
    Params_NoteOff params{};
    params.Note = (float)Note;
    params.bAllNotesOff = (bool)bAllNotesOff;
    params.bKillAllNotes = (bool)bKillAllNotes;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetOscCents(int32_t OscIndex, float Cents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetOscCents"));
    struct Params_SetOscCents {
        int32_t OscIndex; // 0x0
        float Cents; // 0x4
    }; // Size: 0x8
    Params_SetOscCents params{};
    params.OscIndex = (int32_t)OscIndex;
    params.Cents = (float)Cents;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvReleaseTime(float Release) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime"));
    struct Params_SetModEnvReleaseTime {
        float Release; // 0x0
    }; // Size: 0x4
    Params_SetModEnvReleaseTime params{};
    params.Release = (float)Release;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetChorusEnabled(bool EnableChorus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled"));
    struct Params_SetChorusEnabled {
        bool EnableChorus; // 0x0
    }; // Size: 0x1
    Params_SetChorusEnabled params{};
    params.EnableChorus = (bool)EnableChorus;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvPatch(ESynthModEnvPatch InPatchType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch"));
    struct Params_SetModEnvPatch {
        ESynthModEnvPatch InPatchType; // 0x0
    }; // Size: 0x1
    Params_SetModEnvPatch params{};
    params.InPatchType = (ESynthModEnvPatch)InPatchType;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvInvert(bool bInvert) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert"));
    struct Params_SetModEnvInvert {
        bool bInvert; // 0x0
    }; // Size: 0x1
    Params_SetModEnvInvert params{};
    params.bInvert = (bool)bInvert;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvDepth(float Depth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth"));
    struct Params_SetModEnvDepth {
        float Depth; // 0x0
    }; // Size: 0x4
    Params_SetModEnvDepth params{};
    params.Depth = (float)Depth;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetLFOMode"));
    struct Params_SetLFOMode {
        int32_t LFOIndex; // 0x0
        ESynthLFOMode LFOMode; // 0x4
    }; // Size: 0x5
    Params_SetLFOMode params{};
    params.LFOIndex = (int32_t)LFOIndex;
    params.LFOMode = (ESynthLFOMode)LFOMode;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime"));
    struct Params_SetModEnvDecayTime {
        float DecayTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetModEnvDecayTime params{};
    params.DecayTimeMsec = (float)DecayTimeMsec;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetLFOGainMod(int32_t LFOIndex, float GainMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod"));
    struct Params_SetLFOGainMod {
        int32_t LFOIndex; // 0x0
        float GainMod; // 0x4
    }; // Size: 0x8
    Params_SetLFOGainMod params{};
    params.LFOIndex = (int32_t)LFOIndex;
    params.GainMod = (float)GainMod;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch"));
    struct Params_SetModEnvBiasPatch {
        ESynthModEnvBiasPatch InPatchType; // 0x0
    }; // Size: 0x1
    Params_SetModEnvBiasPatch params{};
    params.InPatchType = (ESynthModEnvBiasPatch)InPatchType;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency"));
    struct Params_SetFilterFrequency {
        float FilterFrequencyHz; // 0x0
    }; // Size: 0x4
    Params_SetFilterFrequency params{};
    params.FilterFrequencyHz = (float)FilterFrequencyHz;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert"));
    struct Params_SetModEnvBiasInvert {
        bool bInvert; // 0x0
    }; // Size: 0x1
    Params_SetModEnvBiasInvert params{};
    params.bInvert = (bool)bInvert;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetLFOGain(int32_t LFOIndex, float Gain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetLFOGain"));
    struct Params_SetLFOGain {
        int32_t LFOIndex; // 0x0
        float Gain; // 0x4
    }; // Size: 0x8
    Params_SetLFOGain params{};
    params.LFOIndex = (int32_t)LFOIndex;
    params.Gain = (float)Gain;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod"));
    struct Params_SetLFOFrequencyMod {
        int32_t LFOIndex; // 0x0
        float FrequencyModHz; // 0x4
    }; // Size: 0x8
    Params_SetLFOFrequencyMod params{};
    params.LFOIndex = (int32_t)LFOIndex;
    params.FrequencyModHz = (float)FrequencyModHz;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetLFOFrequency(int32_t LFOIndex, float FrequencyHz) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency"));
    struct Params_SetLFOFrequency {
        int32_t LFOIndex; // 0x0
        float FrequencyHz; // 0x4
    }; // Size: 0x8
    Params_SetLFOFrequency params{};
    params.LFOIndex = (int32_t)LFOIndex;
    params.FrequencyHz = (float)FrequencyHz;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetGainDb(float GainDb) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetGainDb"));
    struct Params_SetGainDb {
        float GainDb; // 0x0
    }; // Size: 0x4
    Params_SetGainDb params{};
    params.GainDb = (float)GainDb;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetFilterType(ESynthFilterType FilterType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetFilterType"));
    struct Params_SetFilterType {
        ESynthFilterType FilterType; // 0x0
    }; // Size: 0x1
    Params_SetFilterType params{};
    params.FilterType = (ESynthFilterType)FilterType;
    ProcessEvent(func, &params);
}
bool UModularSynthComponent::SetEnablePatch(FPatchId PatchId, bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch"));
    struct Params_SetEnablePatch {
        FPatchId PatchId; // 0x0
        bool bIsEnabled; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_SetEnablePatch params{};
    params.PatchId = (FPatchId)PatchId;
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UModularSynthComponent::SetFilterQMod(float FilterQ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod"));
    struct Params_SetFilterQMod {
        float FilterQ; // 0x0
    }; // Size: 0x4
    Params_SetFilterQMod params{};
    params.FilterQ = (float)FilterQ;
    ProcessEvent(func, &params);
}
FPatchId UModularSynthComponent::CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.CreatePatch"));
    struct Params_CreatePatch {
        ESynth1PatchSource PatchSource; // 0x0
        char pad_1[0x7];
        TArray<FSynth1PatchCable> PatchCables; // 0x8
        bool bEnableByDefault; // 0x18
        char pad_19[0x3];
        FPatchId ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_CreatePatch params{};
    params.PatchSource = (ESynth1PatchSource)PatchSource;
    params.PatchCables = (TArray<FSynth1PatchCable>)PatchCables;
    params.bEnableByDefault = (bool)bEnableByDefault;
    ProcessEvent(func, &params);
    PatchCables = params.PatchCables;
    return (FPatchId)params.ReturnValue;
}
void UModularSynthComponent::SetFilterQ(float FilterQ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetFilterQ"));
    struct Params_SetFilterQ {
        float FilterQ; // 0x0
    }; // Size: 0x4
    Params_SetFilterQ params{};
    params.FilterQ = (float)FilterQ;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod"));
    struct Params_SetFilterFrequencyMod {
        float FilterFrequencyHz; // 0x0
    }; // Size: 0x4
    Params_SetFilterFrequencyMod params{};
    params.FilterFrequencyHz = (float)FilterFrequencyHz;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm"));
    struct Params_SetFilterAlgorithm {
        ESynthFilterAlgorithm FilterAlgorithm; // 0x0
    }; // Size: 0x1
    Params_SetFilterAlgorithm params{};
    params.FilterAlgorithm = (ESynthFilterAlgorithm)FilterAlgorithm;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetEnableUnison(bool EnableUnison) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison"));
    struct Params_SetEnableUnison {
        bool EnableUnison; // 0x0
    }; // Size: 0x1
    Params_SetEnableUnison params{};
    params.EnableUnison = (bool)EnableUnison;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony"));
    struct Params_SetEnablePolyphony {
        bool bEnablePolyphony; // 0x0
    }; // Size: 0x1
    Params_SetEnablePolyphony params{};
    params.bEnablePolyphony = (bool)bEnablePolyphony;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetDecayTime(float DecayTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetDecayTime"));
    struct Params_SetDecayTime {
        float DecayTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetDecayTime params{};
    params.DecayTimeMsec = (float)DecayTimeMsec;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetChorusFeedback(float Feedback) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback"));
    struct Params_SetChorusFeedback {
        float Feedback; // 0x0
    }; // Size: 0x4
    Params_SetChorusFeedback params{};
    params.Feedback = (float)Feedback;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetChorusDepth(float Depth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth"));
    struct Params_SetChorusDepth {
        float Depth; // 0x0
    }; // Size: 0x4
    Params_SetChorusDepth params{};
    params.Depth = (float)Depth;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::SetAttackTime(float AttackTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.SetAttackTime"));
    struct Params_SetAttackTime {
        float AttackTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetAttackTime params{};
    params.AttackTimeMsec = (float)AttackTimeMsec;
    ProcessEvent(func, &params);
}
void UModularSynthComponent::NoteOn(float Note, int32_t Velocity, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.ModularSynthComponent.NoteOn"));
    struct Params_NoteOn {
        float Note; // 0x0
        int32_t Velocity; // 0x4
        float Duration; // 0x8
    }; // Size: 0xc
    Params_NoteOn params{};
    params.Note = (float)Note;
    params.Velocity = (int32_t)Velocity;
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
